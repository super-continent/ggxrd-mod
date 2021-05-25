pub type FnLoadBBScript = unsafe extern "thiscall" fn(*mut u8, *mut u8, u32);

pub struct Player {
    health: u32,
    x_position: u32,
    y_position: u32,
    tension_pulse: u32,
}

pub struct GameState {
    player_1: Player,
    player_2: Player,
}

unsafe impl Send for GameState {}
