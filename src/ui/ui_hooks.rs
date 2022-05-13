use super::gui;

use crate::global;
use crate::helpers::*;
use crate::{error::ModError, make_fn};

use std::ffi::CString;
use std::sync::Arc;
use std::{error::Error, ptr};
use std::{
    mem,
    sync::atomic::{AtomicUsize, Ordering},
};

use detour::static_detour;
use imgui_dx9_renderer::Renderer;
use imgui_impl_win32_rs::*;
use parking_lot::Mutex;
use winapi::um::winuser::LPMSG;
use winapi::um::winuser::MSG;
use winapi::{
    shared::{d3d9::*, d3d9types::*, minwindef::*, windef::HWND, winerror::FAILED},
    um::{
        errhandlingapi::GetLastError,
        libloaderapi::{GetModuleHandleW, GetProcAddress},
        winuser::{
            CreateWindowExW, DefWindowProcW, DestroyWindow, RegisterClassExW, UnregisterClassW,
            CS_HREDRAW, CS_VREDRAW, GWLP_WNDPROC, GWL_WNDPROC, WNDCLASSEXW, WNDPROC,
            WS_EX_OVERLAPPEDWINDOW,
        },
    },
};

lazy_static! {
    static ref IMHOOK_STATE: Arc<Mutex<Option<ImState>>> = Arc::new(Mutex::new(None));
    static ref ORIG_WNDPROC: Arc<Mutex<WNDPROC>> = Arc::new(Mutex::new(None));
    static ref GAME_WINDOW_HWND: AtomicUsize = AtomicUsize::new(0);
}

// Static Detour for EndScene and Reset
static_detour! {
    static PeekMessageWHook: unsafe extern "system" fn(LPMSG, HWND, u32, u32, u32) -> i32;
    static SetWindowLongWHook: unsafe extern "system" fn(HWND, i32, i32) -> i32;
    static EndSceneHook: unsafe extern "system" fn(*mut IDirect3DDevice9) -> i32;
    static ResetHook: unsafe extern "system" fn(*mut IDirect3DDevice9, *mut D3DPRESENT_PARAMETERS) -> i32;
}

unsafe fn get_d3d9_device_wndclass() -> Result<*mut IDirect3DDevice9, ModError> {
    let mut class_name = win32_wstring("d3d_hook_class");
    let mut window_name = win32_wstring("HookWindow");
    let mut wndclass: WNDCLASSEXW = mem::zeroed();
    wndclass.cbSize = mem::size_of::<WNDCLASSEXW>() as u32;
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc = Some(DefWindowProcW);
    wndclass.hInstance = GetModuleHandleW(ptr::null());
    wndclass.lpszClassName = class_name.as_mut_ptr();

    if RegisterClassExW(&wndclass) == 0 {
        let err_code = GetLastError();
        UnregisterClassW(wndclass.lpszClassName, wndclass.hInstance);
        return Err(ModError::GetDeviceFailed(format!(
            "RegisterClassExW failed with error {:#08X}",
            err_code
        )));
    }

    let window = CreateWindowExW(
        WS_EX_OVERLAPPEDWINDOW,
        wndclass.lpszClassName,
        window_name.as_mut_ptr(),
        wndclass.style,
        10,
        10,
        10,
        10,
        ptr::null_mut(),
        ptr::null_mut(),
        wndclass.hInstance,
        ptr::null_mut(),
    );
    if window.is_null() {
        UnregisterClassW(wndclass.lpszClassName, wndclass.hInstance);
        return Err(ModError::GetDeviceFailed("CreateWindowExW failed".into()));
    }

    let d3d9 = Direct3DCreate9(winapi::shared::d3d9::D3D_SDK_VERSION);
    if d3d9.is_null() {
        DestroyWindow(window);
        UnregisterClassW(wndclass.lpszClassName, wndclass.hInstance);
        return Err(ModError::GetDeviceFailed("Direct3DCreate9 failed".into()));
    }

    let mut display_mode: D3DDISPLAYMODE = mem::zeroed();
    if FAILED((*d3d9).GetAdapterDisplayMode(D3DADAPTER_DEFAULT, &mut display_mode)) {
        (*d3d9).Release();
        DestroyWindow(window);
        UnregisterClassW(wndclass.lpszClassName, wndclass.hInstance);
        return Err(ModError::GetDeviceFailed(
            "GetAdapterDisplayMode failed".into(),
        ));
    }

    let mut present_params: D3DPRESENT_PARAMETERS = mem::zeroed();
    present_params.Windowed = TRUE;
    present_params.SwapEffect = D3DSWAPEFFECT_DISCARD;
    present_params.BackBufferFormat = display_mode.Format;
    present_params.hDeviceWindow = window;

    let mut d3d9_device = ptr::null_mut();

    let hr = (*d3d9).CreateDevice(
        D3DADAPTER_DEFAULT,
        D3DDEVTYPE_HAL,
        window,
        D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_DISABLE_DRIVER_MANAGEMENT,
        &mut present_params,
        &mut d3d9_device,
    );
    if FAILED(hr) {
        (*d3d9).Release();
        DestroyWindow(window);
        UnregisterClassW(wndclass.lpszClassName, wndclass.hInstance);
        return Err(ModError::GetDeviceFailed("CreateDevice failed".into()));
    }

    (*d3d9).Release();
    DestroyWindow(window);
    UnregisterClassW(wndclass.lpszClassName, wndclass.hInstance);
    Ok(d3d9_device)
}

