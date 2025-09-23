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
use std::sync::atomic::{AtomicBool, AtomicI32, AtomicUsize, Ordering};

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
static DEBUG_STAGE_OVERRIDE: AtomicBool = AtomicBool::new(false);

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

static PLAYING_REPLAYS: AtomicBool = AtomicBool::new(false);
static CURRENT_REPLAY: AtomicI32 = AtomicI32::new(0);
static mut PREVIOUS_GAMEMODE: usize = 0;
static mut REPLAY_WAS_PLAYED: bool = false;
static mut LATEST_REPLAY_WAS_SELECTED: bool = false;
// some delay inbetween menu interactions is needed to prevent bugs
static mut SELECTION_COUNTDOWN: usize = 0;
fn handle_replay_playback() {
    unsafe {
        if sdk::ffi::get_scene_id() == 2 && PREVIOUS_GAMEMODE == 24 {
            PREVIOUS_GAMEMODE = 2;
            REPLAY_WAS_PLAYED = true;
            LATEST_REPLAY_WAS_SELECTED = false;
        }
        if sdk::ffi::get_scene_id() == 24 && PLAYING_REPLAYS.load(Ordering::SeqCst) {
            if PREVIOUS_GAMEMODE == 2 {
                SELECTION_COUNTDOWN = 30;
            }
            PREVIOUS_GAMEMODE = 24;

            if SELECTION_COUNTDOWN > 0 {
                SELECTION_COUNTDOWN -= 1;
            } else {
                let current_replay = CURRENT_REPLAY.load(Ordering::SeqCst);

                if REPLAY_WAS_PLAYED {
                    REPLAY_WAS_PLAYED = false;
                    CURRENT_REPLAY.store(current_replay + 1, Ordering::SeqCst);

                    let list_len = sdk::ffi::replay_list_length();
                    if current_replay + 1 == list_len && list_len != -1 {
                        PLAYING_REPLAYS.store(false, Ordering::SeqCst);
                        CURRENT_REPLAY.store(0, Ordering::SeqCst);
                    }

                    return;
                }

                if !LATEST_REPLAY_WAS_SELECTED {
                    log::debug!("Selecting replay: {}", current_replay);
                    let select_result = sdk::ffi::select_replay(current_replay);
                    if 0 != select_result {
                        log::debug!("Error selecting replay!");
                        return;
                    } else {
                        log::debug!("Replay selected successfully");
                        LATEST_REPLAY_WAS_SELECTED = true;
                        SELECTION_COUNTDOWN = 15;
                        return;
                    }
                }

                SELECTION_COUNTDOWN = 60;
                log::debug!("Starting replay");
                sdk::ffi::start_replay();
            }
        }
    }
}

pub fn ui_loop(ui: &mut Ui) {
    let display_ui = DISPLAY_UI.load(Ordering::SeqCst);
    let mut config = global::CONFIG.lock();

    handle_replay_playback();

    #[cfg(feature = "discord-presence")]
    unsafe {
        crate::discord_presence::handle_discord_presence()
    };

    if DEBUG_STAGE_OVERRIDE.load(Ordering::SeqCst) {
        sdk::ffi::set_selected_stage(100);
    }

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
                    let mut debug_stage_override = DEBUG_STAGE_OVERRIDE.load(Ordering::SeqCst);
                    let mut enable_replay_data_recording = config.enable_replay_data_recording;

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

                    if ui.checkbox(
                        "Enable Replay Data Recording",
                        &mut enable_replay_data_recording,
                    ) {
                        config.enable_replay_data_recording = enable_replay_data_recording
                    }

                    if ui.checkbox("Enable Speedhack", &mut enable_speedhack) {
                        ENABLE_SPEEDHACK.store(enable_speedhack, Ordering::SeqCst);
                        let new_speed = if enable_speedhack { 5.0 } else { 1.0 };
                        unsafe { update_speed(new_speed) };
                    }

                    if ui.checkbox("Load Debug Stage", &mut debug_stage_override) {
                        DEBUG_STAGE_OVERRIDE.store(debug_stage_override, Ordering::SeqCst);
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

                    if ui.button("Play all replays") {
                        PLAYING_REPLAYS.store(true, Ordering::SeqCst);
                    }

                    ui.text(format!("Current Scene: {}", sdk::ffi::get_scene_id()));
                    ui.text(format!("Current Gamemode: {}", sdk::ffi::get_game_mode()));
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
