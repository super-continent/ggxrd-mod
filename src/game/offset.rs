#![allow(dead_code)]

pub const FN_LOAD_BBSCRIPT: Address = Address::offset(0xBBF000);
pub const FN_LOOP_ROOT: Address = Address::offset(0xA56EF0);
pub const FN_WNDPROC: Address = Address::offset(0x94AF60);
pub const FN_SETUP: Address = Address::offset(0xA48660);
pub const GAME_STATE: Address = Address::offset(0x1987724);
pub const RNG: Address = Address::offset(0x1767154);
pub const CAMERA: Address = Address::offset(0x17679A0);

pub enum Address<'a> {
    Offset(u32),
    Pattern(&'a[u8])
}

impl<'a> Address<'a> {
    pub const fn offset(offset: u32) -> Self {
        Self::Offset(offset)
    }

    pub unsafe fn get_address(&self) -> u32 {
        match self {
            Self::Offset(offset) => {
                let base = winapi::um::libloaderapi::GetModuleHandleA(std::ptr::null_mut()) as u32;
                base + offset
            }
            Self::Pattern(_pattern) => {
                todo!()
            }
        }
    }
}