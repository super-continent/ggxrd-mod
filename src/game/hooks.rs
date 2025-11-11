use super::{get_script_file, internal, names, offset, ScriptFile, ScriptType};
use crate::game::get_script_filename;
use crate::global::GlobalMut;
use crate::helpers::get_aob_offset;
use crate::{global, make_fn, speedhack};

#[cfg(feature = "websockets")]
use crate::websockets;

use std::ffi::CStr;
use std::ptr;
use std::sync::atomic::{AtomicUsize, Ordering};

use once_cell::sync::Lazy;
use parking_lot::Mutex;
use retour::static_detour;

static_detour! {
    static LoadBBScriptHook: unsafe extern "thiscall" fn (*mut u8, *mut u8, u32);
    static ControlBattleObjectHook: unsafe extern "thiscall" fn (*mut u8);
    static GameStateAdvanceHook: unsafe extern "thiscall" fn (*mut u8, *mut u8);
    static BattleHudAdvanceHook: unsafe extern "thiscall" fn (*mut u8);
    static SetupHook: unsafe extern "thiscall" fn (*mut u8);
    static ConstructRollbackManagerHook: unsafe extern "thiscall" fn (*mut u8) -> *mut u8;
    static WritePlayerInputHook: unsafe extern "thiscall" fn (*mut u8, u16) -> *mut u16;
    //static ProcessEventHook: unsafe extern "stdcall" fn (*mut usize, *mut usize, *mut usize);
}
#[cfg(feature = "websockets")]
static_detour! {
    static BOMRoundAndEasyResetInitializeHook: unsafe extern "thiscall" fn (*mut u8, bool);
    static CreateObjectWithArgHook: unsafe extern "thiscall" fn (*mut u8, *mut u8, *mut u8);
    static EndComboHook: unsafe extern "thiscall" fn (*mut u8);
    static ActivateTimerHook: unsafe extern "thiscall" fn (*mut u8);
    static ProcessHitHook: unsafe extern "thiscall" fn (*mut u8, *mut u8, *mut u8);
    static DeInitGameStateHook: unsafe extern "C" fn ();
}

static MATCH_SCRIPTS: GlobalMut<BBScriptStorage> =
    Lazy::new(|| Mutex::new(BBScriptStorage::default()));
static SCRIPT_LOAD_CALL_COUNTER: AtomicUsize = AtomicUsize::new(0);
static SCRIPT_LAST_CHARACTER: GlobalMut<ScriptFile> = Lazy::new(|| Mutex::new(ScriptFile::Sol));

