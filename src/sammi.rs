use std::{
    ffi::CStr,
    sync::atomic::{AtomicBool, Ordering},
    time::Duration,
};

use once_cell::sync::{Lazy, OnceCell};
use reqwest::Client;
use serde::{Deserialize, Serialize};

use crate::{
    game::offset::*,
    global::{self, MESSAGE_SENDER},
    helpers::{read_type, Offset},
    steam,
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
    StateDeInitialized,
}

#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SammiConfig {
    pub sammi_enabled: bool,
    pub webhook_url: String,
    pub state_update_hz: f32,
    pub timeout: f32,
    pub developer_data: SammiDevConfig,
}

impl Default for SammiConfig {
    fn default() -> Self {
        Self {
            sammi_enabled: true,
            webhook_url: "http://127.0.0.1:9450/webhook".into(),
            state_update_hz: 25.0,
            timeout: 0.1,
            developer_data: SammiDevConfig::default(),
        }
    }
}

/// Options that may be changed in the case of a
/// mod developer using SAMMI with modified state names
#[derive(Serialize, Deserialize, Debug, Clone)]
pub struct SammiDevConfig {
    /// States which indicate an attack should be [`HitType::Throw`]
    throw_states: Vec<String>,
}

impl Default for SammiDevConfig {
    fn default() -> Self {
        let throw_states = [
            "Genrouzan",
            "GenrouzanExe",
            "Genyouzan",
            "GenyouzanExe",
            "Shotgun_CQC",
            "Shotgun_CQCExe",
            "CommandThrow",
            "CommandThrowExe",
            "CommandThrowEx",
            "PotemkinBuster",
            "PotemkinBusterExe",
            "HeavenlyPBuster",
            "HeavenlyPBusterExe",
            "ChiwosuuUchuu",
            "ChiwosuuUchuuExe",
            "BukkirabouNiNageru",
            "BukkiraExe",
            "AirCommandThrow",
            "AirCommandThrowExe",
            "DamnedFang",
            "DamnedFangExe",
            "OverHeadKiss",
            "OverHeadKissExe",
            "AntiAirCommandThrow",
            "AntiAirCommandThrowEx",
            "CommandThorw", // Arcsys' typo, not mine
            "CommandThorwEx",
            "ScrewPileDriver",
            "ScrewPileDriverEx",
            "ThrowExe",
            "AirThrowExe",
            "Mozu_Land_Exe",
        ]
        .map(|s| s.to_string())
        .to_vec();
        SammiDevConfig { throw_states }
    }
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy, PartialEq, Eq)]
pub enum ObjectId {
    Player1,
    Player2,
    Projectile,
}

#[repr(u32)]
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
    damage: i32,
    attacker: ObjectId,
    attacker_state: String,
    victim: ObjectId,
    victim_state: String,
    victim_previous_state: String,
    combo_length: u32,
}

#[derive(Serialize, Deserialize, Debug, Clone, Copy)]
pub enum HitType {
    Normal,
    Counter,
    MortalCounter,
    Unknown,
    Throw,
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
    steam_id: String,
    steam_nickname: String,
    character: Character,
    health: u32,
    untechable_time: u32,
    tension_pulse: i32,
    tension: u32,
    burst: u32,
    risc: i32,
    stun: i32,
    stun_resistance: u32,
    state: String,
    previous_state: String,
    round_wins: usize,
    combo_counter: u32,
    x_position: i32,
    y_position: i32,
}

