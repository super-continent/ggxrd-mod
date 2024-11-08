#![allow(dead_code)]
use once_cell::sync::Lazy;
///! Offsets and AOB scan patterns to locate certain function in Xrd
use sigscan::SigScan;

use crate::helpers::offset_struct;
use crate::helpers::Offset;

/// BattleState::ControlBattleObject(state *)
pub const FN_CONTROL_BATTLE_OBJECT: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "6a ff 68 ?? ?? ?? ?? 64 a1 ?? ?? ?? ?? 5? 81",
        "e? ?? ?? ?? ?? a1 ?? ?? ?? ?? 33 ?? 89 ?? ?? ??",
        "?? ?? ?? 5? 5? 5? 5? a1 ?? ?? ?? ?? 33 ?? 5? 8d",
        "?? ?? ?? ?? ?? ?? 64 a3 ?? ?? ?? ?? 8b ?? 6a ??",
        "8d ?? ?? ?? e8 ?? ?? ?? ?? 8d ?? ?? ?? ?? ?? c7",
        "84 ?? ?? ?? ?? ?? ?? ?? ?? ?? e8 ?? ?? ?? ?? 8d",
        "?? ?? ?? ?? ?? e8 ?? ?? ?? ??"
    ))
});

/// BBSAnalyzeExe
pub const FN_LOAD_BBSCRIPT: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "5? 8b ?? 83 e? ?? 6a ?? 68 ?? ?? ?? ?? 64 a1 ?? ?? ?? ?? 5?",
        "83 e? ?? a1 ?? ?? ?? ?? 33 ?? 89 ?? ?? ?? 5? 5? 5? a1 ?? ??",
        "?? ?? 33 ?? 5? 8d ?? ?? ?? 64 a3 ?? ?? ?? ?? 8b ?? ?? 8b ??",
        "89 ?? 8b ?? 83 c? ?? 8b ?? 8d ?? ?? 89 ?? ?? 8d ?? ?? 83 c?",
        "?? 89 ?? ?? 89 ?? ?? 85 ?? 74 ?? 6a ?? 6a ?? e8 ?? ?? ?? ??",
        "83 c? ?? 89 ?? ?? ?? c7 44 ?? ?? ?? ?? ?? ?? 85 ?? 74 ?? 5?",
        "8b ?? e8 ?? ?? ?? ??"
    ))
});

/// AREDGameInfo_Battle::UpdateBattle(state *)
pub const FN_UPDATE_BATTLE: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "6a ?? 68 ?? ?? ?? ?? 64 a1 ?? ?? ?? ?? 5? 83 e? ?? a1 ",
        "?? ?? ?? ?? 33 ?? 89 ?? ?? ?? 5? 5? 5? 5? a1 ?? ?? ?? ",
        "?? 33 ?? 5? 8d ?? ?? ?? ?? ?? ?? 64 a3 ?? ?? ?? ?? 8b ",
        "?? 89 ?? ?? ?? e8 ?? ?? ?? ?? 85 ?? 74 ?? 6a ?? e8 ?? ",
        "?? ?? ?? 83 c? ?? 8b ?? ?? ?? ?? ?? 8b ?? ?? ?? ?? ?? ",
        "8b ?? ?? ?? ?? ?? 33 ?? 3b ?? 74 ?? 8b ?? ?? ?? ?? ?? ",
        "83 e? ?? 89 ?? ?? ?? eb ?? 89 ?? ?? ?? 8d ?? ?? c7 44 ",
        "?? ?? ?? ?? ?? ?? 39 ?? ?? ?? ?? ?? 74 ?? 8b ?? ?? ?? ",
        "?? ?? 8b ?? ?? ?? ?? ?? 8b ?? ?? ?? ?? ?? 8b ?? 5? 8d ",
        "?? ?? ?? 5? 5? 5? 5? 8b ?? 89 ?? ?? ?? e8"
    ))
});

pub const FN_BOM_ROUNDANDEASYRESETINITIALIZE: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "81 e? ?? ?? ?? ?? a1 ?? ?? ?? ?? 33 ?? 89 ?? ?? ?? ?? ?? ?? 5? 5? 33 ?? 5? 8b ?? 5? ",
        "89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 66 89 ?? ?? ?? ?? ?? e8 ?? ?? ",
        "?? ?? 8b ?? ?? ?? ?? ?? e8 ?? ?? ?? ?? 3c ?? 74 ?? 39 ?? ?? ?? ?? ?? 75 ?? e8 ?? ?? ",
        "?? ?? 8b ?? e8 ?? ?? ?? ?? 85 ?? 75 ?? e8 ?? ?? ?? ?? 85 ?? 75 ?? a1 ?? ?? ?? ?? 8b ",
        "?? ?? ?? ?? ??"
    ))
});

pub const FN_CREATE_OBJECT_WITH_ARG: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "81 e? ?? ?? ?? ?? a1 ?? ?? ?? ?? 33 ?? 89 ?? ?? ?? ?? ?? ?? 5? 5? 5? 5? 8b ?? ",
        "?? ?? ?? ?? ?? 33 ?? 80 3? ?? 8b ?? 75 ?? 80 7? ?? ?? 75 ?? 80 7? ?? ?? c7 44 ",
        "?? ?? ?? ?? ?? ?? 74 ?? 89 ?? ?? ?? 33 ?? 39 ?? ?? ?? 0f 84 ?? ?? ?? ?? b? ?? ",
        "?? ?? ?? 8b ??"
    ))
});

