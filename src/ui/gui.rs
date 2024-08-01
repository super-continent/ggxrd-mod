use crate::global;
use crate::sammi;

use std::borrow::Cow;
use std::path::PathBuf;
use std::sync::atomic::Ordering;

use imgui::*;
use once_cell::sync::Lazy;
use std::sync::atomic::{AtomicBool, AtomicUsize};
use winapi::um::winuser::*;

// this should work because we initialize the config
// before ever accessing DISPLAY_UI through the UI loop
static DISPLAY_UI: Lazy<AtomicBool> =
    Lazy::new(|| AtomicBool::new(global::CONFIG.lock().display_ui_on_start));
static SELECTED_FOLDER: Lazy<AtomicUsize> = Lazy::new(|| AtomicUsize::new(0));

fn save_config(config: global::ModConfig) {
    std::fs::File::create(global::CONFIG_PATH)
        .and_then(|mut f| {
            use std::io::Write;
            let string_config = toml::to_string_pretty(&config).unwrap();
            f.write_all(string_config.as_bytes())
        })
        .unwrap_or_else(|e| error!("writing config: {}", e));
}

pub fn ui_loop(ui: Ui) -> Ui {
    let display_ui = DISPLAY_UI.load(Ordering::SeqCst);
    let mut config = global::CONFIG.lock();

    if ui.is_key_index_pressed(VK_F1) {
        DISPLAY_UI.store(!display_ui, Ordering::SeqCst);
    }

    if !display_ui {
        return ui;
    }

    Window::new("Rev2 Mod")
        .size([300., 400.], Condition::FirstUseEver)
        .build(&ui, || {
            TabBar::new("Mods and Config").build(&ui, || {
                TabItem::new("Config").build(&ui, || {
                    let mut mods_on = config.mods_enabled;
                    let mut startup_ui = config.display_ui_on_start;
                    let mut dump_scripts = config.dump_scripts;
                    let mut selected_path = SELECTED_FOLDER.load(Ordering::SeqCst);

                    if ui.checkbox("Script mods enabled", &mut mods_on) {
                        config.mods_enabled = mods_on
                    };

                    let items = global::MOD_SUBFOLDERS.lock();

                    // function to make argument and return type share the lifetime
                    fn folder_label_fn<'b>(p: &'b Option<PathBuf>) -> Cow<'b, str> {
                        match p {
                            Some(ref path) => path.to_string_lossy(),
                            None => "Root Folder".into(),
                        }
                    }

                    if ui.combo("Selected Mod", &mut selected_path, &items, folder_label_fn) {
                        SELECTED_FOLDER.store(selected_path, Ordering::SeqCst);

                        let mut selected_mod_folder = global::SELECTED_MOD_FOLDER.lock();

                        let new_mods_path = if let Some(subfolder) = &items[selected_path] {
                            PathBuf::from(global::DEFAULT_MODS_FOLDER).join(subfolder)
                        } else {
                            PathBuf::from(global::DEFAULT_MODS_FOLDER)
                        };

                        debug!("Set mods folder to {}", new_mods_path.display());

                        *selected_mod_folder = new_mods_path
                    }

                    if ui.checkbox("Display UI on startup", &mut startup_ui) {
                        config.display_ui_on_start = startup_ui
                    };

                    if ui.checkbox("Dump game scripts", &mut dump_scripts) {
                        config.dump_scripts = dump_scripts
                    };

                    if ui.checkbox("Dump game scripts", &mut dump_scripts) {
                        config.dump_scripts = dump_scripts
                    };

                    #[cfg(feature = "sammi")]
                    {
                        ui.checkbox("Enable SAMMI", &mut config.sammi.sammi_enabled);
                        sammi::SAMMI_ENABLED.store(config.sammi.sammi_enabled, Ordering::Relaxed);
                        ui.input_text("Webhook URL", &mut config.sammi.webhook_url)
                            .build();
                    }
                    if ui.button("Save Config") {
                        save_config(config.clone())
                    }
                });

                TabItem::new("Help").build(&ui, || ui.bullet_text("F1: Show/Hide menu"));
            })
        });

    ui
}
