use std::collections::VecDeque;

use serde::Serialize;

use crate::game::offset::{
    GameInput, GameState, GAMESTATE_PTR, INPUTS_OFFSET, ROUND_WINS_P1, ROUND_WINS_P2,
};

#[derive(Debug, Serialize)]
struct ContextWindow {
    player_1_character: String,
    player_2_character: String,
    round_time_left: u32,
    samples: VecDeque<DataPoint>,
}

#[derive(Clone, Debug, Serialize)]
struct DataPoint {
    player_1_x_position: i32,
    player_1_y_position: i32,
    player_1_x_velocity: i32,
    player_1_y_velocity: i32,
    player_1_health: i32,
    player_1_tension: u32,
    player_1_tension_pulse: i32,
    player_1_burst: u32,
    player_1_risc: i32,
    player_1_stun: i32,
    player_1_state: String,
    player_1_combo_counter: u32,
    player_1_hitstun_left: u32,
    player_1_blockstun_left: u32,
    player_1_resource_1: i32,
    player_1_resource_2: i32,
    player_1_resource_3: i32,
    player_1_resource_4: i32,
    player_1_round_wins: u32,
    player_1_input_stick: usize,
    player_1_input_p: bool,
    player_1_input_k: bool,
    player_1_input_s: bool,
    player_1_input_h: bool,
    player_1_input_d: bool,
    player_2_x_position: i32,
    player_2_y_position: i32,
    player_2_x_velocity: i32,
    player_2_y_velocity: i32,
    player_2_health: i32,
    player_2_tension: u32,
    player_2_tension_pulse: i32,
    player_2_burst: u32,
    player_2_risc: i32,
    player_2_stun: i32,
    player_2_state: String,
    player_2_combo_counter: u32,
    player_2_hitstun_left: u32,
    player_2_blockstun_left: u32,
    player_2_resource_1: i32,
    player_2_resource_2: i32,
    player_2_resource_3: i32,
    player_2_resource_4: i32,
    player_2_round_wins: u32,
    player_2_input_stick: usize,
    player_2_input_p: bool,
    player_2_input_k: bool,
    player_2_input_s: bool,
    player_2_input_h: bool,
    player_2_input_d: bool,
}

static mut CONTEXT_WINDOW: ContextWindow = ContextWindow {
    player_1_character: String::new(),
    player_2_character: String::new(),
    round_time_left: 0,
    samples: VecDeque::new(),
};

fn get_stick_direction(inputs: GameInput) -> usize {
    let mut stick_direction = 0;
    if inputs.up {
        stick_direction += 1;
    } else if inputs.down {
        stick_direction += 2;
    }
    if inputs.left {
        stick_direction += 3;
    } else if inputs.right {
        stick_direction += 6;
    }

    return stick_direction;
}

pub unsafe fn handle_simulation_step() {
    let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);
    if gamestate.is_null() {
        return;
    }
    let gamestate = GameState(gamestate);
    let player_1 = gamestate.player_1();
    let player_2 = gamestate.player_2();

    let round_wins_p1 = *(ROUND_WINS_P1.get_address() as *mut u32);
    let round_wins_p2 = *(ROUND_WINS_P2.get_address() as *mut u32);

    let burst_p1 = gamestate.burst_meter_p1();
    let burst_p2 = gamestate.burst_meter_p2();

    let inputs = INPUTS_OFFSET.get_address() as *mut [u16; 2];
    let player_1_inputs = GameInput::from_bits((*inputs)[0]);
    let player_2_inputs = GameInput::from_bits((*inputs)[1]);

    let player_1_input_stick = get_stick_direction(player_1_inputs);
    let player_2_input_stick = get_stick_direction(player_2_inputs);

    let data_point = DataPoint {
        player_1_x_position: player_1.x_position(),
        player_1_y_position: player_1.y_position(),
        player_1_x_velocity: player_1.x_velocity(),
        player_1_y_velocity: player_1.y_velocity(),
        player_1_health: player_1.health(),
        player_1_tension: player_1.tension_meter(),
        player_1_tension_pulse: player_1.tension_pulse(),
        player_1_burst: burst_p1,
        player_1_risc: player_1.risc_meter(),
        player_1_stun: player_1.stun(),
        player_1_state: crate::helpers::process_string(&player_1.current_state()),
        player_1_combo_counter: player_2.received_combo_counter(),
        player_1_hitstun_left: player_1.hitstun_left(),
        player_1_blockstun_left: player_1.blockstun_left(),
        player_1_resource_1: player_1.resource_1(),
        player_1_resource_2: player_1.resource_2(),
        player_1_resource_3: player_1.resource_3(),
        player_1_resource_4: player_1.resource_4(),
        player_1_round_wins: round_wins_p1,
        player_1_input_stick: player_1_input_stick,
        player_1_input_p: player_1_inputs.p,
        player_1_input_k: player_1_inputs.k,
        player_1_input_s: player_1_inputs.s,
        player_1_input_h: player_1_inputs.h,
        player_1_input_d: player_1_inputs.d,
        player_2_x_position: player_2.x_position(),
        player_2_y_position: player_2.y_position(),
        player_2_x_velocity: player_2.x_velocity(),
        player_2_y_velocity: player_2.y_velocity(),
        player_2_health: player_2.health(),
        player_2_tension: player_2.tension_meter(),
        player_2_tension_pulse: player_2.tension_pulse(),
        player_2_burst: burst_p2,
        player_2_risc: player_2.risc_meter(),
        player_2_stun: player_2.stun(),
        player_2_state: crate::helpers::process_string(&player_2.current_state()),
        player_2_combo_counter: player_1.received_combo_counter(),
        player_2_hitstun_left: player_2.hitstun_left(),
        player_2_blockstun_left: player_2.blockstun_left(),
        player_2_resource_1: player_2.resource_1(),
        player_2_resource_2: player_2.resource_2(),
        player_2_resource_3: player_2.resource_3(),
        player_2_resource_4: player_2.resource_4(),
        player_2_round_wins: round_wins_p2,
        player_2_input_stick: player_2_input_stick,
        player_2_input_p: player_2_inputs.p,
        player_2_input_k: player_2_inputs.k,
        player_2_input_s: player_2_inputs.s,
        player_2_input_h: player_2_inputs.h,
        player_2_input_d: player_2_inputs.d,
    };

    CONTEXT_WINDOW.samples.push_back(data_point.clone());
    CONTEXT_WINDOW.round_time_left = gamestate.round_time_left();
    CONTEXT_WINDOW.player_1_character =
        crate::game::Character::from_number(player_1.character() as usize)
            .to_str()
            .to_owned();
    CONTEXT_WINDOW.player_2_character =
        crate::game::Character::from_number(player_2.character() as usize)
            .to_str()
            .to_owned();

    const CONTEXT_SIZE: usize = 10;
    if CONTEXT_WINDOW.samples.len() > CONTEXT_SIZE {
        CONTEXT_WINDOW.samples.pop_front();
    } else if CONTEXT_WINDOW.samples.len() < CONTEXT_SIZE {
        CONTEXT_WINDOW
            .samples
            .resize(CONTEXT_SIZE, data_point.clone());
    }

    let context_window_json = serde_json::to_string(&CONTEXT_WINDOW);
    if let Ok(context_window_json) = context_window_json {
        let res = reqwest::blocking::Client::new()
            .post("http://127.0.0.1:8000/input_prediction")
            .body(context_window_json)
            .header("Content-Type", "application/json")
            .send();
        if let Err(e) = res {
            log::error!("Error sending context window to server: {}", e);
        }
    }
}
