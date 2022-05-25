use crate::global;
use  crate::game::hooks::save_state;
use  crate::game::hooks::load_state;

use std::sync::atomic::Ordering;

use imgui::*;
use std::sync::atomic::AtomicBool;
use winapi::um::winuser::*;

lazy_static! {
    // this should work because we initialize the config
    // before ever accessing DISPLAY_UI through the UI loop
    static ref DISPLAY_UI: AtomicBool = AtomicBool::new(global::CONFIG.lock().display_ui_on_start);
}

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
        .size([200., 400.], Condition::FirstUseEver)
        .build(&ui, || {
            TabBar::new("Mods and Config").build(&ui, || {
                TabItem::new("Config").build(&ui, || {
                    let mut mods_on = config.mods_enabled;
                    let mut startup_ui = config.display_ui_on_start;

                    if ui.checkbox("Script mods enabled", &mut mods_on) {
                        config.mods_enabled = mods_on
                    };
                    
                    if ui.checkbox("Display UI on startup", &mut startup_ui) {
                        config.display_ui_on_start = startup_ui
                    };

                    if ui.button("Save Config") {
                        save_config(config.clone())
                    }
                });

                #[cfg(feature = "save-state")]
                TabItem::new("Save States").build(&ui, || {
                    if ui.small_button("Save") {
                        debug!("SaveState button clicked");
                        unsafe {
                            save_state();
                        }
                    }

                    if ui.small_button("Load") {
                        debug!("LoadState button clicked");
                        unsafe {
                            load_state();
                        }
                    }
                });

                TabItem::new("Help").build(&ui, || ui.bullet_text("F1: Show/Hide menu"));
            })
        });

    Window::new("Game State Info")
        .size([200., 400.], Condition::Once)
        .build(&ui, || {
            const MIN_TENSION_PULSE: f32 = -25000.0;
            const MAX_TENSION_PULSE: f32 = 25000.0;

            let p1_health = global::HEALTH_P1.load(Ordering::SeqCst);
            let p2_health = global::HEALTH_P2.load(Ordering::SeqCst);

            let p1_pulse = global::TENSION_PULSE_P1.load(Ordering::SeqCst);
            let p2_pulse = global::TENSION_PULSE_P2.load(Ordering::SeqCst);

            ui.text(format!("P1 Direction: {}", global::DIRECTION_P1.load(Ordering::SeqCst)));
            ui.text(format!("P2 Direction: {}", global::DIRECTION_P2.load(Ordering::SeqCst)));

            ui.text(format!("P1 X Position: {}", global::X_POSITION_P1.load(Ordering::SeqCst)));
            ui.text(format!("P2 X Position: {}", global::X_POSITION_P2.load(Ordering::SeqCst)));

            ui.text(format!("P1 Y Position: {}", global::Y_POSITION_P1.load(Ordering::SeqCst)));
            ui.text(format!("P2 Y Position: {}", global::Y_POSITION_P2.load(Ordering::SeqCst)));

            ui.text(format!("P1 X Velocity: {}", global::X_VELOCITY_P1.load(Ordering::SeqCst)));
            ui.text(format!("P2 X Velocity: {}", global::X_VELOCITY_P2.load(Ordering::SeqCst)));

            ui.text(format!("P1 Y Velocity: {}", global::Y_VELOCITY_P1.load(Ordering::SeqCst)));
            ui.text(format!("P2 Y Velocity: {}", global::Y_VELOCITY_P2.load(Ordering::SeqCst)));

            ui.text("P1 Health");
            ProgressBar::new(p1_health as f32 / 420.0)
            .overlay_text(format!("{}/420", p1_health))
            .build(&ui);

            ui.text("P2 Health");
            ProgressBar::new(p2_health as f32 / 420.0)
            .overlay_text(format!("{}/420", p2_health))
            .build(&ui);

            ui.text("P1 Tension Pulse");
            ProgressBar::new(
                (p1_pulse as f32 + MAX_TENSION_PULSE) / (MAX_TENSION_PULSE + -(MIN_TENSION_PULSE)),
            )
            .overlay_text(format!("{}/25000", p1_pulse))
            .build(&ui);

            ui.text("P2 Tension Pulse");
            ProgressBar::new((p2_pulse as f32 + MAX_TENSION_PULSE) / (MAX_TENSION_PULSE * 2.0))
                .overlay_text(format!("{}/25000", p2_pulse))
                .build(&ui);
        });
    ui
}
