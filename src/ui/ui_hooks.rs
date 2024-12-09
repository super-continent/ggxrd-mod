use super::gui;

use hudhook::hooks::dx9::ImguiDx9Hooks;
use hudhook::mh::MH_STATUS;
use hudhook::windows::Win32::Foundation::HINSTANCE;
use hudhook::Hudhook;

pub unsafe fn init_ui(module: HINSTANCE) -> Result<(), MH_STATUS> {
    info!("Initializing UI");

    Hudhook::builder()
        .with::<ImguiDx9Hooks>(gui::XrdModUi)
        .with_hmodule(module)
        .build()
        .apply()?;
    Ok(())
}
