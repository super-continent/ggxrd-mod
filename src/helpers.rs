use std::os::windows::ffi::OsStrExt;
use std::{ffi::OsStr, mem};

use winapi::um::memoryapi::ReadProcessMemory;
use winapi::um::psapi::GetModuleInformation;
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
    return match IsWindowUnicode(hwnd) {
        0 => GetWindowLongA(hwnd, n_index),
        _ => GetWindowLongW(hwnd, n_index),
    };
}

pub unsafe fn get_module_base() -> HINSTANCE {
    winapi::um::libloaderapi::GetModuleHandleA(std::ptr::null_mut())
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

/// Create an [`Address`] that scans for a specified pattern.
#[macro_export]
macro_rules! pattern {
    ( $( $x:tt ),* ) => {
        crate::helpers::AobSignature::new(
            &[ $( pattern!(@ONE_ELEMENT $x), )* ]
        )
    };
    (@ONE_ELEMENT $x:literal) => { Some($x) };
    (@ONE_ELEMENT _) => { None };
}

/// Type for storing offsets and AOB scans
/// for finding the offset of something within a running program
pub struct Offset(u32);

impl Offset {
    /// Create an [`Offset`] that calculates the offset of a programs base address
    pub const fn new(offset: u32) -> Self {
        Self(offset)
    }

    pub unsafe fn get_address(&self) -> u32 {
        let base = get_module_base() as u32;
        base + self.0
    }
}

pub struct AobSignature<'a>(&'a [Option<u8>]);

impl<'a> AobSignature<'a> {
    pub const fn new(signature: &'a [Option<u8>]) -> Self {
        Self(signature)
    }

    pub unsafe fn find_in_base_module(&self) -> Option<u32> {
        use winapi::um::psapi::MODULEINFO;

        let process = GetCurrentProcess();
        let module = get_module_base();

        let mut module_info = mem::zeroed::<MODULEINFO>();

        if GetModuleInformation(
            process,
            module,
            &mut module_info,
            mem::size_of::<MODULEINFO>() as u32,
        ) == 0
        {
            return None;
        };

        let mut buffer = vec![0u8; module_info.SizeOfImage as usize];
        let mut bytes_read = 0;

        if ReadProcessMemory(
            process,
            module_info.lpBaseOfDll,
            buffer.as_mut_ptr() as *mut _,
            module_info.SizeOfImage as usize,
            &mut bytes_read,
        ) == 0
        {
            return None;
        }
        debug!("bytes read: {}", bytes_read);
        debug!(
            "Scanning AOB, address = {:X}, size = {:X}",
            module as u32, module_info.SizeOfImage
        );

        debug!("patlen = {}, bufferlen = {}", self.0.len(), buffer.len());
        if let Some(offset) = scan_aob(&buffer, self.0) {
            Some(module as u32 + offset as u32)
        } else {
            None
        }
    }
}

// Boyer-Moore-Horspool substring search
// Code taken and modified from hudhook (https://github.com/veeenu/hudhook)
pub fn scan_aob(haystack: &[u8], needle: &[Option<u8>]) -> Option<usize> {
    let (pattern_len, haystack_len) = (needle.len(), haystack.len());

    if pattern_len > haystack_len {
        debug!("pattern length greater than haystack length!");
        panic!("pattern length must be less than haystack length")
    }

    let mut skips = [pattern_len; 256];
    for pattern_idx in 0..pattern_len - 1 {
        if let Some(v) = needle[pattern_idx] {
            skips[v as usize] = pattern_len - pattern_idx - 1;
        }
    }

    let mut haystack_idx = pattern_len - 1;
    while haystack_idx < haystack_len {
        let mut hay_idx = haystack_idx;
        for pat_idx in (0..pattern_len).rev() {
            if !(needle[pat_idx as usize].is_none()
                || needle[pat_idx as usize] == Some(haystack[hay_idx as usize]))
            {
                break;
            }

            if pat_idx == 0 {
                return Some(hay_idx);
            }

            hay_idx -= 1;
        }

        haystack_idx += skips[haystack[haystack_idx] as usize];
    }

    None
}
