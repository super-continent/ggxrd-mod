/// stuff that helps with access to the games internal state

pub type FnLoadBBScript = unsafe extern "thiscall" fn(*mut u8, *mut u8, u32);

pub struct Player {
    health: u32,
    x_position: u32,
    y_position: u32,
    tension_pulse: u32,
}

pub struct EnginePtr(*mut u8);

impl EnginePtr {
    fn new(ptr: *mut u8) -> Self {
        Self(ptr)
    }
}