pub unsafe fn init_ui() -> Result<(), Box<dyn Error>> {
    info!("Initializing UI");
    let device = get_d3d9_device_wndclass()?;

    debug!("Got device VTable");

    debug!("Hooking PeekMessageW");

    let user32_module = GetModuleHandleW(win32_wstring("User32.dll").as_ptr());
    let name = CString::new("PeekMessageW").unwrap();

    let peekmessagew_addr = GetProcAddress(user32_module, name.as_ptr());

    let peekmessagew_addr =
        make_fn!(peekmessagew_addr => unsafe extern "system" fn(LPMSG, HWND, u32, u32, u32) -> i32);

    PeekMessageWHook
        .initialize(peekmessagew_addr, peek_message_w_hook)?
        .enable()?;

    let endscene = (*(*device).lpVtbl).EndScene;
    let reset = (*(*device).lpVtbl).Reset;

    let mut im_ctx = imgui::Context::create();
    im_ctx.style_mut().use_dark_colors();
    im_ctx.fonts();

    debug!("Set up imgui context");

    let program_state = ImState {
        renderer: None,
        window: None,
        im_ctx,
    };

    {
        // initialize global ui hooks state
        *IMHOOK_STATE.lock() = Some(program_state);
    }

    ResetHook.initialize(reset, reset_hook)?.enable()?;
    EndSceneHook.initialize(endscene, endscene_hook)?.enable()?;
    Ok(())
}

fn peek_message_w_hook(
    msg: LPMSG,
    hwnd: HWND,
    msg_filter_min: u32,
    msg_filter_max: u32,
    remove_msg: u32,
) -> i32 {
    unsafe {
        let trampoline_ret =
            PeekMessageWHook.call(msg, hwnd, msg_filter_min, msg_filter_max, remove_msg);

        if trampoline_ret == 0 {
            return FALSE;
        }

        if let Err(e) = handle_lpmsg_input(msg) {
            error!("Error processing message: {}", e);
        }
    }
    TRUE
}

