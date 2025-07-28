use std::hash::{DefaultHasher, Hash, Hasher};

use parking_lot::Mutex;
use serde::Serialize;

use crate::{
    game::offset::{
        GameInput, GameState, GAMESTATE_PTR, INPUTS_OFFSET, P1_REPLAY_STEAMID, P2_REPLAY_STEAMID, ROUND_WINS_P1,
    },
    helpers::process_string,
};

static mut FRAME_TIMER: u32 = 0;
static mut ROUND_OVER: bool = false;

static REPLAY_DATA: Mutex<MatchData> = Mutex::new(MatchData {
    steam_id_p1: 0,
    steam_id_p2: 0,
    match_frames: Vec::new(),
});

#[derive(Hash, Serialize)]
struct MatchData {
    steam_id_p1: u64,
    steam_id_p2: u64,
    match_frames: Vec<MatchDataPoint>,
}

#[derive(Debug, Hash, Serialize)]
struct MatchDataPoint {
    current_frame: u32,
    rounds_to_win: u32,
    round_time_limit: u32,
    round_time_left: u32,
    player_1: PlayerState,
    player_2: PlayerState,
}

#[derive(Debug, Hash, Serialize)]
pub struct PlayerState {
    character: u32,
    x_position: i32,
    y_position: i32,
    x_velocity: i32,
    y_velocity: i32,
    health: i32,
    tension: u32,
    tension_pulse: i32,
    burst: u32,
    risc: i32,
    stun: i32,
    state: String,
    combo_counter: u32,
    hitstun_left: u32,
    blockstun_left: u32,
    resource_1: i32,
    resource_2: i32,
    resource_3: i32,
    resource_4: i32,
    round_wins: u32,
    inputs: GameInput,
}

pub unsafe fn record_replay_state() {
    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

    if gamestate.is_null() {
        FRAME_TIMER = 0;
        return;
    }

    let mut replay_data = REPLAY_DATA.lock();
    let gs = GameState(gamestate);

    // to ensure the frame counter always increments within a round, even when the timer is paused,
    // we only reset it the first time the round time left equals the round time limit. when the timer
    // resumes counting down, we can safely allow it to be reset the next time they are equal.
    let in_round_end_state = process_string(&gs.player_1().current_state()).contains("CmnActRound")
        || process_string(&gs.player_2().current_state()).contains("CmnActRound");
    let is_any_health_zero = gs.player_1().health() <= 0 || gs.player_2().health() <= 0;
    if gs.round_time_left() == gs.round_time_limit() && !in_round_end_state && !is_any_health_zero {
        if ROUND_OVER {
            ROUND_OVER = false;
            FRAME_TIMER = 0;

            replay_data.steam_id_p1 = 0;
            replay_data.steam_id_p2 = 0;
            replay_data.match_frames.clear();
        }
    }

    replay_data.steam_id_p1 = *(P1_REPLAY_STEAMID.get_address() as *const u64);
    replay_data.steam_id_p2 = *(P2_REPLAY_STEAMID.get_address() as *const u64);

    log::trace!("Gathering player state...");

    let input_bits = INPUTS_OFFSET.get_address() as *mut [u16; 2];

    let round_wins_p1 = *(ROUND_WINS_P1.get_address() as *mut u32);
    let round_wins_p2 = *(ROUND_WINS_P1.get_address() as *mut u32);

    let p1 = gs.player_1();
    let p2 = gs.player_2();

    let player_1 = PlayerState {
        character: p1.character(),
        x_position: p1.x_position(),
        y_position: p1.y_position(),
        x_velocity: p1.x_velocity(),
        y_velocity: p1.y_velocity(),
        health: p1.health(),
        tension: p1.tension_meter(),
        tension_pulse: p1.tension_pulse(),
        burst: gs.burst_meter_p1(),
        risc: p1.risc_meter(),
        stun: p1.stun(),
        state: process_string(&p1.current_state()),
        combo_counter: p2.received_combo_counter(),
        hitstun_left: p1.hitstun_left(),
        blockstun_left: p1.blockstun_left(),
        resource_1: p1.resource_1(),
        resource_2: p1.resource_2(),
        resource_3: p1.resource_3(),
        resource_4: p1.resource_4(),
        round_wins: round_wins_p1,
        inputs: GameInput::from_bits((*input_bits)[0]),
    };

    let player_2 = PlayerState {
        character: p2.character(),
        x_position: p2.x_position(),
        y_position: p2.y_position(),
        x_velocity: p2.x_velocity(),
        y_velocity: p2.y_velocity(),
        health: p2.health(),
        tension: p2.tension_meter(),
        tension_pulse: p2.tension_pulse(),
        burst: gs.burst_meter_p2(),
        risc: p2.risc_meter(),
        stun: p2.stun(),
        state: process_string(&p2.current_state()),
        combo_counter: p1.received_combo_counter(),
        hitstun_left: p2.hitstun_left(),
        blockstun_left: p2.blockstun_left(),
        resource_1: p2.resource_1(),
        resource_2: p2.resource_2(),
        resource_3: p2.resource_3(),
        resource_4: p2.resource_4(),
        round_wins: round_wins_p2,
        inputs: GameInput::from_bits((*input_bits)[1]),
    };

    let data_point = MatchDataPoint {
        current_frame: FRAME_TIMER,
        rounds_to_win: gs.rounds_to_win(),
        round_time_left: gs.round_time_left(),
        round_time_limit: gs.round_time_limit(),
        player_1,
        player_2,
    };

    replay_data.match_frames.push(data_point);

    FRAME_TIMER += 1;

    if !ROUND_OVER && (gs.round_time_left() == 0 || p1.health() <= 0 || gs.player_2().health() <= 0)
    {
        ROUND_OVER = true;
        let mut hasher = DefaultHasher::new();
        replay_data.hash(&mut hasher);
        let replay_hash = hasher.finish();

        let m = serde_json::to_vec(&(*replay_data));
        if let Ok(mut data) = m {
            // INSERT_YOUR_CODE
            let replay_dir = std::path::Path::new("../../REPLAY_JSON");
            if !replay_dir.exists() {
                if let Err(e) = std::fs::create_dir_all(replay_dir) {
                    log::error!("Couldn't create REPLAY_JSON directory: {}", e);
                }
            }
            let write_result = std::fs::write(
                format!("../../REPLAY_JSON/replay_{}.json", replay_hash),
                &mut data,
            );
            if let Err(e) = write_result {
                log::error!("Couldn't write match data: {}", e);
            }
        }
    }
}
