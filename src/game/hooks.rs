use super::{get_script_file, internal, names, offset, ScriptFile, ScriptType};
use crate::{global, make_fn};
use std::fs::File;
use std::io::prelude::*;

use std::ffi::CStr;
use std::ptr;
use std::sync::{
    atomic::{AtomicUsize, Ordering},
    Arc,
};

static mut ENGINE_PTR: *mut u8 = ptr::null_mut();
static mut STATE_PTR: *mut u8 = ptr::null_mut();
static mut RNG_PTR: *mut u8 = ptr::null_mut();
static mut CAMERA_PTR: *mut u8 = ptr::null_mut();

use detour::static_detour;
use parking_lot::Mutex;
#[derive(Clone)]
pub struct XrdState {
    ENGINE_1: Vec<u8>,
    ENGINE_2: Vec<u8>,
    OBJ_ARRAY: Vec<Vec<u8>>,
    CHARA_ARRAY: Vec<Vec<u8>>,
    SCREEN_MANAGER: Vec<u8>,
    BATTLE_STATE: Vec<u8>,
    RNG_SEED: Vec<u8>,
    CAMERA: Vec<u8>,
}

static mut GAME_STATE: XrdState = XrdState{
    ENGINE_1: Vec::new(),
    ENGINE_2: Vec::new(),
    OBJ_ARRAY: Vec::new(),
    CHARA_ARRAY: Vec::new(),
    SCREEN_MANAGER: Vec::new(),
    BATTLE_STATE: Vec::new(),
    RNG_SEED: Vec::new(),
    CAMERA: Vec::new(),
};

static_detour! {
    static LoadBBScriptHook: unsafe extern "thiscall" fn (*mut u8, *mut u8, u32);
    static GameLoopHook: unsafe extern "thiscall" fn (*mut u8, bool);
    static SetupHook: unsafe extern "thiscall" fn (*mut u8);
    //static ProcessEventHook: unsafe extern "stdcall" fn (*mut usize, *mut usize, *mut usize);
}

lazy_static! {
    static ref MATCH_SCRIPTS: Arc<Mutex<BBScriptStorage>> = Arc::new(Mutex::new(BBScriptStorage {
        common: None,
        common_ef: None,
        player_1: None,
        player_2: None,
        player_1_ef: None,
        player_2_ef: None
    }));
    static ref SCRIPT_LOAD_CALL_COUNTER: AtomicUsize = AtomicUsize::new(0);
    static ref SCRIPT_LAST_CHARACTER: Arc<Mutex<ScriptFile>> =
        Arc::new(Mutex::new(ScriptFile::Sol));
}

pub unsafe fn load_state() {
    if !ENGINE_PTR.is_null() {
        //std::ptr::copy_nonoverlapping(GAME_STATE.ENGINE_1.as_mut_ptr(), ENGINE_PTR, 0x1398);
        std::ptr::copy_nonoverlapping(GAME_STATE.ENGINE_2.as_mut_ptr(), ENGINE_PTR.offset(0x445128), 0x8BED4);
        load_obj();
        load_chara();
        std::ptr::copy_nonoverlapping(GAME_STATE.SCREEN_MANAGER.as_mut_ptr(), STATE_PTR.offset(4622944), 0x188);
        std::ptr::copy_nonoverlapping(GAME_STATE.BATTLE_STATE.as_mut_ptr(), STATE_PTR.offset(4623564), 0x14C);
        std::ptr::copy_nonoverlapping(GAME_STATE.RNG_SEED.as_mut_ptr(), RNG_PTR, 0x1398);
        std::ptr::copy_nonoverlapping(GAME_STATE.CAMERA.as_mut_ptr(), CAMERA_PTR, 0x200);
    }
}

pub unsafe fn load_obj() {
    let mut index = 0;
    let mut p_m_ActiveState: *mut u8 = ENGINE_PTR.offset(0x1398 + 0xC);
    for mut obj in &GAME_STATE.OBJ_ARRAY {
        let m_ActiveState: u8 = obj[0xC];
        if m_ActiveState > 0 {
            std::ptr::copy_nonoverlapping(obj.as_ptr(), ENGINE_PTR.offset(0x1398 + (index * 0x2840)), 0x2840);
        }
        else {
            *p_m_ActiveState = 0;
        }
        index += 1;
        p_m_ActiveState = p_m_ActiveState.offset(0x2840);
    }
}

