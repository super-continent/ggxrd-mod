use std::os::windows::ffi::OsStrExt;
use std::path::{Path, PathBuf};
use std::{ffi::OsStr, mem};

use sigscan::SigScan;
use winapi::um::memoryapi::ReadProcessMemory;
use winapi::um::psapi::{GetModuleInformation, MODULEINFO};
use winapi::{
    ctypes::c_int,
    shared::{minwindef::*, windef::HWND},
    um::{
        processthreadsapi::GetCurrentProcess,
        winnt::LONG,
        winuser::{
            CallWindowProcA, CallWindowProcW, GetWindowLongA, GetWindowLongW, IsWindowUnicode,
            SetWindowLongPtrA, SetWindowLongPtrW, WNDPROC,
        },
    },
};

#[macro_export]
macro_rules! make_fn {
    ($address:expr => $fn_type:ty) => {
        std::mem::transmute::<*const usize, $fn_type>($address as *const usize)
    };
}

/// Follow some chain of offsets from a pointer to get a pointer to data.
/// `[0x0, 0x10, 0x8]` will offset by `0x0`, dereference, offset by `0x10`, dereference, 
/// then offset by `0x8`, dereference, and return the resulting pointer.
pub unsafe fn pointer_chain(mut ptr: *mut u8, offsets: impl AsRef<[isize]>) -> *mut u8 {
    for offset in offsets.as_ref() {
        // offset ptr and then deref
        ptr = *(ptr.offset(*offset) as *mut *mut u8);
    }

    ptr
}

pub unsafe fn read_type<T: Sized>(ptr: *mut u8) -> T {
    let ptr = ptr as *mut T;
    ptr.read()
}

pub unsafe fn set_window_long_ptr(hwnd: HWND, index: c_int, new_long: i32) -> i32 {
    match IsWindowUnicode(hwnd) {
        0 => SetWindowLongPtrA(hwnd, index, new_long),
        _ => SetWindowLongPtrW(hwnd, index, new_long),
    }
}

pub unsafe fn get_window_long(hwnd: HWND, n_index: INT) -> LONG {
    match IsWindowUnicode(hwnd) {
        0 => GetWindowLongA(hwnd, n_index),
        _ => GetWindowLongW(hwnd, n_index),
    }
}

pub unsafe fn get_module_base() -> HINSTANCE {
    winapi::um::libloaderapi::GetModuleHandleA(std::ptr::null_mut())
}

pub unsafe fn get_aob_offset(pattern: &SigScan) -> Option<usize> {
    let base = get_module_base();
    let mut module_info = mem::zeroed::<MODULEINFO>();

    GetModuleInformation(
        GetCurrentProcess(),
        base,
        &mut module_info,
        mem::size_of::<MODULEINFO>() as u32,
    );
    let module_size = module_info.SizeOfImage;

    let _guard = match region::protect_with_handle(
        base,
        module_size as usize,
        region::Protection::READ_WRITE_EXECUTE,
    ) {
        Ok(guard) => guard,
        Err(e) => {
            log::error!("error protecting memory: {}", e);
            return None;
        }
    };

    let scan_region = std::slice::from_raw_parts(base as *mut u8, module_size as usize);

    pattern
        .scan(scan_region)
        .map(|offset| offset + base as usize)
}

pub unsafe fn call_wndproc(
    prev_wnd_func: WNDPROC,
    hwnd: HWND,
    msg: UINT,
    wparam: WPARAM,
    lparam: LPARAM,
) -> LRESULT {
    match IsWindowUnicode(hwnd) {
        0 => CallWindowProcA(prev_wnd_func, hwnd, msg, wparam, lparam),
        _ => CallWindowProcW(prev_wnd_func, hwnd, msg, wparam, lparam),
    }
}

pub fn win32_wstring(val: &str) -> Vec<u16> {
    // Encode string wide and then add null at the end, collect to Vec<u16>
    OsStr::new(val)
        .encode_wide()
        .chain(std::iter::once(0))
        .collect::<Vec<u16>>()
}

/// Type for storing offsets to memory
pub struct Offset(usize);

impl Offset {
    /// Create an [`Offset`] that calculates the offset of a programs base address
    pub const fn new(offset: usize) -> Self {
        Self(offset)
    }

    pub unsafe fn get_address(&self) -> usize {
        let base = get_module_base() as usize;
        base + self.0
    }
}

pub fn get_subfolder_names(path: impl AsRef<Path>) -> std::io::Result<Vec<PathBuf>> {
    let iter = std::fs::read_dir(path.as_ref())?;

    // filter by DirEntries which exist and are directories
    // then map to PathBufs containing only the directory name
    let paths = iter
        .filter_map(|dir_entry| {
            dir_entry.ok().filter(|p| p.path().is_dir()).map(|entry| {
                let path = entry.path();
                let name = path.file_name().expect("should have a file name");

                PathBuf::from(name)
            })
        })
        .collect();
    Ok(paths)
}
