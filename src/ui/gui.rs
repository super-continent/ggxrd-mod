use crate::game::offset::GameState;
use crate::game::offset::GAMESTATE_PTR;
use crate::game::offset::ROLLBACK_MANAGER;
use crate::global;
use crate::sdk;

use crate::speedhack::update_speed;
#[cfg(feature = "websockets")]
use crate::websockets;

use std::borrow::Cow;
use std::path::PathBuf;
use std::sync::atomic::{AtomicBool, AtomicUsize, Ordering};

use hudhook::imgui::*;
use hudhook::ImguiRenderLoop;
use once_cell::sync::Lazy;

// this should work because we initialize the config
// before ever accessing DISPLAY_UI through the UI loop
static DISPLAY_UI: Lazy<AtomicBool> =
    Lazy::new(|| AtomicBool::new(global::CONFIG.lock().display_ui_on_start));
static SELECTED_FOLDER: Lazy<AtomicUsize> = Lazy::new(|| AtomicUsize::new(0));
static SELECTED_SCENE: Lazy<AtomicUsize> = Lazy::new(|| AtomicUsize::new(0));
static ENABLE_SPEEDHACK: AtomicBool = AtomicBool::new(false);

fn save_config(config: global::ModConfig) {
    std::fs::File::create(global::CONFIG_PATH)
        .and_then(|mut f| {
            use std::io::Write;
            let string_config = toml::to_string_pretty(&config).unwrap();
            f.write_all(string_config.as_bytes())
        })
        .unwrap_or_else(|e| error!("writing config: {}", e));
}

pub struct XrdModUi;

impl ImguiRenderLoop for XrdModUi {
    fn render(&mut self, ui: &mut Ui) {
        ui_loop(ui);
    }
}

