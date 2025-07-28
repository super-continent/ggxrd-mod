// Credit: this code is mostly recreating what speedhack-rs does
// https://github.com/Hirtol/speedhack-rs

use retour::static_detour;
use winapi::{
    shared::minwindef::{BOOL, TRUE},
    um::{
        libloaderapi::{GetModuleHandleA, GetProcAddress},
        profileapi::QueryPerformanceCounter,
        sysinfoapi::{GetTickCount, GetTickCount64},
        winnt::LARGE_INTEGER,
    },
};

static_detour! {
    static GetTickCountHook: unsafe extern "system" fn() -> u32;
    static GetTickCount64Hook: unsafe extern "system" fn() -> u64;
    static QueryPerformanceCounterHook: unsafe extern "system" fn(*mut LARGE_INTEGER) -> BOOL;
}

static mut SPEED: f64 = 1.0;

static mut GTC_BASE_TIME: u32 = 0;
static mut GTC_OFFSET_TIME: u32 = 0;

static mut GTC64_BASE_TIME: u64 = 0;
static mut GTC64_OFFSET_TIME: u64 = 0;

static mut QPC_BASE_TIME: i64 = 0;
static mut QPC_OFFSET_TIME: i64 = 0;

pub unsafe fn initialize_speedhack() -> Result<(), retour::Error> {
    let gtc_base = GetTickCount();
    GTC_BASE_TIME = gtc_base;
    GTC_OFFSET_TIME = gtc_base;

    let gtc64_base = GetTickCount64();
    GTC64_BASE_TIME = gtc64_base;
    GTC64_OFFSET_TIME = gtc64_base;

    let mut qpc_time = std::mem::zeroed();
    QueryPerformanceCounter(&mut qpc_time);
    QPC_BASE_TIME = *qpc_time.QuadPart();
    QPC_OFFSET_TIME = *qpc_time.QuadPart();

    let kernel32 = GetModuleHandleA(b"kernel32.dll\0".as_ptr() as *const i8);

    let get_tick_count_addr = GetProcAddress(kernel32, b"GetTickCount\0".as_ptr() as *const i8);
    log::debug!("GetTickCount: {:X}", get_tick_count_addr as usize);
    let get_tick_count: unsafe extern "system" fn() -> u32 =
        std::mem::transmute(get_tick_count_addr);

    let get_tick_count64_addr = GetProcAddress(kernel32, b"GetTickCount64\0".as_ptr() as *const i8);
    log::debug!("GetTickCount64: {:X}", get_tick_count64_addr as usize);
    let get_tick_count64: unsafe extern "system" fn() -> u64 =
        std::mem::transmute(get_tick_count64_addr);

    let qpc_addr = GetProcAddress(kernel32, b"QueryPerformanceCounter\0".as_ptr() as *const i8);
    log::debug!("QueryPerformanceCounter: {:X}", qpc_addr as usize);
    let query_performance_counter: unsafe extern "system" fn(*mut LARGE_INTEGER) -> BOOL =
        std::mem::transmute(qpc_addr);

    GetTickCountHook
        .initialize(get_tick_count, get_tick_count_hook)?
        .enable()?;
    GetTickCount64Hook
        .initialize(get_tick_count64, get_tick_count_64_hook)?
        .enable()?;
    QueryPerformanceCounterHook
        .initialize(query_performance_counter, get_performance_counter_hook)?
        .enable()?;

    Ok(())
}

pub unsafe fn update_speed(new_speed: f64) {
    GTC_OFFSET_TIME = get_tick_count_hook();
    GTC_BASE_TIME = GetTickCountHook.call();

    GTC64_OFFSET_TIME = get_tick_count_64_hook();
    GTC64_BASE_TIME = GetTickCount64Hook.call();

    let mut qpc_offset_time = std::mem::zeroed();
    get_performance_counter_hook(&mut qpc_offset_time);
    let mut qpc_base_time = std::mem::zeroed();
    QueryPerformanceCounterHook.call(&mut qpc_base_time);

    QPC_BASE_TIME = *qpc_base_time.QuadPart();
    QPC_OFFSET_TIME = *qpc_offset_time.QuadPart();

    SPEED = new_speed;
}

fn get_tick_count_hook() -> u32 {
    unsafe { GTC_OFFSET_TIME + ((GetTickCountHook.call() - GTC_BASE_TIME) as f64 * SPEED) as u32 }
}

fn get_tick_count_64_hook() -> u64 {
    unsafe {
        GTC64_OFFSET_TIME + ((GetTickCount64Hook.call() - GTC64_BASE_TIME) as f64 * SPEED) as u64
    }
}

fn get_performance_counter_hook(result: *mut LARGE_INTEGER) -> BOOL {
    log::trace!("QPC Called");
    unsafe {
        let mut qpc_time = std::mem::zeroed();
        QueryPerformanceCounterHook.call(&mut qpc_time);
        *(*result).QuadPart_mut() =
            QPC_OFFSET_TIME + ((*qpc_time.QuadPart() - QPC_BASE_TIME) as f64 * SPEED) as i64;
    }

    TRUE
}