pub unsafe fn init_game_hooks() -> Result<(), retour::Error> {
    let gamestate_advance_fn = make_fn!(get_aob_offset(&offset::FN_GAMESTATE_ADVANCE).unwrap() => unsafe extern "thiscall" fn (*mut u8, *mut u8));

    log::debug!("gamestate_advance: {:X}", gamestate_advance_fn as usize);

    GameStateAdvanceHook
        .initialize(gamestate_advance_fn, |x, y| {
            gamestate_advance_hook(x, y);
        })?
        .enable()?;

    let battle_hud_advance_fn = make_fn!(get_aob_offset(&offset::FN_BATTLE_HUD_ADVANCE).unwrap() => unsafe extern "thiscall" fn (*mut u8));

    log::debug!("battle_hud_advance: {:X}", battle_hud_advance_fn as usize);

    BattleHudAdvanceHook
        .initialize(battle_hud_advance_fn, |hud| {
            BattleHudAdvanceHook.call(hud);

            let hud_flags = hud.offset(0x1D8);
            // HUD toggle
            let config = global::CONFIG.lock();
            if config.display_battle_hud {
                *hud_flags |= 2;
            } else {
                *hud_flags &= !2;
            }

            // enable debug overlay
            // *hud_flags |= 0b1000;
        })?
        .enable()?;

    let load_bbscript_fn =
        make_fn!(get_aob_offset(&offset::FN_LOAD_BBSCRIPT).unwrap() => internal::FnLoadBBScript);

    log::debug!("load_bbscript: {:X}", load_bbscript_fn as usize);

    LoadBBScriptHook
        .initialize(load_bbscript_fn, load_script_hook)?
        .enable()?;

    let construct_rollback_manager_fn = make_fn!(get_aob_offset(&offset::FN_CONSTRUCT_ROLLBACK_MANAGER).unwrap() => unsafe extern "thiscall" fn (*mut u8) -> *mut u8);

    log::debug!(
        "construct_rollback_manager: {:X}",
        construct_rollback_manager_fn as usize
    );

    ConstructRollbackManagerHook
        .initialize(construct_rollback_manager_fn, |x| {
            let manager = ConstructRollbackManagerHook.call(x);

            let delay_value = global::CONFIG.lock().online_input_delay;

            log::trace!(
                "overwriting online manager at {:X} with delay field of {}",
                manager as usize,
                delay_value.min(4)
            );
            let delay = manager.offset(0x1CEC) as *mut u32;
            delay.write(delay_value);

            manager
        })?
        .enable()?;

    // let write_player_input_fn = make_fn!(get_aob_offset(&offset::FN_WRITE_PLAYER_INPUT).unwrap() => unsafe extern "thiscall" fn (*mut u8, u16) -> *mut u16);

    // WritePlayerInputHook
    //     .initialize(write_player_input_fn, |input_ring, new_input| {
    //         log::trace!("Pushing input to ring buffer");
    //         WritePlayerInputHook.call(input_ring, new_input)
    //     })?
    //     .enable()?;

    log::debug!("enabling speedhack");
    speedhack::initialize_speedhack()?;

    #[cfg(feature = "websockets")]
    {
        let activate_timer_fn = make_fn!(get_aob_offset(&offset::FN_ACTIVATE_TIMER).unwrap() => unsafe extern "thiscall" fn (*mut u8));

        ActivateTimerHook
            .initialize(activate_timer_fn, |obj| {
                websockets::round_begin();
                ActivateTimerHook.call(obj)
            })?
            .enable()?;

        let create_object_fn = make_fn!(get_aob_offset(&offset::FN_CREATE_OBJECT_WITH_ARG).unwrap() => unsafe extern "thiscall" fn (*mut u8, *mut u8, *mut u8));

        log::debug!("create_object_with_arg: {:X}", create_object_fn as usize);
        CreateObjectWithArgHook
            .initialize(create_object_fn, |object, arg, ptr| {
                log::trace!(
                    "CreateObjectWithArg: {:X}, {:X}, {:X}",
                    object as usize,
                    arg as usize,
                    ptr as usize
                );
                websockets::create_object_with_arg_hook(object, arg, ptr);
                CreateObjectWithArgHook.call(object, arg, ptr);
            })?
            .enable()?;

        let end_combo_hook = make_fn!(get_aob_offset(&offset::FN_END_COMBO).unwrap() => unsafe extern "thiscall" fn (*mut u8));

        log::debug!("end_combo: {:X}", end_combo_hook as usize);
        EndComboHook
            .initialize(end_combo_hook, |obj| {
                websockets::end_combo_hook(obj);
                EndComboHook.call(obj);
            })?
            .enable()?;

        let process_hit = make_fn!(get_aob_offset(&offset::FN_PROCESS_HIT).unwrap() => unsafe extern "thiscall" fn (*mut u8, *mut u8, *mut u8));

        log::debug!("process_hit: {:X}", process_hit as usize);
        ProcessHitHook
            .initialize(process_hit, |attacker, victim, unknown| {
                ProcessHitHook.call(attacker, victim, unknown);
                websockets::process_hit_hook(attacker, victim);
            })?
            .enable()?;

        let deinit_gamestate = make_fn!(get_aob_offset(&offset::FN_DEINIT_GAMESTATE).unwrap() => unsafe extern "C" fn ());
        log::debug!("deinitialize_gamestate: {:X}", deinit_gamestate as usize);

        DeInitGameStateHook
            .initialize(deinit_gamestate, || {
                websockets::deinit_gamestate_hook();
                DeInitGameStateHook.call()
            })?
            .enable()?;
    }
    Ok(())
}

unsafe fn gamestate_advance_hook(game_state: *mut u8, other: *mut u8) {
    log::trace!(
        "Got arguments {:X} and {:X}",
        game_state as usize,
        other as usize,
    );

    #[cfg(feature = "websockets")]
    {
        log::trace!("gathering state for websockets...");
        crate::websockets::game_loop_hook_websockets();
    }

    // 17 = replay mode
    #[cfg(feature = "replay-data")]
    if crate::sdk::ffi::get_game_mode() == 17 {
        crate::match_recorder::record_replay_state();
    }

    #[cfg(feature = "input-prediction")]
    {
        crate::input_prediction::handle_simulation_step();
    }

    GameStateAdvanceHook.call(game_state, other);
}

