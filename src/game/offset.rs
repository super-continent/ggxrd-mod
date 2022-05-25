#![allow(dead_code)]
use crate::{pattern, helpers::{Offset, AobSignature}};

pub const FN_LOOP_SLOWDOWN: Offset = Offset::new(0x9CDF30);

pub const FN_LOAD_BBSCRIPT: Offset = Offset::new(0xBBF000);
/// BattleState::ControlBattleObject(state *)
pub const FN_CONTROL_BATTLE_OBJECT: Offset = Offset::new(0x9DE7F0);
/// AREDGameInfo_Battle::UpdateBattle(state *)
pub const FN_UPDATE_BATTLE: Offset = Offset::new(0xA56EF0);
pub const FN_SETUP: Offset = Offset::new(0xA48660);
pub const GAME_STATE: Offset = Offset::new(0x1987724);
pub const RNG: Offset = Offset::new(0x1767154);
pub const CAMERA: Offset = Offset::new(0x17679A0);
