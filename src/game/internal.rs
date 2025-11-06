/// stuff that helps with access to the games internal state

pub type FnLoadBBScript = unsafe extern "thiscall" fn(*mut u8, *mut u8, u32);
pub type FnAppRealloc = unsafe extern "cdecl" fn(*mut u8, u32, u32) -> * mut u8;
