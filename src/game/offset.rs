#![allow(dead_code)]
use crate::{pattern, helpers::{Offset, AobSignature}};

pub const FN_LOAD_BBSCRIPT: Offset = Offset::new(0xBBF000);
pub const FN_LOOP_SLOWDOWN: Offset = Offset::new(0x9CDF30);

// BattleState::ControlBattleObject(state *)
pub const FN_CONTROL_BATTLE_OBJECT: Offset = Offset::new(0x9DE7F0);