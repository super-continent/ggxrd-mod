use std::ffi::OsStr;
use std::mem;
use std::os::windows::ffi::OsStrExt;

use winapi::ctypes::c_int;
use winapi::shared::{minwindef::*, windef::HWND};
use winapi::um::winnt::LONG;
use winapi::um::winuser::{
    CallWindowProcA, CallWindowProcW, GetWindowLongA, GetWindowLongPtrA, GetWindowLongPtrW,
    GetWindowLongW, IsWindowUnicode, SetWindowLongPtrA, SetWindowLongPtrW, GWLP_WNDPROC, WNDPROC,
};

#[macro_export]
macro_rules! make_fn {
    ($address:expr => $fn_type:ty) => {
        std::mem::transmute::<*const usize, $fn_type>($address as *const usize)
    };
}

pub unsafe fn set_window_long_ptr(hwnd: HWND, index: c_int, new_long: i32) -> i32 {
    match IsWindowUnicode(hwnd) {
        0 => SetWindowLongPtrA(hwnd, index, new_long),
        _ => SetWindowLongPtrW(hwnd, index, new_long),
    }
}

pub unsafe fn get_wndproc(hwnd: HWND) -> WNDPROC {
    // make the transmute cleaner
    type WndProcfn = unsafe extern "system" fn(HWND, UINT, WPARAM, LPARAM) -> isize;

    let wndproc_i = match IsWindowUnicode(hwnd) {
        0 => GetWindowLongPtrA(hwnd, GWLP_WNDPROC),
        _ => GetWindowLongPtrW(hwnd, GWLP_WNDPROC),
    };

    if wndproc_i != 0 {
        return Some(mem::transmute::<i32, WndProcfn>(wndproc_i));
    } else {
        return None;
    }
}

pub unsafe fn get_window_long(hwnd: HWND, n_index: INT) -> LONG {
    return match IsWindowUnicode(hwnd) {
        0 => GetWindowLongA(hwnd, n_index),
        _ => GetWindowLongW(hwnd, n_index),
    };
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
