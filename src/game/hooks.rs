use super::{get_script_file, internal, names, offset, ScriptFile, ScriptType};
use crate::game::get_script_filename;
use crate::global::GlobalMut;
use crate::helpers::get_aob_offset;
use crate::{global, make_fn};

use std::ffi::CStr;
use std::ptr;
use std::sync::atomic::{AtomicUsize, Ordering};

use once_cell::sync::Lazy;
use parking_lot::Mutex;
use retour::static_detour;

static_detour! {
    static LoadBBScriptHook: unsafe extern "thiscall" fn (*mut u8, *mut u8, u32);
    static ControlBattleObjectHook: unsafe extern "thiscall" fn (*mut u8);
    static UpdateBattleHook: unsafe extern "thiscall" fn (*mut u8, bool);
    static SetupHook: unsafe extern "thiscall" fn (*mut u8);
    //static ProcessEventHook: unsafe extern "stdcall" fn (*mut usize, *mut usize, *mut usize);
}

static MATCH_SCRIPTS: GlobalMut<BBScriptStorage> =
    Lazy::new(|| Mutex::new(BBScriptStorage::default()));
static SCRIPT_LOAD_CALL_COUNTER: AtomicUsize = AtomicUsize::new(0);
static SCRIPT_LAST_CHARACTER: GlobalMut<ScriptFile> = Lazy::new(|| Mutex::new(ScriptFile::Sol));

pub unsafe fn init_game_hooks() -> Result<(), retour::Error> {
    let update_battle_fn = make_fn!(get_aob_offset(&offset::FN_UPDATE_BATTLE).unwrap() => unsafe extern "thiscall" fn (*mut u8, bool));

    log::debug!("update_battle: {}", update_battle_fn as usize);

    UpdateBattleHook
        .initialize(update_battle_fn, |x, b| {
            update_battle_hook(x, b);
        })?
        .enable()?;

    let control_battle_object_fn = make_fn!(get_aob_offset(&offset::FN_CONTROL_BATTLE_OBJECT).unwrap() => unsafe extern "thiscall" fn (*mut u8));

    log::debug!(
        "control_battle_object: {}",
        control_battle_object_fn as usize
    );

    ControlBattleObjectHook.initialize(control_battle_object_fn, |x| {
        puffin::profile_scope!("CObjectManager::ControlBattleObject");
        ControlBattleObjectHook.call(x)
    })?;
    // .enable()?;

    let load_bbscript_fn =
        make_fn!(get_aob_offset(&offset::FN_LOAD_BBSCRIPT).unwrap() => internal::FnLoadBBScript);

    log::debug!("load_bbscript: {}", load_bbscript_fn as usize);

    LoadBBScriptHook
        .initialize(load_bbscript_fn, load_script_hook)?
        .enable()?;

    Ok(())
}

unsafe fn update_battle_hook(game_state: *mut u8, update_draw: bool) {
    log::trace!("Got game_state {:X} and update_draw {}", game_state as usize, update_draw as u8);
    UpdateBattleHook.call(game_state, update_draw);

    #[cfg(feature = "sammi")]
    // only collect data on frames that are not rollback simulations
    // with 30fps limit
    if update_draw {
        crate::sammi::collect_info_sammi(game_state);
    }

}

// Hook for the fn that transfers script pointers.
// This implementation currently will break any modes that load in more than 6 scripts (e.g. MOM mode)
fn load_script_hook(this: *mut u8, script_ptr: *mut u8, script_size: u32) {
    use std::path::PathBuf;

    // TODO: figure out how to detect which character and script
    // is being loaded in a non-hacky way, should be a UE3 script function
    puffin::profile_function!();

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

        {
            puffin::profile_scope!("BBSAnalyzeExe");
            LoadBBScriptHook.call(this, script_ptr, script_size)
        }
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