fn endscene_hook(device: *mut IDirect3DDevice9) -> i32 {
    unsafe {
        trace!("endscene called");
        let mut state_lock = IMHOOK_STATE.lock();
        //trace!("acquired state lock");
        let state: &mut ImState = match *state_lock {
            Some(ref mut s) => s,
            None => {
                return EndSceneHook.call(device);
            }
        };

        if state.renderer.is_none() {
            let new_renderer = match Renderer::new_raw(&mut state.im_ctx, device) {
                Ok(r) => r,
                Err(e) => {
                    error!("Error creating new renderer: {:#X}", e);
                    return EndSceneHook.call(device);
                }
            };

            state.renderer = Some(new_renderer);
        }

        if state.window.is_none() {
            let mut creation_params: D3DDEVICE_CREATION_PARAMETERS = mem::zeroed();

            if (*device).GetCreationParameters(&mut creation_params) != 0 {
                return EndSceneHook.call(device);
            };

            let new_window = match Win32Impl::init(&mut state.im_ctx, creation_params.hFocusWindow)
            {
                Ok(r) => r,
                Err(e) => {
                    error!("Error creating new Win32Impl: {}", e);
                    return EndSceneHook.call(device);
                }
            };

            state.window = Some(new_window);

            {
                // debug!("setting wndproc hook");
                // GAME_WINDOW_HWND.store(creation_params.hFocusWindow as usize, Ordering::SeqCst);
                // set_window_long_ptr(creation_params.hFocusWindow, GWLP_WNDPROC, wnd_proc as i32);
                // debug!("set wndproc hook");
            }
        }

        // Should always be Some
        if let Some(wind) = state.window.as_mut() {
            if let Err(e) = wind.prepare_frame(&mut state.im_ctx) {
                // Handles error of possibly setting wndproc for wrong window, should never happen.
                error!("Error calling Win32Impl::prepare_frame: {}", e);

                drop(state.window.take());
                return EndSceneHook.call(device);
            }
        }

        let ui = gui::ui_loop(state.im_ctx.frame());
        let draw_data = ui.render();

        let renderer = match state.renderer.as_mut() {
            Some(r) => r,
            None => {
                error!("no renderer in state");
                return EndSceneHook.call(device);
            }
        };
        if let Err(e) = renderer.render(draw_data) {
            error!("could not render draw data: {}", e);
        };

        if get_window_long(GAME_WINDOW_HWND.load(Ordering::SeqCst) as HWND, GWL_WNDPROC)
            != wnd_proc as i32
        {
            debug!("detected incorrect wndproc! resetting");
            drop(state.window.take())
        }

        EndSceneHook.call(device)
    }
}

fn reset_hook(device: *mut IDirect3DDevice9, present_params: *mut D3DPRESENT_PARAMETERS) -> i32 {
    unsafe {
        trace!("Reset called");
        let mut state_lock = IMHOOK_STATE.lock();
        //trace!("acquired state lock");
        let state: &mut ImState = match *state_lock {
            Some(ref mut s) => s,
            None => {
                return ResetHook.call(device, present_params);
            }
        };

        drop(state.renderer.take());

        ResetHook.call(device, present_params)
    }
}

unsafe extern "system" fn wnd_proc(
    hwnd: HWND,
    msg: UINT,
    wparam: WPARAM,
    lparam: LPARAM,
) -> LRESULT {
    let wndproc_addr = crate::game::offset::FN_WNDPROC.get_address();
    let wndproc =
        make_fn!(wndproc_addr => unsafe extern "system" fn(HWND, UINT, WPARAM, LPARAM) -> LRESULT);

    if let Err(e) = imgui_win32_window_proc(hwnd, msg, wparam, lparam) {
        error!("Error calling imgui window proc: {}", e);
    };

    call_wndproc(Some(wndproc), hwnd, msg, wparam, lparam)
}

unsafe fn handle_lpmsg_input(msg: LPMSG) -> Result<(), Win32ImplError> {
    let hwnd = (*msg).hwnd;
    let msg_type = (*msg).message;
    let wparam = (*msg).wParam;
    let lparam = (*msg).lParam;

    imgui_win32_window_proc(hwnd, msg_type, wparam, lparam)?;
    Ok(())
}

struct ImState {
    renderer: Option<Renderer>,
    im_ctx: imgui::Context,
    window: Option<Win32Impl>,
}
unsafe impl Send for ImState {}
