#![allow(dead_code)]

pub const FN_LOAD_BBSCRIPT: Offset = Offset::new(0xBBF000);
pub const FN_LOOP_ROOT: Offset = Offset::new(0x9CDF30); // Maybe the game loops outermost layer, runs once per frame
pub const FN_WNDPROC: Offset = Offset::new(0x94AF60);

pub struct Offset(u32);

impl Offset {
    pub const fn new(offset: u32) -> Self {
        Self(offset)
    }

    pub unsafe fn address(&self) -> u32 {
        let base = winapi::um::libloaderapi::GetModuleHandleA(std::ptr::null_mut()) as u32;
        base + self.0
    }
}