pub const FN_END_COMBO: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "5? 5? 8b ?? 5? 33 ?? 33 ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? ",
        "e8 ?? ?? ?? ?? 8b ?? 8b ?? ?? 33 ?? 39 ?? ?? 5? 0f 94 ?? 6a ?? 5? 8b ?? ff d? ",
        "39 ?? ?? ?? ?? ?? 75 ?? c7 8? ?? ?? ?? ?? ?? ?? ?? ?? 8d ?? ?? 68 ?? ?? ?? ?? ",
        "8d ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 89 ?? ",
        "?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? c7 8? ?? ?? ?? ?? ?? ?? ?? ?? ",
        "89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ??"
    ))
});

pub const FN_GAMESTATE_ADVANCE: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "5? 8b ?? 0f b6 ?? ?? ?? ?? ?? 4? 75 ?? 8b ?? 8b ?? ?? ?? ?? ?? ff d? a1 ?? ?? ?? ?? ",
        "85 ?? 74 ?? 83 3? ?? 75 ?? 80 b? ?? ?? ?? ?? ?? 77 ?? 83 3d ?? ?? ?? ?? ?? 74 ?? ",
        "f3 0f 10 ?? ?? ?? 5? 8b ?? f3 0f 11 ?? ?? e8 ?? ?? ?? ??"
    ))
});

pub const FN_PROCESS_HIT: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "81 e? ?? ?? ?? ?? a1 ?? ?? ?? ?? 33 ?? 89 ?? ?? ?? ?? ?? ?? 5? 5? 5? 8b ?? 8b ",
        "?? ?? ?? ?? ?? 5? 8b ?? ?? ?? ?? ?? ?? 8b ?? ?? ?? ?? ?? 8b ?? ?? 89 ?? ?? ?? ",
        "8b ?? ?? 33 ?? 83 c? ?? f7 d? 1b ?? 23 ?? 89 ?? ?? ?? 8b ?? ?? ?? ?? ?? 89 ?? ",
        "?? ?? 8b ?? ?? ?? ?? ?? f7 d?"
    ))
});

pub const FN_ACTIVATE_TIMER: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "33 ?? 89 ?? ?? ?? ?? ?? 8b ?? ?? 89 ?? ?? b? ?? ?? ?? ?? ",
        "89 ?? ?? 89 ?? ?? 89 ?? ?? 89 ?? ?? ?? ?? ?? c3"
    ))
});

pub const ROLLBACK_DELAY: Lazy<SigScan> = Lazy::new(|| {
    SigScan::new_yara_style(concat!(
        "01 00 00 00 e8 ?? ?? ?? ?? 8b ?? 8b ?? ?? ?? 64 ",
        "89 ?? ?? ?? ?? ?? 5? 5? 5? 5? 5? 83 c? ?? c3"
    ))
});

pub const ONLINE_MATCH_INFO: Offset = Offset::new(0x01737FC0);

pub const P1_REPLAY_STEAMID: Offset = Offset::new(0x19A23B0);
pub const P2_REPLAY_STEAMID: Offset = Offset::new(0x19A23BC);

pub const GAMESTATE_PTR: Offset = Offset::new(0x198B6E4);

/// `[GAMESTATE_PTR]` offset to player 1
pub const P1_OFFSET: isize = 0x169814;
/// `[GAMESTATE_PTR]` offset to player 2
pub const P2_OFFSET: isize = 0x169814 + 0x2D198;

offset_struct! {
    struct GameState {
        rounds_to_win @ 0x1C7240: u32,
        round_time_limit @ 0x1C71FC: u32,
        round_time_left @ 0x1C7200: u32,
        burst_meter_p1 @ 0x1C4B20: u32,
        burst_meter_p2 @ 0x1C4B24: u32,
    }

    struct GameObject {
        character @ 0x44: u32,
        x_position @ 0x24C: i32,
        y_position @ 0x250: i32,
        attack_level @ 0x450: u32,
        recieved_hit_type @ 0x990: u32,
        health @ 0x9CC: i32,
        previous_state @ 0x2424: [u8; 32],
        current_state @ 0x2444: [u8; 32],
        untechable_time @ 0x9808: u32,
        recieved_combo_counter @ 0x9F28: u32,
        recieved_combo_damage @ 0x9F44: i32,
        recieved_damage @ 0x9F48: i32,
        stun @ 0x9FC4: i32,
        stun_resistance @ 0x9FC8: u32,
        tension_pulse @ 0x2D128: i32,
        tension_meter @ 0x2D134: u32,
        risc_meter @ 0x24E30: i32,
    }
}

impl GameState {
    pub unsafe fn player_1(&self) -> GameObject {
        GameObject(self.0.offset(P1_OFFSET))
    }

    pub unsafe fn player_2(&self) -> GameObject {
        GameObject(self.0.offset(P2_OFFSET))
    }
}
