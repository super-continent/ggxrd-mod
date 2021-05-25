use crate::global;

use std::sync::atomic::Ordering;
use std::sync::Arc;

use imgui::*;
use parking_lot::Mutex;
use winapi::um::winuser::*;

// i dont actually need a mutex here but its much easier for me than using thread_local!() stuff
// if the mutex for some reason has a measurable performance impact (it shouldnt, i think anyway)
// i might just deal with it and switch to TLS
lazy_static! {
    static ref GUI_STATE: Arc<Mutex<GuiState>> = Arc::new(Mutex::new(
        GuiState {
            // define defaults for UI here
            display_ui: true,
        }
    ));
}

pub fn ui_loop(ui: Ui) -> Ui {
    let mut ui_state = GUI_STATE.lock();

    if ui.is_key_pressed(VK_F1 as u32) {
        ui_state.display_ui = !ui_state.display_ui;
    }

    if ui_state.display_ui {
        Window::new(im_str!("Rev2 Mod"))
            .size([200., 400.], Condition::Once)
            .build(&ui, || {
                TabBar::new(im_str!("BBScript Modding")).build(&ui, || {
                    TabItem::new(im_str!("Mods")).build(&ui, || {
                        let mut mods_on = global::MODS_ENABLED.load(Ordering::SeqCst);

                        if ui.checkbox(im_str!("Script Mods Enabled"), &mut mods_on) {
                            debug!("Storing {} in global::MODS_ENABLED", mods_on);
                            global::MODS_ENABLED.store(mods_on, Ordering::SeqCst)
                        };
                    });

                    #[cfg(feature = "save-state")]
                    TabItem::new(im_str!("Save States")).build(&ui, || {
                        if ui.small_button(im_str!("Save")) {
                            debug!("SaveState button clicked");
                        }

                        if ui.small_button(im_str!("Load")) {
                            debug!("LoadState button clicked");
                        }
                    });

                    TabItem::new(im_str!("Help"))
                        .build(&ui, || ui.bullet_text(im_str!("F1: Show/Hide menu")));
                })
            });
    }
    ui
}

struct GuiState {
    pub display_ui: bool,
}
unsafe impl Send for GuiState {}