impl PlayerState {
    const fn new() -> Self {
        Self {
            steam_id: String::new(),
            steam_nickname: String::new(),
            character: Character::Sol,
            health: 420,
            untechable_time: 0,
            tension_pulse: 0,
            tension: 0,
            burst: 0,
            risc: 0,
            stun: 0,
            stun_resistance: 0,
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
    combo_length: u32,
    combo_damage: i32,
    victim: ObjectId,
    victim_state: String,
    victim_previous_state: String,
}

#[derive(Debug, Clone, Serialize, PartialEq, Eq)]
pub struct SammiState {
    current_frame: usize,
    rounds_to_win: u32,
    round_time_limit: u32,
    round_time_left: u32,
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
            SammiMessage::StateDeInitialized => {
                let new_agent = agent.clone();

                send_event(
                    new_agent,
                    "ggxrd_gamestateDeinitialized".into(),
                    "{}".into(),
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

static mut P1_LAST_STEAMID: u64 = 0;
static mut P2_LAST_STEAMID: u64 = 0;

static mut P1_STEAM_NAME: String = String::new();
static mut P2_STEAM_NAME: String = String::new();

static mut CURRENT_FRAME: usize = 0;
static mut FRAME_ACCUMULATOR: f32 = 0.0;

static mut PREVIOUS_STATE: SammiState = SammiState::new();
pub unsafe fn game_loop_hook_sammi() {
    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    if gamestate.is_null() {
        ROUND_OVER.store(true, Ordering::Relaxed);
        return;
    }

    if !SAMMI_ENABLED.load(Ordering::Relaxed) {
        return;
    }

    let gamestate = GameState(gamestate);

    CURRENT_FRAME += 1;

    let mut new_state = SammiState::new();

    // get game state
    new_state.current_frame = CURRENT_FRAME;

    new_state.rounds_to_win = gamestate.rounds_to_win();

    new_state.round_time_limit = gamestate.round_time_limit();
    new_state.round_time_left = gamestate.round_time_left();

    new_state.player_1.character =
        Character::from_number(gamestate.player_1().character() as usize);
    new_state.player_2.character =
        Character::from_number(gamestate.player_2().character() as usize);

    log::trace!("Collecting state data");

    // max with 0 and usize conversion ensures 0..MAX range
    log::trace!("health");
    new_state.player_1.health = gamestate.player_1().health().max(0) as u32;
    new_state.player_2.health = gamestate.player_2().health().max(0) as u32;

    log::trace!("tension pulse");
    new_state.player_1.tension_pulse = gamestate.player_1().tension_pulse();
    new_state.player_2.tension_pulse = gamestate.player_2().tension_pulse();

    log::trace!("untechable time");
    new_state.player_1.untechable_time = gamestate.player_1().untechable_time();
    new_state.player_2.untechable_time = gamestate.player_2().untechable_time();

    log::trace!("tension meter");
    new_state.player_1.tension = gamestate.player_1().tension_meter();
    new_state.player_2.tension = gamestate.player_2().tension_meter();

    log::trace!("burst meter");
    new_state.player_1.burst = gamestate.burst_meter_p1();
    new_state.player_2.burst = gamestate.burst_meter_p2();

    log::trace!("risc");
    new_state.player_1.risc = gamestate.player_1().risc_meter();
    new_state.player_2.risc = gamestate.player_2().risc_meter();

    log::trace!("stun");
    new_state.player_1.stun = gamestate.player_1().stun();
    new_state.player_2.stun = gamestate.player_2().stun();

    log::trace!("stun resistance");
    new_state.player_1.stun_resistance = gamestate.player_1().stun_resistance();
    new_state.player_2.stun_resistance = gamestate.player_2().stun_resistance();

    log::trace!("current state");
    new_state.player_1.state = process_string(&gamestate.player_1().current_state());
    new_state.player_2.state = process_string(&gamestate.player_2().current_state());

    log::trace!("previous state");
    new_state.player_1.previous_state = process_string(&gamestate.player_1().previous_state());
    new_state.player_2.previous_state = process_string(&gamestate.player_2().previous_state());

    log::trace!("round wins");
    new_state.player_1.round_wins = *(Offset::new(0x19322F0).get_address() as *mut usize);
    new_state.player_2.round_wins = *(Offset::new(0x19323A0).get_address() as *mut usize);

    // combo counters are actually held inside the opponent,
    // so we switch them to make the data easier to understand
    log::trace!("combo counter");
    new_state.player_1.combo_counter = gamestate.player_2().recieved_combo_counter();
    new_state.player_2.combo_counter = gamestate.player_1().recieved_combo_counter();

    log::trace!("X position");
    new_state.player_1.x_position = gamestate.player_1().x_position();
    new_state.player_2.x_position = gamestate.player_2().x_position();

    log::trace!("Y position");
    new_state.player_1.y_position = gamestate.player_1().y_position();
    new_state.player_2.y_position = gamestate.player_2().y_position();

    log::trace!("steam player info");
    let online_info = *(ONLINE_MATCH_INFO.get_address() as *mut *mut u8);

    if !online_info.is_null() {
        let p1_steamid = read_type::<u64>(online_info.offset(0xA8));
        let p2_steamid = read_type::<u64>(online_info.offset(0xB0));

        if p1_steamid != P1_LAST_STEAMID && p1_steamid != 0 {
            P1_LAST_STEAMID = p1_steamid;
            P1_STEAM_NAME = steam::get_name_from_id(p1_steamid);
        }

        if p2_steamid != P2_LAST_STEAMID && p2_steamid != 0 {
            P2_LAST_STEAMID = p2_steamid;
            P2_STEAM_NAME = steam::get_name_from_id(p2_steamid);
        }

        new_state.player_1.steam_id = format!("{}", p1_steamid);
        new_state.player_1.steam_nickname = P1_STEAM_NAME.clone();

        new_state.player_2.steam_id = format!("{}", p2_steamid);
        new_state.player_2.steam_nickname = P2_STEAM_NAME.clone();
    } else {
        new_state.player_1.steam_id = String::from("0");
        new_state.player_1.steam_nickname = String::new();

        new_state.player_2.steam_id = String::from("0");
        new_state.player_2.steam_nickname = String::new();
    }

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    // check ROUND_OVER to ensure RoundEnd isnt sent more than once per round
    let round_over = ROUND_OVER.load(Ordering::SeqCst);
    if !round_over
        && (new_state.round_time_left == 0
            || new_state.player_1.health <= 0
            || new_state.player_2.health <= 0)
    {
        ROUND_OVER.store(true, Ordering::SeqCst);
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

    let should_process_hitevent = HIT_EVENT_INFO
        .as_ref()
        .map_or(false, |event| event.current_frame < CURRENT_FRAME - 1);

    if should_process_hitevent {
        if let Some(hit_event) = HIT_EVENT_INFO.take() {
            let attacker = GameObject(hit_event.attacker);
            let victim = GameObject(hit_event.victim);

            let mut hit_type = match victim.recieved_hit_type() {
                0 => HitType::Normal,
                2 => HitType::Counter,
                3 => HitType::MortalCounter,
                _ => HitType::Unknown,
            };

            let combo_length = victim.recieved_combo_counter();
            let damage = victim.recieved_damage();
            let mut was_blocked = combo_length == 0;

            let victim_state = process_string(&victim.current_state());
            let victim_previous_state = process_string(&victim.previous_state());

            let attacker_state = process_string(&attacker.current_state());
            let attack_lvl = attacker.attack_level();

            // throw detection:
            // since proximity throws connect on frame 1 (earlier than any other move in the game)
            // we can safely detect them by testing a timer since the state was entered for the value of 1
            //
            // states are also marked as Throw if they are inside the list of throw states in the config
            let throw_states = &SAMMI_CONFIG.get().unwrap().developer_data.throw_states;

            if throw_states.contains(&attacker_state) {
                was_blocked = false;
                hit_type = HitType::Throw;
            }

            tx.blocking_send(SammiMessage::PlayerHit(HitInfo {
                current_frame: CURRENT_FRAME,
                hit_type,
                was_blocked,
                victim: hit_event.victim_id,
                attack_level: attack_lvl,
                damage,
                attacker: hit_event.attacker_id,
                attacker_state,
                victim_state,
                victim_previous_state,
                combo_length: combo_length,
            }))
            .unwrap();
        }
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
    if !SAMMI_ENABLED.load(Ordering::Relaxed) {
        return;
    }

    CURRENT_FRAME = 0;

    ROUND_OVER.store(false, Ordering::Relaxed);
    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::RoundStart).unwrap();
}

pub unsafe fn create_object_with_arg_hook(object: *mut u8, arg: *mut u8, _ptr: *mut u8) {
    if !SAMMI_ENABLED.load(Ordering::Relaxed) {
        return;
    }

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    let gamestate = GameState(gamestate);

    let created_by = if object == gamestate.player_1().0 {
        ObjectId::Player1
    } else if object == gamestate.player_2().0 {
        ObjectId::Player2
    } else {
        ObjectId::Projectile
    };

    let object_name = process_string(&read_type::<[u8; 32]>(arg));

    // keep venom from overloading the sammi connection
    if object_name == "BallZanzoh" {
        return;
    }

    let player1_state = process_string(&gamestate.player_1().current_state());
    let player2_state = process_string(&gamestate.player_2().current_state());

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
    if !SAMMI_ENABLED.load(Ordering::Relaxed) {
        return;
    }

    let object = GameObject(object);

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    let gamestate = GameState(gamestate);

    let combo_length = object.recieved_combo_counter();

    if combo_length == 0 {
        return;
    }

    let victim = if object.0 == gamestate.player_1().0 {
        ObjectId::Player1
    } else if object.0 == gamestate.player_2().0 {
        ObjectId::Player2
    } else {
        return;
    };

    let victim_state = process_string(&object.current_state());
    let victim_previous_state = process_string(&object.previous_state());

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::ComboEnd(ComboEndInfo {
        current_frame: CURRENT_FRAME,
        victim,
        victim_state,
        victim_previous_state,
        combo_length,
        combo_damage: object.recieved_combo_damage(),
    }))
    .unwrap();
}

struct HitEventInfoInternal {
    attacker: *mut u8,
    attacker_id: ObjectId,
    victim: *mut u8,
    victim_id: ObjectId,
    current_frame: usize,
}

static mut HIT_EVENT_INFO: Option<HitEventInfoInternal> = None;

pub unsafe fn process_hit_hook(attacker: *mut u8, victim: *mut u8) {
    if !SAMMI_ENABLED.load(Ordering::Relaxed) || attacker.is_null() || victim.is_null() {
        return;
    }

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    let gamestate = GameState(gamestate);

    let victim = GameObject(victim);
    let attacker = GameObject(attacker);

    let victim_id = if gamestate.player_1().0 == victim.0 {
        ObjectId::Player1
    } else if gamestate.player_2().0 == victim.0 {
        ObjectId::Player2
    } else {
        // dont handle anything except for the players being hit
        return;
    };

    let attacker_id = if gamestate.player_1().0 == attacker.0 {
        ObjectId::Player1
    } else if gamestate.player_2().0 == attacker.0 {
        ObjectId::Player2
    } else {
        ObjectId::Projectile
    };

    HIT_EVENT_INFO = Some(HitEventInfoInternal {
        current_frame: CURRENT_FRAME,
        attacker: attacker.0,
        attacker_id,
        victim: victim.0,
        victim_id,
    })
}

pub unsafe fn deinit_gamestate_hook() {
    if !SAMMI_ENABLED.load(Ordering::Relaxed) {
        return;
    }

    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    // only send if the state is actually being deleted
    if gamestate.is_null() {
        return;
    }

    ROUND_OVER.store(true, Ordering::SeqCst);

    let tx = global::MESSAGE_SENDER.get().unwrap().clone();

    tx.blocking_send(SammiMessage::StateDeInitialized).unwrap();
}