pub fn ui_loop(ui: &mut Ui) {
    let display_ui = DISPLAY_UI.load(Ordering::SeqCst);
    let mut config = global::CONFIG.lock();

    if ui.is_key_pressed(Key::F1) {
        DISPLAY_UI.store(!display_ui, Ordering::SeqCst);
    }

    if ui.is_key_pressed(Key::F2) {
        config.display_battle_hud = !config.display_battle_hud;
    }

    if !display_ui {
        return;
    }

    ui.window("Pangaea's Rev2 Mod")
        .size([300., 400.], Condition::FirstUseEver)
        .build(|| {
            TabBar::new("Mods and Config").build(&ui, || {
                TabItem::new("Config").build(&ui, || {
                    let mut mods_on = config.mods_enabled;
                    let mut startup_ui = config.display_ui_on_start;
                    let mut dump_scripts = config.dump_scripts;
                    let mut selected_path = SELECTED_FOLDER.load(Ordering::SeqCst);
                    let mut display_battle_hud = config.display_battle_hud;

                    if ui.checkbox("Script mods enabled", &mut mods_on) {
                        config.mods_enabled = mods_on
                    };

                    let items = global::MOD_SUBFOLDERS.lock();

                    // function to make argument and return type share the lifetime
                    fn folder_label_fn(p: &Option<PathBuf>) -> Cow<'_, str> {
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

                    ui.slider("Online delay", 0, 4, &mut config.online_input_delay);

                    if ui.checkbox("Display battle HUD", &mut display_battle_hud) {
                        config.display_battle_hud = display_battle_hud
                    }

                    unsafe {
                        let rollback_manager = *(ROLLBACK_MANAGER.get_address() as *mut *mut u8);

                        if !rollback_manager.is_null() {
                            let delay = rollback_manager.offset(0x1CEC) as *mut u32;
                            if config.online_input_delay != delay.read() {
                                log::debug!(
                                    "Overwriting online input delay to value: {}",
                                    config.online_input_delay
                                );
                                delay.write(config.online_input_delay);
                            }
                        }
                    }

                    #[cfg(feature = "websockets")]
                    {
                        ui.checkbox(
                            "Enable WebSockets",
                            &mut config.websockets.websockets_enabled,
                        );
                        websockets::WEBSOCKETS_ENABLED
                            .store(config.websockets.websockets_enabled, Ordering::Relaxed);
                    }
                    if ui.button("Save Config") {
                        save_config(config.clone())
                    }
                });

                TabItem::new("Debug").build(&ui, || {
                    let mut selected_scene = SELECTED_SCENE.load(Ordering::SeqCst);
                    let mut enable_speedhack = ENABLE_SPEEDHACK.load(Ordering::SeqCst);

                    let scene_ids = [
                        "DEBUGMENU",
                        "DEBUG_CHARA_SELECT",
                        "BATTLE",
                        "TITLE",
                        "CHARA_SELECT",
                        "CHARA_INTRO",
                        "STAGE_INTRO",
                        "CONTINUE",
                        "GAMEOVER",
                        "TESTMODE",
                        "BRIEFING",
                        "INTERLUDE_DRAMA",
                        "RANKING",
                        "NEWS",
                        "BATTLE_DIRECT",
                        "ENDING",
                        "OPENING_DRAMA",
                        "NETWORK_MENU",
                        "STORY_TOP",
                        "STORY_MAIN",
                        "DEBUGMAINMENU",
                        "MAINMENU",
                        "GALLERY",
                        "LIBRARY",
                        "REPLAY_MENU",
                        "LOBBY",
                        "FISHING",
                        "ROOM",
                        "DIGITALFIGURE",
                        "STORY_STAFFROLL",
                        "INTERLUDE_TO_BATTLE",
                    ];

                    if ui.combo_simple_string("Selected Scene", &mut selected_scene, &scene_ids) {
                        SELECTED_SCENE.store(selected_scene, Ordering::SeqCst);
                    }

                    if ui.button("Change Scene") {
                        sdk::ffi::change_scene(selected_scene as i32);
                    }

                    if ui.checkbox("Enable Speedhack", &mut enable_speedhack) {
                        ENABLE_SPEEDHACK.store(enable_speedhack, Ordering::SeqCst);
                        let new_speed = if enable_speedhack { 10.0 } else { 1.0 };
                        unsafe { update_speed(new_speed) };
                    }

                    if ui.button("Enter Replay Menu") {
                        let res = sdk::ffi::enter_replay();
                        log::info!("entering replay: {}", res);
                    }

                    if ui.button("Increment replay selection") {
                        log::debug!("replay at end: {}", sdk::ffi::inc_replay_offset());
                    }

                    if ui.button("Toggle Debug Camera") {
                        sdk::ffi::toggle_debug_camera(true);
                    }

                    ui.text(format!("Current Scene: {}", sdk::ffi::get_scene_id()));
                });

                TabItem::new("Help").build(&ui, || {
                    ui.text("Keybinds:");
                    ui.bullet_text("F1: Show/Hide mod UI");
                    ui.bullet_text("F2: Show/Hide Battle HUD");
                });
            })
        });

    unsafe {
        let gamestate = *(GAMESTATE_PTR.get_address() as *mut *mut u8);

        if gamestate.is_null() {
            return;
        }

        let gamestate = GameState(gamestate);

        ui.window("Game State").build(|| {
            ui.text("P1 RISC");
            ProgressBar::new(
                (gamestate.player_1().risc_meter() as f32 + 12800.0) / (12800.0 + 12800.0),
            )
            .overlay_text(format!("{}/12800", gamestate.player_1().risc_meter()))
            .build(&ui);

            ui.text("P2 RISC");
            ProgressBar::new(
                (gamestate.player_2().risc_meter() as f32 + 12800.0) / (12800.0 + 12800.0),
            )
            .overlay_text(format!("{}/12800", gamestate.player_2().risc_meter()))
            .build(&ui);

            ui.text("P1 Tension");
            ProgressBar::new(gamestate.player_1().tension_meter() as f32 / 10000.0)
                .overlay_text(format!("{}/10000", gamestate.player_1().tension_meter()))
                .build(&ui);

            ui.text("P2 Tension");
            ProgressBar::new(gamestate.player_2().tension_meter() as f32 / 10000.0)
                .overlay_text(format!("{}/10000", gamestate.player_2().tension_meter()))
                .build(&ui);

            ui.text("P1 Tension Pulse");
            ProgressBar::new(
                (gamestate.player_1().tension_pulse() as f32 + 25000.0) / (25000.0 + 25000.0),
            )
            .overlay_text(format!("{}/25000", gamestate.player_1().tension_pulse()))
            .build(&ui);

            ui.text("P2 Tension Pulse");
            ProgressBar::new(
                (gamestate.player_2().tension_pulse() as f32 + 25000.0) / (25000.0 + 25000.0),
            )
            .overlay_text(format!("{}/25000", gamestate.player_2().tension_pulse()))
            .build(&ui);

            ui.text("P1 Health");
            ProgressBar::new(gamestate.player_1().health() as f32 / 420.0)
                .overlay_text(format!("{}/420", gamestate.player_1().health()))
                .build(&ui);

            ui.text("P2 Health");
            ProgressBar::new(gamestate.player_2().health() as f32 / 420.0)
                .overlay_text(format!("{}/420", gamestate.player_2().health()))
                .build(&ui);

            ui.text(format!("P1 Stun: {}", gamestate.player_1().stun()));
            ui.text(format!("P2 Stun: {}", gamestate.player_2().stun()));

            ui.text("P1 Position:");
            ui.text(format!(" X: {}", gamestate.player_1().x_position()));
            ui.text(format!(" Y: {}", gamestate.player_1().y_position()));

            ui.text("P2 Position:");
            ui.text(format!(" X: {}", gamestate.player_2().x_position()));
            ui.text(format!(" Y: {}", gamestate.player_2().y_position()));
        });
    }
}
