use std::{
    ffi::CStr,
    sync::atomic::{AtomicBool, Ordering},
    time::{Duration, Instant},
};

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
    ComboEnd(ComboEndInfo),
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

#[derive(Serialize, Deserialize, Debug, Clone, Copy, PartialEq, Eq)]
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
    was_blocked: bool,
    attack_level: u32,
    damage: usize,
    attacker: ObjectId,
    attacker_state: String,
    victim: ObjectId,
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
    x_position: isize,
    y_position: isize,
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
            x_position: 0,
            y_position: 0,
        }
    }
}

#[derive(Debug, Clone, Serialize, PartialEq, Eq)]
pub struct ComboEndInfo {
    current_frame: usize,
    combo_length: usize,
    combo_damage: usize,
    victim: ObjectId,
    victim_state: String,
    victim_previous_state: String,
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
            log::trace!("Request took: {:?}", duration);
            log::trace!("Response to {}: {:?}", event_name, res);
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
            SammiMessage::ComboEnd(info) => {
                let new_agent = agent.clone();
                let info = serde_json::ser::to_string(&info).unwrap();

                send_event(
                    new_agent,
                    "ggxrd_comboEndEvent".into(),
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
pub unsafe fn game_loop_hook_sammi() {
    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    if gamestate.is_null() {
        ROUND_OVER.store(true, Ordering::Relaxed);
        return;
    }

    if !SAMMI_ENABLED.load(std::sync::atomic::Ordering::Relaxed) {
        return;
    }

    CURRENT_FRAME += 1;

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

    log::trace!("Collecting state data");

    // max with 0 and usize conversion ensures 0..MAX range
    log::trace!("health");
    new_state.player_1.health = read_type::<isize>(player_1.offset(0x9CC)).max(0) as usize;
    new_state.player_2.health = read_type::<isize>(player_2.offset(0x9CC)).max(0) as usize;

    log::trace!("tension pulse");
    new_state.player_1.tension_pulse = read_type::<isize>(player_1.offset(0x2D128));
    new_state.player_2.tension_pulse = read_type::<isize>(player_2.offset(0x2D128));

    log::trace!("untechable time");
    new_state.player_1.untechable_time = read_type::<usize>(player_1.offset(0x9808));
    new_state.player_2.untechable_time = read_type::<usize>(player_2.offset(0x9808));

    log::trace!("tension meter");
    new_state.player_1.tension = read_type::<isize>(player_1.offset(0x2D134));
    new_state.player_2.tension = read_type::<isize>(player_2.offset(0x2D134));

    log::trace!("burst meter");
    new_state.player_1.burst = read_type::<isize>(gamestate.offset(BURST_P1));
    new_state.player_2.burst = read_type::<isize>(gamestate.offset(BURST_P2));

    log::trace!("risc");
    new_state.player_1.risc = read_type::<isize>(player_1.offset(0x24E30));
    new_state.player_2.risc = read_type::<isize>(player_2.offset(0x24E30));

    log::trace!("current state");
    new_state.player_1.state = process_string(&read_type::<[u8; 32]>(player_1.offset(0x2444)));
    new_state.player_2.state = process_string(&read_type::<[u8; 32]>(player_2.offset(0x2444)));

    log::trace!("previous state");
    new_state.player_1.previous_state =
        process_string(&read_type::<[u8; 32]>(player_1.offset(0x2424)));
    new_state.player_2.previous_state =
        process_string(&read_type::<[u8; 32]>(player_2.offset(0x2424)));

    log::trace!("round wins");
    new_state.player_1.round_wins = *(Offset::new(0x19322F0).get_address() as *mut usize);
    new_state.player_2.round_wins = *(Offset::new(0x19323A0).get_address() as *mut usize);

    // combo counters are actually held inside the opponent,
    // so we switch them to make the data easier to understand
    log::trace!("combo counter");
    new_state.player_1.combo_counter = read_type::<usize>(player_2.offset(0x9F28));
    new_state.player_2.combo_counter = read_type::<usize>(player_1.offset(0x9F28));

    log::trace!("X position");
    new_state.player_1.x_position = read_type::<isize>(player_1.offset(0x24C));
    new_state.player_2.x_position = read_type::<isize>(player_2.offset(0x24C));

    log::trace!("Y position");
    new_state.player_1.y_position = read_type::<isize>(player_1.offset(0x250));
    new_state.player_2.y_position = read_type::<isize>(player_2.offset(0x250));

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

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
            current_frame: new_state.current_frame,
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

pub unsafe fn round_begin() {
    if !SAMMI_ENABLED.load(std::sync::atomic::Ordering::Relaxed) {
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

// Must be called BEFORE the actual function runs and resets state.
pub unsafe fn end_combo_hook(object: *mut u8) {
    if !SAMMI_ENABLED.load(std::sync::atomic::Ordering::Relaxed) {
        return;
    }

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    let player_1 = gamestate.offset(P1_OFFSET);
    let player_2 = gamestate.offset(P2_OFFSET);

    let combo_length = read_type::<usize>(object.offset(0x9F28));

    if combo_length == 0 {
        return;
    }

    let victim = if object == player_1 {
        ObjectId::Player1
    } else if object == player_2 {
        ObjectId::Player2
    } else {
        return;
    };

    let victim_state = process_string(&read_type::<[u8; 32]>(object.offset(0x2444)));
    let victim_previous_state = process_string(&read_type::<[u8; 32]>(object.offset(0x2424)));

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::ComboEnd(ComboEndInfo {
        current_frame: CURRENT_FRAME,
        victim,
        victim_state,
        victim_previous_state,
        combo_length,
        combo_damage: read_type::<usize>(object.offset(0x9F44)),
    }))
    .unwrap();
}

pub unsafe fn process_hit_hook(attacker: *mut u8, victim: *mut u8) {
    log::trace!("Collecting hit event data");
    log::debug!(
        "process_hit_hook victim: {:X}, attacker {:X}",
        victim as usize,
        attacker as usize
    );
    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    // victim data
    let victim_id = if gamestate.offset(P1_OFFSET) == victim {
        ObjectId::Player1
    } else if gamestate.offset(P2_OFFSET) == victim {
        ObjectId::Player2
    } else {
        // dont handle anything except for the players being hit
        // this also handles null pointers
        return;
    };

    let hit_type = match read_type::<usize>(victim.offset(0x990)) {
        0 => HitType::Normal,
        2 => HitType::Counter,
        3 => HitType::MortalCounter,
        _ => HitType::Unknown,
    };

    log::debug!("getting state");
    let combo_length = read_type::<usize>(victim.offset(0x9F28));
    let damage = read_type::<usize>(victim.offset(0x9F48));
    let was_blocked = combo_length == 0;

    let victim_state = process_string(&read_type::<[u8; 32]>(victim.offset(0x2444)));
    let victim_previous_state = process_string(&read_type::<[u8; 32]>(victim.offset(0x2424)));

    // check to ensure that attacker is not null
    // let last_hit_obj = read_type::<*mut u8>(victim.offset(0x704));
    // if attacker.is_null() {
    //     if !last_hit_obj.is_null() {
    //         attacker = last_hit_obj;
    //     } else {
    //         log::trace!("null attacker in processhit");
    //         return;
    //     }
    // }

    // attacker data
    let attacker_id = if gamestate.offset(P1_OFFSET) == attacker {
        ObjectId::Player1
    } else if gamestate.offset(P2_OFFSET) == attacker {
        ObjectId::Player2
    } else {
        ObjectId::Projectile
    };

    let attacker_state = process_string(&read_type::<[u8; 32]>(attacker.offset(0x2444)));
    let attack_lvl = read_type::<u32>(attacker.offset(0x450));

    log::debug!("sending data");
    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::PlayerHit(HitInfo {
        current_frame: CURRENT_FRAME,
        hit_type,
        was_blocked,
        victim: victim_id,
        attack_level: attack_lvl,
        damage,
        attacker: attacker_id,
        attacker_state,
        victim_state,
        victim_previous_state,
        combo_length: combo_length,
    }))
    .unwrap();
}
