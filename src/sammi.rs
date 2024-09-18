use std::{ffi::CStr, sync::atomic::{AtomicBool, Ordering}, time::Duration};

use once_cell::sync::{Lazy, OnceCell};
use reqwest::Client;
use serde::{Deserialize, Serialize};

use crate::{
    game::offset::*,
    global,
    helpers::{read_type, Offset},
};

/// The config for sammi options, taken from the full serialized rev2mod config
static SAMMI_CONFIG: Lazy<OnceCell<SammiConfig>> =
    Lazy::new(|| OnceCell::with_value(crate::global::CONFIG.lock().sammi.clone()));

pub static SAMMI_ENABLED: AtomicBool = AtomicBool::new(true);

/// A message passed to the sammi event handler
#[derive(Debug, Clone)]
pub enum SammiMessage {
    UpdateState(SammiState),
    PlayerHit(HitInfo),
    ObjectCreated(ObjectCreatedInfo),
    RoundStart,
    RoundEnd(RoundEndInfo),
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SammiConfig {
    pub sammi_enabled: bool,
    pub webhook_url: String,
    pub state_update_hz: f32,
    pub timeout: f32,
}

impl Default for SammiConfig {
    fn default() -> Self {
        Self {
            sammi_enabled: true,
            webhook_url: "http://127.0.0.1:9450/webhook".into(),
            state_update_hz: 25.0,
            timeout: 0.1,
        }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum ObjectId {
    Player1,
    Player2,
    Projectile,
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
    current_frame: usize,
    hit_type: HitType,
    player_hit: ObjectId,
    attack_level: u32,
    attacker: ObjectId,
    attacker_state: String,
    victim_state: String,
    victim_previous_state: String,
    combo_length: usize,
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum HitType {
    Normal,
    Counter,
    MortalCounter,
    Unknown,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct RoundEndInfo {
    current_frame: usize,
    winner: Winner,
    cause: RoundEndCause,
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum RoundEndCause {
    Timeout,
    Death,
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum Winner {
    Player1,
    Player2,
    Draw,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct ObjectCreatedInfo {
    current_frame: usize,
    object_name: String,
    created_by: ObjectId,
    player1_state: String,
    player2_state: String,
}

#[derive(Debug, Clone, Serialize, PartialEq, Eq)]
pub struct PlayerState {
    character: Character,
    health: usize,
    untechable_time: usize,
    tension_pulse: isize,
    tension: isize,
    burst: isize,
    risc: isize,
    state: String,
    previous_state: String,
    round_wins: usize,
    combo_counter: usize,
}

impl PlayerState {
    const fn new() -> Self {
        Self {
            character: Character::Sol,
            health: 420,
            untechable_time: 0,
            tension_pulse: 0,
            tension: 0,
            burst: 0,
            risc: 0,
            state: String::new(),
            previous_state: String::new(),
            round_wins: 0,
            combo_counter: 0,
        }
    }
}

#[derive(Debug, Clone, Serialize, PartialEq, Eq)]
pub struct SammiState {
    current_frame: usize,
    rounds_to_win: usize,
    round_time_limit: usize,
    round_time_left: usize,
    player_1: PlayerState,
    player_2: PlayerState,
}

impl SammiState {
    const fn new() -> Self {
        Self {
            current_frame: 0,
            rounds_to_win: 2,
            round_time_limit: 0,
            round_time_left: 0,
            player_1: PlayerState::new(),
            player_2: PlayerState::new(),
        }
    }
}

/// Message handler loop which is spawned in a separate thread
pub async fn message_handler(mut rx: tokio::sync::mpsc::Receiver<SammiMessage>) {
    let config = SAMMI_CONFIG.get().unwrap();
    let agent = reqwest::Client::new();

    let send_event = |agent: Client, event_name: String, custom_data: String, timeout: f32| {
        tokio::spawn(async move {
            let start_time = std::time::Instant::now();
            let res = agent
                .post(&config.webhook_url)
                .timeout(Duration::from_secs_f32(timeout))
                .body(format!(
                    "{{
                        'trigger': '{event_name}',
                        'eventInfo': {custom_data}
                    }}"
                ))
                .send()
                .await;
            let duration = start_time.elapsed();
            log::debug!("Request took: {:?}", duration);
            log::debug!("Response to {}: {:?}", event_name, res);
        })
    };

    while let Some(message) = rx.recv().await {
        match message {
            SammiMessage::UpdateState(val) => {
                let new_agent = agent.clone();
                let val = serde_json::ser::to_string(&val).unwrap();

                send_event(
                    new_agent,
                    "ggxrd_stateUpdate".into(),
                    val,
                    // timeout multiplied by 2 for other cases to ensure state updates timeout first
                    config.timeout.abs(),
                );
            }
            SammiMessage::PlayerHit(info) => {
                let new_agent = agent.clone();
                let info = serde_json::ser::to_string(&info).unwrap();

                send_event(
                    new_agent,
                    "ggxrd_hitEvent".into(),
                    info,
                    config.timeout.abs() * 2.0,
                );
            }
            SammiMessage::ObjectCreated(name) => {
                let new_agent = agent.clone();
                let info = serde_json::ser::to_string(&name).unwrap();

                send_event(
                    new_agent,
                    "ggxrd_objectCreatedEvent".into(),
                    info,
                    config.timeout.abs() * 2.0,
                );
            }
            SammiMessage::RoundStart => {
                let new_agent = agent.clone();

                // no roundstart info
                send_event(
                    new_agent,
                    "ggxrd_roundStartEvent".into(),
                    "{}".into(),
                    config.timeout.abs() * 2.0,
                );
            }
            SammiMessage::RoundEnd(info) => {
                let new_agent = agent.clone();
                let info = serde_json::ser::to_string(&info).unwrap();

                send_event(
                    new_agent,
                    "ggxrd_roundEndEvent".into(),
                    info,
                    config.timeout.abs() * 2.0,
                );
            }
        };
    }
}

// turn string buf into String
fn process_string(arr: &[u8]) -> String {
    String::from(CStr::from_bytes_until_nul(arr).unwrap().to_str().unwrap())
}

static ROUND_OVER: AtomicBool = AtomicBool::new(true);

static mut CURRENT_FRAME: usize = 0;

static mut FRAME_ACCUMULATOR: f32 = 0.0;

static mut PREVIOUS_STATE: SammiState = SammiState::new();
static mut LAST_HIT_P1: usize = 0;
static mut LAST_HIT_P2: usize = 0;
pub unsafe fn game_loop_hook_sammi(_state: *mut u8) {
    if !SAMMI_ENABLED.load(std::sync::atomic::Ordering::Relaxed) {
        return;
    }

    CURRENT_FRAME += 1;

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    let mut new_state = SammiState::new();

    // get game state
    new_state.current_frame = CURRENT_FRAME;

    new_state.rounds_to_win = read_type::<usize>(gamestate.offset(ROUNDS_TO_WIN));

    new_state.round_time_limit = read_type::<usize>(gamestate.offset(ROUND_TIME_LIMIT));
    new_state.round_time_left = read_type::<usize>(gamestate.offset(ROUND_TIME_LEFT));

    // get player state
    let player_1 = gamestate.offset(P1_OFFSET);
    let player_2 = gamestate.offset(P2_OFFSET);

    new_state.player_1.character =
        Character::from_number(read_type::<usize>(player_1.offset(0x44)));
    new_state.player_2.character =
        Character::from_number(read_type::<usize>(player_2.offset(0x44)));

    // health
    // max with 0 and usize conversion ensures 0..MAX range
    new_state.player_1.health = read_type::<isize>(player_1.offset(0x9CC)).max(0) as usize;
    new_state.player_2.health = read_type::<isize>(player_2.offset(0x9CC)).max(0) as usize;

    // tension pulse
    new_state.player_1.tension_pulse = read_type::<isize>(player_1.offset(0x2D128));
    new_state.player_2.tension_pulse = read_type::<isize>(player_2.offset(0x2D128));

    // untech time
    new_state.player_1.untechable_time = read_type::<usize>(player_1.offset(0x9808));
    new_state.player_2.untechable_time = read_type::<usize>(player_2.offset(0x9808));

    // tension bar
    new_state.player_1.tension = read_type::<isize>(player_1.offset(0x2D134));
    new_state.player_2.tension = read_type::<isize>(player_2.offset(0x2D134));

    // burst
    new_state.player_1.burst = read_type::<isize>(gamestate.offset(BURST_P1));
    new_state.player_2.burst = read_type::<isize>(gamestate.offset(BURST_P2));

    // risc
    new_state.player_1.risc = read_type::<isize>(player_1.offset(0x24E30));
    new_state.player_2.risc = read_type::<isize>(player_2.offset(0x24E30));

    // current state
    new_state.player_1.state = process_string(&read_type::<[u8; 32]>(player_1.offset(0x2444)));
    new_state.player_2.state = process_string(&read_type::<[u8; 32]>(player_2.offset(0x2444)));

    
    // current state
    new_state.player_1.previous_state = process_string(&read_type::<[u8; 32]>(player_1.offset(0x2424)));
    new_state.player_2.previous_state = process_string(&read_type::<[u8; 32]>(player_2.offset(0x2424)));

    // round wins
    new_state.player_1.round_wins = *(Offset::new(0x19322F0).get_address() as *mut usize);
    new_state.player_2.round_wins = *(Offset::new(0x19323A0).get_address() as *mut usize);

    // combo counter
    new_state.player_1.combo_counter = read_type::<usize>(player_1.offset(0x1A08D4));
    new_state.player_2.combo_counter = read_type::<usize>(player_2.offset(0x17373C));
    

    // type of the last hit recieved
    let last_hit_type_p1 = read_type::<usize>(player_1.offset(0x990));
    let last_hit_type_p2 = read_type::<usize>(player_2.offset(0x990));

    // pointer to the last object that hit the player
    let last_hit_obj_p1 = read_type::<*mut u8>(player_1.offset(0x704));
    let last_hit_obj_p2 = read_type::<*mut u8>(player_2.offset(0x704));

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    // filter out hits which are actually chip damage
    let is_blocking_p1 = (read_type::<usize>(player_1.offset(0x23C)) & 0x11000000) != 0;
    let is_blocking_p2 = (read_type::<usize>(player_2.offset(0x23C)) & 0x11000000) != 0;

    if !is_blocking_p1
        && (last_hit_type_p1 != LAST_HIT_P1
            || new_state.player_1.health < PREVIOUS_STATE.player_1.health)
    {
        let hit_type = match last_hit_type_p1 {
            0 => HitType::Normal,
            2 => HitType::Counter,
            3 => HitType::MortalCounter,
            _ => HitType::Unknown,
        };

        let mut attacker = ObjectId::Player2;
        let mut attacker_state = new_state.player_2.state.clone();
        let mut attack_lvl = read_type::<u32>(player_2.offset(0x450));

        // if projectile then store projectile data
        if last_hit_obj_p1 != player_2 && !last_hit_obj_p1.is_null() {
            attacker = ObjectId::Projectile;
            attacker_state = process_string(&read_type::<[u8; 32]>(last_hit_obj_p1.offset(0x2444)));
            attack_lvl = read_type::<u32>(last_hit_obj_p1.offset(0x450));
        }

        tx.blocking_send(SammiMessage::PlayerHit(HitInfo {
            current_frame: CURRENT_FRAME,
            hit_type,
            player_hit: ObjectId::Player1,
            attack_level: attack_lvl,
            attacker,
            attacker_state,
            victim_state: new_state.player_1.state.clone(),
            victim_previous_state: new_state.player_1.previous_state.clone(),
            combo_length: new_state.player_2.combo_counter,
        }))
        .unwrap();

        LAST_HIT_P1 = last_hit_type_p1;
    }

    // do it again for p2
    if !is_blocking_p2
        && (last_hit_type_p2 != LAST_HIT_P2
            || new_state.player_2.health < PREVIOUS_STATE.player_2.health)
    {
        let hit_type = match last_hit_type_p2 {
            0 => HitType::Normal,
            2 => HitType::Counter,
            3 => HitType::MortalCounter,
            _ => HitType::Unknown,
        };

        let mut attacker = ObjectId::Player1;
        let mut attacker_state = new_state.player_1.state.clone();
        let mut attack_lvl = read_type::<u32>(player_1.offset(0x450));

        if last_hit_obj_p2 != player_1 && !last_hit_obj_p2.is_null() {
            attacker = ObjectId::Projectile;
            attacker_state = process_string(&read_type::<[u8; 32]>(last_hit_obj_p2.offset(0x2444)));
            attack_lvl = read_type::<u32>(last_hit_obj_p2.offset(0x450));
        }

        tx.blocking_send(SammiMessage::PlayerHit(HitInfo {
            current_frame: CURRENT_FRAME,
            hit_type,
            player_hit: ObjectId::Player2,
            attack_level: attack_lvl,
            attacker,
            attacker_state,
            victim_state: new_state.player_2.state.clone(),
            victim_previous_state: new_state.player_2.previous_state.clone(),
            combo_length: new_state.player_1.combo_counter,
        }))
        .unwrap();

        LAST_HIT_P2 = last_hit_type_p2;
    }

    // check ROUND_OVER to ensure RoundEnd isnt sent more than once per round
    let round_over = ROUND_OVER.load(std::sync::atomic::Ordering::SeqCst);
    if !round_over
        && (new_state.round_time_left == 0
            || new_state.player_1.health <= 0
            || new_state.player_2.health <= 0)
    {
        ROUND_OVER.store(true, std::sync::atomic::Ordering::SeqCst);
        let winner = if new_state.player_1.health > new_state.player_2.health {
            Winner::Player1
        } else if new_state.player_1.health < new_state.player_2.health {
            Winner::Player2
        } else {
            Winner::Draw
        };

        let cause = if new_state.round_time_left == 0 {
            RoundEndCause::Timeout
        } else {
            RoundEndCause::Death
        };
        tx.blocking_send(SammiMessage::RoundEnd(RoundEndInfo {
            current_frame: CURRENT_FRAME,
            winner,
            cause,
        }))
        .unwrap();
    }

    // get config and check if we should update state depending on frameskip
    let config = SAMMI_CONFIG.get().unwrap();
    let update_t = 1.0 / config.state_update_hz.clamp(1.0, 60.0);

    let should_send = if FRAME_ACCUMULATOR > update_t {
        FRAME_ACCUMULATOR -= update_t;
        true
    } else {
        false
    };

    if should_send {
        tx.blocking_send(SammiMessage::UpdateState(new_state.clone()))
            .unwrap();
    }

    PREVIOUS_STATE = new_state;
    FRAME_ACCUMULATOR += 1.0 / 60.0;
}

pub unsafe fn round_init_hook(_use_2nd_initialize: bool) {
    if !SAMMI_ENABLED.load(std::sync::atomic::Ordering::Relaxed) || !ROUND_OVER.load(Ordering::Relaxed) {
        return;
    }

    CURRENT_FRAME = 0;

    ROUND_OVER.store(false, Ordering::Relaxed);
    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::RoundStart).unwrap();
}

pub unsafe fn create_object_with_arg_hook(object: *mut u8, arg: *mut u8, _ptr: *mut u8) {
    if !SAMMI_ENABLED.load(std::sync::atomic::Ordering::Relaxed) {
        return;
    }

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    let player_1 = gamestate.offset(P1_OFFSET);
    let player_2 = gamestate.offset(P2_OFFSET);

    let created_by = if object == player_1 {
        ObjectId::Player1
    } else if object == player_2 {
        ObjectId::Player2
    } else {
        ObjectId::Projectile
    };

    let object_name = process_string(&read_type::<[u8; 32]>(arg));

    let player1_state = process_string(&read_type::<[u8; 32]>(player_1.offset(0x2444)));
    let player2_state = process_string(&read_type::<[u8; 32]>(player_2.offset(0x2444)));

    let object_created_info = ObjectCreatedInfo {
        current_frame: CURRENT_FRAME,
        created_by,
        player1_state,
        player2_state,
        object_name,
    };

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::ObjectCreated(object_created_info))
        .unwrap();
}
