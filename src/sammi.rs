use std::ffi::CStr;

use once_cell::sync::{Lazy, OnceCell};
use serde::{Deserialize, Serialize};

use crate::{
    global,
    helpers::{self, Offset},
};

/// The config for sammi options, taken from the full serialized rev2mod config
static SAMMI_CONFIG: Lazy<OnceCell<SammiConfig>> =
    Lazy::new(|| OnceCell::with_value(crate::global::CONFIG.lock().sammi.clone()));

/// A message passed to the sammi event handler
#[derive(Debug, Clone)]
pub enum SammiMessage {
    UpdateState(SammiState),
    PlayerHit(HitInfo),
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SammiConfig {
    /// The Sammi API URL
    pub api_url: String,
    pub webhook_url: String,
    pub button_id: String,
}

impl Default for SammiConfig {
    fn default() -> Self {
        Self {
            api_url: "http://127.0.0.1:9450/api".into(),
            webhook_url: "http://127.0.0.1:9450/webhook".into(),
            button_id: "ID1".into(),
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum PlayerId {
    Player1,
    Player2,
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy, PartialEq, Eq)]
pub enum Character {
    Sol = 0,
    Ky,
    May,
    Millia,
    Zato,
    Potemkin,
    Chipp,
    Faust,
    Axl,
    Venom,
    Slayer,
    Ino,
    Bedman,
    Ramlethal,
    Sin,
    Elphelt,
    Leo,
    Johnny,
    JackO,
    Jam,
    Haehyun,
    Raven,
    Dizzy,
    Baiken,
    Answer,
}

impl Character {
    pub fn from_number(number: usize) -> Self {
        match number {
            0 => Character::Sol,
            1 => Character::Ky,
            2 => Character::May,
            3 => Character::Millia,
            4 => Character::Zato,
            5 => Character::Potemkin,
            6 => Character::Chipp,
            7 => Character::Faust,
            8 => Character::Axl,
            9 => Character::Venom,
            10 => Character::Slayer,
            11 => Character::Ino,
            12 => Character::Bedman,
            13 => Character::Ramlethal,
            14 => Character::Sin,
            15 => Character::Elphelt,
            16 => Character::Leo,
            17 => Character::Johnny,
            18 => Character::JackO,
            19 => Character::Jam,
            20 => Character::Haehyun,
            21 => Character::Raven,
            22 => Character::Dizzy,
            23 => Character::Baiken,
            24 => Character::Answer,
            _ => panic!("Invalid character number: {}", number),
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct HitInfo {
    hit_type: HitType,
    attacker: PlayerId,
    attacker_state: String,
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum HitType {
    Normal,
    Counter,
    MortalCounter,
    Unknown,
}

#[derive(Debug, Clone, Serialize, PartialEq, Eq)]
pub struct SammiState {
    character_p1: Character,
    character_p2: Character,

    health_p1: isize,
    health_p2: isize,

    tension_pulse_p1: isize,
    tension_pulse_p2: isize,

    tension_p1: isize,
    tension_p2: isize,

    burst_p1: isize,
    burst_p2: isize,

    risc_p1: isize,
    risc_p2: isize,

    state_p1: String,
    state_p2: String,
}

impl SammiState {
    const fn new() -> Self {
        Self {
            character_p1: Character::Sol,
            character_p2: Character::Sol,
            health_p1: 420,
            health_p2: 420,
            tension_pulse_p1: 0,
            tension_pulse_p2: 0,
            tension_p1: 0,
            tension_p2: 0,
            burst_p1: 0,
            burst_p2: 0,
            risc_p1: 0,
            risc_p2: 0,
            state_p1: String::new(),
            state_p2: String::new(),
        }
    }
}

/// Message handler loop which is spawned in a separate thread
pub async fn message_handler(mut rx: tokio::sync::mpsc::Receiver<SammiMessage>) {
    let config = SAMMI_CONFIG.get().unwrap();
    let agent = reqwest::Client::new();

    while let Some(message) = rx.recv().await {
        match message {
            SammiMessage::UpdateState(val) => {
                let new_agent = agent.clone();
                tokio::spawn(async move {
                    let val = serde_json::ser::to_string(&val).unwrap();
                    let start_time = std::time::Instant::now();
                    let res = new_agent
                        .post(&config.api_url)
                        .timeout(std::time::Duration::from_millis(100))
                        .body(format!(
                            "{{
                                'request': 'setVariable',
                                'name': 'ggxrd_state',
                                'buttonID': '{}',
                                'value': {val}
                            }}",
                            config.button_id
                        ))
                        .send()
                        .await;
                    let duration = start_time.elapsed();
                    log::debug!("Request took: {:?}", duration);
                    log::debug!("{:?}", res);
                })
            }
            SammiMessage::PlayerHit(info) => {
                let new_agent = agent.clone();
                tokio::spawn(async move {
                    let info = serde_json::ser::to_string(&info).unwrap();
                    let start_time = std::time::Instant::now();
                    let res = new_agent
                        .post(&config.webhook_url)
                        .body(format!(
                            "{{
                                'trigger': 'ggxrd_hitEvent',
                                'eventInfo': {info}
                            }}"
                        ))
                        .send()
                        .await;
                    let duration = start_time.elapsed();
                    log::debug!("Request took: {:?}", duration);
                    log::debug!("{:?}", res);
                })
            }
        };
    }
}

// only sends sammi data every other frame of the match
static mut EVEN_FRAME: bool = true;

static mut PREVIOUS_STATE: SammiState = SammiState::new();
static mut LAST_HIT_P1: usize = 0;
static mut LAST_HIT_P2: usize = 0;
pub unsafe fn collect_info_sammi(state: *mut u8) {
    const P2_OFFSET: isize = 0x2D198;

    let player = helpers::pointer_chain(state, [0x490, 0x484]);

    let mut new_state = SammiState::new();

    new_state.character_p1 =
        Character::from_number(helpers::read_type::<usize>(player.offset(0x44)));
    new_state.character_p2 =
        Character::from_number(helpers::read_type::<usize>(player.offset(P2_OFFSET + 0x44)));

    // health
    new_state.health_p1 = helpers::read_type::<isize>(player.offset(0x9CC));
    new_state.health_p2 = helpers::read_type::<isize>(player.offset(P2_OFFSET + 0x9CC));

    // tension pulse
    new_state.tension_pulse_p1 = helpers::read_type::<isize>(player.offset(0x2D128));
    new_state.tension_pulse_p2 = helpers::read_type::<isize>(player.offset(P2_OFFSET + 0x2D128));

    // tension bar
    new_state.tension_p1 = helpers::read_type::<isize>(player.offset(0x2D134));
    new_state.tension_p2 = helpers::read_type::<isize>(player.offset(P2_OFFSET + 0x2D134));

    // burst
    let some_engine_static = Offset::new(0x198B6E4).get_address() as *mut *mut u8;
    let burst = (*some_engine_static).offset(0x1C4B20);
    new_state.burst_p1 = helpers::read_type::<isize>(burst);
    new_state.burst_p2 = helpers::read_type::<isize>(burst.offset(0x4));

    // tension bar
    new_state.risc_p1 = helpers::read_type::<isize>(player.offset(0x24E30));
    new_state.risc_p2 = helpers::read_type::<isize>(player.offset(P2_OFFSET + 0x24E30));

    // turn string buf into String
    let process_string =
        |arr: &[u8]| String::from(CStr::from_bytes_until_nul(&arr).unwrap().to_str().unwrap());

    new_state.state_p1 = process_string(&helpers::read_type::<[u8; 32]>(player.offset(0x2444)));
    new_state.state_p2 = process_string(&helpers::read_type::<[u8; 32]>(
        player.offset(P2_OFFSET + 0x2444),
    ));

    let last_hit_type_p1 = helpers::read_type::<usize>(player.offset(0x990));
    let last_hit_type_p2 = helpers::read_type::<usize>(player.offset(P2_OFFSET + 0x990));

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    if last_hit_type_p1 != LAST_HIT_P1 || new_state.health_p1 < PREVIOUS_STATE.health_p1 {
        let hit_type = match last_hit_type_p1 {
            0 => HitType::Normal,
            2 => HitType::Counter,
            3 => HitType::MortalCounter,
            _ => HitType::Unknown,
        };
        let attacker = PlayerId::Player2;

        tx.blocking_send(SammiMessage::PlayerHit(HitInfo {
            hit_type,
            attacker,
            attacker_state: new_state.state_p2.clone(),
        }))
        .unwrap();
    }

    if last_hit_type_p2 != LAST_HIT_P2 || new_state.health_p2 < PREVIOUS_STATE.health_p2 {
        let hit_type = match last_hit_type_p2 {
            0 => HitType::Normal,
            2 => HitType::Counter,
            3 => HitType::MortalCounter,
            _ => HitType::Unknown,
        };
        let attacker = PlayerId::Player1;

        tx.blocking_send(SammiMessage::PlayerHit(HitInfo {
            hit_type,
            attacker,
            attacker_state: new_state.state_p1.clone(),
        }))
        .unwrap();
    }

    if PREVIOUS_STATE != new_state && EVEN_FRAME {
        tx.blocking_send(SammiMessage::UpdateState(new_state.clone()))
            .unwrap();
    }

    PREVIOUS_STATE = new_state;
    EVEN_FRAME = !EVEN_FRAME;
}
