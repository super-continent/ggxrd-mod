#![allow(dead_code)]

pub const FN_LOAD_BBSCRIPT: u32 = 0xBBF000;
pub const FN_LOOP_ROOT: u32 = 0x9CDF30; // Maybe the game loops outermost layer, runs once per frame
pub const FN_WNDPROC: u32 = 0x94AF60;