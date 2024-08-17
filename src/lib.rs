mod error;
mod game;
mod global;
mod helpers;
#[cfg(feature = "sammi")]
mod sammi;
mod ui;

use std::ffi::{CString, OsString};
use std::fs::{self, File};

use std::io::{Read, Write};
use std::mem;
use std::os::windows::ffi::OsStringExt;

use std::path::PathBuf;
use std::thread;

#[macro_use]
extern crate log;

use once_cell::sync::OnceCell;
use simplelog::*;
use winapi::{
    ctypes::c_void,
    shared::guiddef::REFIID,
    shared::minwindef::*,
    shared::ntdef::HRESULT,
    shared::winerror,
    um::libloaderapi,
    um::{consoleapi::AllocConsole, sysinfoapi::GetSystemDirectoryW},
    um::{unknwnbase::LPUNKNOWN, winnt::DLL_PROCESS_ATTACH},
};

#[no_mangle]
#[allow(non_snake_case)]
pub extern "stdcall" fn DllMain(hinst_dll: HINSTANCE, attach_reason: DWORD, _: c_void) -> BOOL {
    unsafe {
        libloaderapi::DisableThreadLibraryCalls(hinst_dll);
    }

    match attach_reason {
        DLL_PROCESS_ATTACH => {
            // if sammi is used we set up the message passing state
            if cfg!(feature = "sammi") {
                let (tx, rx) = tokio::sync::mpsc::channel(8);
                global::MESSAGE_SENDER.get_or_init(move || tx);
                thread::spawn(|| unsafe { initialize() });

                thread::spawn(move || {
                    let runtime = tokio::runtime::Builder::new_current_thread()
                        .enable_all()
                        .build()
                        .unwrap();
                    runtime.block_on(async move {
                        sammi::message_handler(rx).await;
                    });
                });
            } else {
                thread::spawn(|| unsafe { initialize() });
            }
        }
        _ => {}
    };

    TRUE
}

unsafe fn initialize() {
    let log_level = global::CONFIG.lock().log_level;
    // let log_level = LevelFilter::Trace;
    if let Ok(logfile) = File::create("rev2mod.log") {
        WriteLogger::init(log_level, Config::default(), logfile).unwrap();
    } else {
        AllocConsole();
        TermLogger::init(
            log_level,
            Config::default(),
            TerminalMode::Stdout,
            ColorChoice::Auto,
        )
        .unwrap();
    }

    info!("Successfully created logging and config setup");

    info!("Initializing");

    std::panic::set_hook(Box::new(|panic_info| {
        error!("PANIC: {}", panic_info.to_string())
    }));

    debug!(
        "Mods folder created: {}",
        fs::create_dir(global::DEFAULT_MODS_FOLDER).is_ok()
    );

    debug!("UI hooks initializing...");

    let mut ui_result = ui::ui_hooks::init_ui();
    while let Err(e) = ui_result {
        error!("Initializing UI failed: {}", e);
        thread::sleep(std::time::Duration::from_secs(5));
        ui_result = ui::ui_hooks::init_ui();
    }
    info!("UI hook success!");

    info!("Initializing game hooks...");
    let game_result = game::hooks::init_game_hooks();
    info!("Game hooks ok?: {}", game_result.is_ok());
}

// type alias to make transmute cleaner
type DInput8Create =
    extern "stdcall" fn(HINSTANCE, DWORD, REFIID, *mut LPVOID, LPUNKNOWN) -> HRESULT;

const SYSTEM32_DEFAULT: &str = r"C:\Windows\System32";

static REAL_DINPUT8_HANDLE: OnceCell<u32> = OnceCell::new();

// Used by GuiltyGearXrd.exe, lets you rename the DLL to dinput8.dll and have it load on startup
#[no_mangle]
pub unsafe extern "stdcall" fn DirectInput8Create(
    inst_handle: HINSTANCE,
    version: DWORD,
    r_iid: REFIID,
    ppv_out: *mut LPVOID,
    p_unk_outer: LPUNKNOWN,
) -> HRESULT {
    debug!("DirectInput8Create called");

    // Load real dinput8.dll if not already loaded

    let real_dinput8 = *REAL_DINPUT8_HANDLE.get_or_init(|| get_dinput8_handle()) as HINSTANCE;

    let dinput8create_fn_name =
        CString::new("DirectInput8Create").expect("CString::new(`DirectInput8Create`) failed");

    let dinput8_create = libloaderapi::GetProcAddress(real_dinput8, dinput8create_fn_name.as_ptr());

    if !real_dinput8.is_null() && !dinput8_create.is_null() {
        let dinput8create_fn = mem::transmute::<_, DInput8Create>(dinput8_create);
        return dinput8create_fn(inst_handle, version, r_iid, ppv_out, p_unk_outer);
    }

    winerror::E_FAIL // Unspecified failure
}

unsafe fn get_dinput8_handle() -> u32 {
    let mut buffer = [0u16; MAX_PATH];
    let written_wchars = GetSystemDirectoryW(buffer.as_mut_ptr(), MAX_PATH as u32);

    let system_directory = if written_wchars == 0 {
        SYSTEM32_DEFAULT.into()
    } else {
        let str_with_nulls = OsString::from_wide(&buffer)
            .into_string()
            .unwrap_or(SYSTEM32_DEFAULT.into());
        str_with_nulls.trim_matches('\0').to_string()
    };

    let dinput_path = system_directory + r"\dinput8.dll";
    debug!("Got real dinput8.dll path: `{}`", dinput_path);

    let real_dinput_handle =
        libloaderapi::LoadLibraryW(helpers::win32_wstring(&dinput_path).as_mut_ptr());

    debug!(
        "Storing pointer to real DInput8: `{:#X}`",
        real_dinput_handle as u32
    );
    real_dinput_handle as u32
}
