#![allow(dead_code)]
use crate::{pattern, helpers::{Offset, AobSignature}};

pub const FN_LOOP_SLOWDOWN: Offset = Offset::new(0x9CDF30);
pub const FN_LOAD_BBSCRIPT: Address = Address::offset(0xBBF000);
pub const FN_LOOP_ROOT: Address = Address::offset(0xA56EF0);
pub const FN_WNDPROC: Address = Address::offset(0x94AF60);
pub const FN_SETUP: Address = Address::offset(0xA48660);
pub const GAME_STATE: Address = Address::offset(0x1987724);
pub const RNG: Address = Address::offset(0x1767154);
pub const CAMERA: Address = Address::offset(0x17679A0);

// BattleState::ControlBattleObject(state *)
pub const FN_CONTROL_BATTLE_OBJECT: Offset = Offset::new(0x9DE7F0);