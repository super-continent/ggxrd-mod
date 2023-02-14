#![allow(dead_code)]
use crate::{helpers::{Offset}};

pub const FN_LOAD_BBSCRIPT: Offset = Offset::new(0xBD6150);
/// BattleState::ControlBattleObject(state *)
pub const FN_CONTROL_BATTLE_OBJECT: Offset = Offset::new(0x9E7310);
/// AREDGameInfo_Battle::UpdateBattle(state *)
pub const FN_UPDATE_BATTLE: Offset = Offset::new(0xA5E150);
pub const FN_SETUP: Offset = Offset::new(0xA48660);
pub const GAME_STATE: Offset = Offset::new(0x1987724);
pub const RNG: Offset = Offset::new(0x1767154);
pub const CAMERA: Offset = Offset::new(0x17679A0);