pub unsafe fn load_chara() {
    std::ptr::copy_nonoverlapping(GAME_STATE.CHARA_ARRAY[0].as_ptr(), ENGINE_PTR.offset(0x3EF798), 0x2ACC8);
    std::ptr::copy_nonoverlapping(GAME_STATE.CHARA_ARRAY[1].as_ptr(), ENGINE_PTR.offset(0x41A460), 0x2ACC8);
}

pub unsafe fn save_state() {
    if !ENGINE_PTR.is_null() {
        //GAME_STATE.ENGINE_1 = std::slice::from_raw_parts_mut(ENGINE_PTR, 0x1398).to_vec();
        GAME_STATE.ENGINE_2 = std::slice::from_raw_parts_mut(ENGINE_PTR.offset(0x445128), 0x8BED4).to_vec();
        save_obj();
        save_chara();
        GAME_STATE.SCREEN_MANAGER = std::slice::from_raw_parts_mut(STATE_PTR.offset(4622944), 0x188).to_vec();
        GAME_STATE.BATTLE_STATE = std::slice::from_raw_parts_mut(STATE_PTR.offset(4623564), 0x14C).to_vec();
        GAME_STATE.RNG_SEED = std::slice::from_raw_parts_mut(RNG_PTR, 0x1398).to_vec();
        GAME_STATE.CAMERA = std::slice::from_raw_parts_mut(CAMERA_PTR, 0x200).to_vec();
    }
}

pub unsafe fn save_obj() {
    let mut index = 0;
    let mut p_m_ActiveState: *mut u8 = ENGINE_PTR.offset(0x1398 + 0xC);
    for mut obj in &mut GAME_STATE.OBJ_ARRAY {
        if *p_m_ActiveState > 0 {
            obj = std::slice::from_raw_parts_mut(ENGINE_PTR.offset(0x1398 + (index * 0x2840)), 0x2840).to_vec().as_mut();
        }
        index += 1;
        p_m_ActiveState = p_m_ActiveState.offset(0x2840);
    }
}

pub unsafe fn save_chara() {
    GAME_STATE.CHARA_ARRAY[0] = std::slice::from_raw_parts_mut(ENGINE_PTR.offset(0x3EF798), 0x2ACC8).to_vec();
    GAME_STATE.CHARA_ARRAY[1] = std::slice::from_raw_parts_mut(ENGINE_PTR.offset(0x3EF798 + 0x2ACC8), 0x2ACC8).to_vec();
}

pub unsafe fn init_game_hooks() -> Result<(), detour::Error> {
    let game_loop_fn =
        make_fn!(offset::FN_LOOP_ROOT.get_address() => unsafe extern "thiscall" fn (*mut u8, bool));

    // if loop_root.is_none() {
    //     info!("Could not locate game loop root!");
    //     panic!("TODO: add graceful shutdown")
    // }

    GameLoopHook
        .initialize(game_loop_fn, |x, b| {
            game_loop_hook(x, b);
        })?
        .enable()?;

    let setup_fn =
        make_fn!(offset::FN_SETUP.get_address() => unsafe extern "thiscall" fn (*mut u8));
    
    SetupHook
        .initialize(setup_fn, |x| {
            setup_hook(x);
        })?
        .enable()?;

    let load_bbscript_fn =
        make_fn!(offset::FN_LOAD_BBSCRIPT.get_address() => internal::FnLoadBBScript);

    LoadBBScriptHook
        .initialize(load_bbscript_fn, load_script_hook)?
        .enable()?;

    Ok(())
}

unsafe fn setup_hook(state_ptr: *mut u8) {
    SetupHook.call(state_ptr);
    ENGINE_PTR = state_ptr;
    let rng: *mut *mut u8 = offset::RNG.get_address() as *mut *mut u8;
    RNG_PTR = *rng as *mut u8;
    let camera: *mut *mut u8 = offset::CAMERA.get_address() as *mut *mut u8;
    CAMERA_PTR = *camera as *mut u8;
    GAME_STATE.OBJ_ARRAY = vec!(vec!(0; 0x2840); 400);
    GAME_STATE.CHARA_ARRAY = vec!(vec!(0; 0x2ACC8); 2);
}

