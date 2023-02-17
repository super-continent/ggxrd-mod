#![allow(dead_code)]
use crate::{helpers::{Offset}};

/// BBSAnalyzeExe
pub const FN_LOAD_BBSCRIPT: Offset = Offset::new(0xBD5150);
/// BattleState::ControlBattleObject(state *)
pub const FN_CONTROL_BATTLE_OBJECT: Offset = Offset::new(0x9E7370);
/// AREDGameInfo_Battle::UpdateBattle(state *)
pub const FN_UPDATE_BATTLE: Offset = Offset::new(0xA5E7C0);

// pub const GAME_STATE: Offset = Offset::new(0x1987724);