// Hook for the fn that transfers script pointers.
// This implementation currently will break any modes that load in more than 6 scripts (e.g. MOM mode)
fn load_script_hook(this: *mut u8, script_ptr: *mut u8, script_size: u32) {
    use std::path::PathBuf;

    // TODO: figure out how to detect which character and script
    // is being loaded in a non-hacky way, should be a UE3 script function

    debug!(
        "this: {:#X}, script_ptr: {:#X}, script_size: {:#X}",
        this as usize, script_ptr as usize, script_size
    );

    unsafe {
        let mut last_character = SCRIPT_LAST_CHARACTER.lock();
        let count = SCRIPT_LOAD_CALL_COUNTER.fetch_add(1, Ordering::SeqCst) % 6;

        let script_type = if (count % 2) == 0 {
            ScriptType::Main
        } else {
            ScriptType::Effect
        };

        if count == 0 || count == 2 {
            // player 1/2 main file, we find the char names here
            let state_count = ptr::read_unaligned::<u32>(script_ptr as *const _);
            // calculate offset to a specific bbscript function that seems to always contains the characters name
            let character_str = script_ptr.add((0x8 + ((state_count + 1) * 0x24)) as usize);

            let character_shortname = CStr::from_ptr(character_str as *mut i8);

            debug!("character_shortname: {:?}", character_shortname);

            *last_character = match character_shortname.to_bytes() {
                names::ANSWER => ScriptFile::Answer,
                names::AXL => ScriptFile::Axl,
                names::BAIKEN => ScriptFile::Baiken,
                names::BEDMAN => ScriptFile::Bedman,
                names::CHIPP => ScriptFile::Chipp,
                names::DIZZY => ScriptFile::Dizzy,
                names::ELPHELT => ScriptFile::Elphelt,
                names::FAUST => ScriptFile::Faust,
                names::INO => ScriptFile::Ino,
                names::JACKO => ScriptFile::Jacko,
                names::JAM => ScriptFile::Jam,
                names::JOHNNY => ScriptFile::Johnny,
                names::KUM => ScriptFile::Kum,
                names::KY => ScriptFile::Ky,
                names::LEO => ScriptFile::Leo,
                names::MAY => ScriptFile::May,
                names::MILLIA => ScriptFile::Millia,
                names::POTEMKIN => ScriptFile::Potemkin,
                names::RAMLETHAL => ScriptFile::Ramlethal,
                names::RAVEN => ScriptFile::Raven,
                names::SIN => ScriptFile::Sin,
                names::SLAYER => ScriptFile::Slayer,
                names::SOL => ScriptFile::Sol,
                names::VENOM => ScriptFile::Venom,
                names::ZATO => ScriptFile::Zato,
                _ => ScriptFile::Sol,
            };
        }

        let config = global::CONFIG.lock();
        if config.dump_scripts {
            let dump_folder = PathBuf::from(global::DUMPED_SCRIPTS_FOLDER);

            if !dump_folder.is_dir() {
                if let Err(e) = std::fs::create_dir(&dump_folder) {
                    debug!("error creating dumped scripts folder: {}", e);
                }
            }

            let script_slice = std::slice::from_raw_parts(script_ptr, script_size as usize);

            let result = if count < 4 {
                let path = dump_folder.join(get_script_filename(*last_character, script_type));
                std::fs::write(path, script_slice)
            } else {
                let path = dump_folder.join(get_script_filename(ScriptFile::Common, script_type));
                std::fs::write(path, script_slice)
            };

            if let Err(e) = result {
                debug!("error dumping script file: {}", e);
            }
        }

        let script = if count < 4 {
            get_script_file(*last_character, script_type)
        } else {
            get_script_file(ScriptFile::Common, script_type)
        };

        let mut script_storage = MATCH_SCRIPTS.lock();

        match count {
            0 => script_storage.player_1 = script,
            1 => script_storage.player_1_ef = script,
            2 => script_storage.player_2 = script,
            3 => script_storage.player_2_ef = script,
            4 => script_storage.common = script,
            5 => script_storage.common_ef = script,
            _ => {}
        }

        let mods_enabled = config.mods_enabled;
        debug!("Mods enabled: {}", mods_enabled);
        if mods_enabled {
            if let Some((mod_pointer, mod_size)) = script_storage.get_script_ptr(count) {
                return LoadBBScriptHook.call(this, mod_pointer, mod_size);
            }
        }

        LoadBBScriptHook.call(this, script_ptr, script_size)
    }
}

#[derive(Default)]
struct BBScriptStorage {
    pub common: Option<Vec<u8>>,
    pub common_ef: Option<Vec<u8>>,
    pub player_1: Option<Vec<u8>>,
    pub player_2: Option<Vec<u8>>,
    pub player_1_ef: Option<Vec<u8>>,
    pub player_2_ef: Option<Vec<u8>>,
}

impl BBScriptStorage {
    /// Index is the number of times the script function has been called during the current match loading cycle
    pub fn get_script_ptr(&mut self, index: usize) -> Option<(*mut u8, u32)> {
        match index {
            0 => {
                if let Some(script) = self.player_1.as_mut() {
                    return Some((script.as_mut_ptr(), script.len() as u32));
                }
            }
            1 => {
                if let Some(script) = self.player_1_ef.as_mut() {
                    return Some((script.as_mut_ptr(), script.len() as u32));
                }
            }
            2 => {
                if let Some(script) = self.player_2.as_mut() {
                    return Some((script.as_mut_ptr(), script.len() as u32));
                }
            }
            3 => {
                if let Some(script) = self.player_2_ef.as_mut() {
                    return Some((script.as_mut_ptr(), script.len() as u32));
                }
            }
            4 => {
                if let Some(script) = self.common.as_mut() {
                    return Some((script.as_mut_ptr(), script.len() as u32));
                }
            }
            5 => {
                if let Some(script) = self.common_ef.as_mut() {
                    return Some((script.as_mut_ptr(), script.len() as u32));
                }
            }
            _ => {}
        }

        None
    }
}