unsafe fn game_loop_hook(game_state: *mut u8, update_draw: bool) {
    let state: *mut *mut u8 = offset::GAME_STATE.get_address() as *mut *mut u8;
    let state_ptr: *mut u8 = (*state as *mut u8).offset(4);
    STATE_PTR = *state;

    GameLoopHook.call(game_state, update_draw);
    
    use crate::helpers::read_type;
    const P1_OFFSET: isize = 0x3EF798;
    const P2_OFFSET: isize = 0x41A460;

    const DIRECTION_OFFSET: isize = 0x248;
    const X_POSITION_OFFSET: isize = 0x24C;
    const Y_POSITION_OFFSET: isize = 0x250;
    const X_VELOCITY_OFFSET: isize = 0x2FC;
    const Y_VELOCITY_OFFSET: isize = 0x300;
    const HEALTH_OFFSET: isize = 0x9CC;
    const TENSION_PULSE_OFFSET: isize = 0x2ac58;

    let config = global::CONFIG.lock();

    debug!("{}", config.mods_enabled);

    let p1 = state_ptr.offset(P1_OFFSET);
    let p2 = state_ptr.offset(P2_OFFSET);

    global::DIRECTION_P1.store(
        read_type::<i32>(p1.offset(DIRECTION_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::DIRECTION_P2.store(
        read_type::<i32>(p2.offset(DIRECTION_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::X_POSITION_P1.store(
        read_type::<i32>(p1.offset(X_POSITION_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::X_POSITION_P2.store(
        read_type::<i32>(p2.offset(X_POSITION_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::Y_POSITION_P1.store(
        read_type::<i32>(p1.offset(Y_POSITION_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::Y_POSITION_P2.store(
        read_type::<i32>(p2.offset(Y_POSITION_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::X_VELOCITY_P1.store(
        read_type::<i32>(p1.offset(X_VELOCITY_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::X_VELOCITY_P2.store(
        read_type::<i32>(p2.offset(X_VELOCITY_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::Y_VELOCITY_P1.store(
        read_type::<i32>(p1.offset(Y_VELOCITY_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::Y_VELOCITY_P2.store(
        read_type::<i32>(p2.offset(Y_VELOCITY_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::HEALTH_P1.store(
        read_type::<i32>(p1.offset(HEALTH_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::HEALTH_P2.store(
        read_type::<i32>(p2.offset(HEALTH_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::TENSION_PULSE_P1.store(
        read_type::<i32>(p1.offset(TENSION_PULSE_OFFSET)) as isize,
        Ordering::SeqCst,
    );
    global::TENSION_PULSE_P2.store(
        read_type::<i32>(p2.offset(TENSION_PULSE_OFFSET)) as isize,
        Ordering::SeqCst,
    );
}

// Hook for the fn that transfers script pointers.
// This implementation currently will break any modes that load in more than 6 scripts (e.g. MOM mode)
fn load_script_hook(this: *mut u8, script_ptr: *mut u8, script_size: u32) {
    // TODO: figure out how to detect which character and script
    // is being loaded in a non-hacky way, should be a UE3 script function

    debug!(
        "this: {:#X}, script_ptr: {:#X}, script_size: {:#X}",
        this as usize, script_ptr as usize, script_size
    );

    unsafe {
        let mut last_script = SCRIPT_LAST_CHARACTER.lock();
        let count = SCRIPT_LOAD_CALL_COUNTER.fetch_add(1, Ordering::SeqCst) % 6;

        let script = if count == 0 || count == 2 {
            // player 1/2 main file, we find the char names here
            let state_count = ptr::read_unaligned::<u32>(script_ptr as *const _);
            // calculate offset to a specific bbscript function that seems to always contains the characters name
            let character_str = script_ptr.add((0x8 + ((state_count + 1) * 0x24)) as usize);

            let character_shortname = CStr::from_ptr(character_str as *mut i8);

            debug!("character_shortname: {:?}", character_shortname);

            *last_script = match character_shortname.to_bytes() {
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

            get_script_file(*last_script, ScriptType::Main)
        } else if count == 1 || count == 3 {
            // player 1/2 effect file
            get_script_file(*last_script, ScriptType::Effect)
        } else if count == 4 {
            // cmn
            get_script_file(ScriptFile::Common, ScriptType::Main)
        } else {
            // cmn effect
            get_script_file(ScriptFile::Common, ScriptType::Effect)
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

        let mods_enabled = global::MODS_ENABLED.load(Ordering::SeqCst);
        debug!("Mods enabled: {}", mods_enabled);
        if mods_enabled {
            if let Some((mod_pointer, mod_size)) = script_storage.get_script_ptr(count) {
                return LoadBBScriptHook.call(this, mod_pointer, mod_size);
            }
        }

        LoadBBScriptHook.call(this, script_ptr, script_size)
    }
}

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
