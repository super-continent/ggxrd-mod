use parking_lot::Mutex;
use serde::{Serialize, Deserialize};

use std::sync::atomic::{AtomicBool, AtomicUsize, AtomicIsize};
use std::sync::Arc;

lazy_static! {
    pub static ref MODS_ENABLED: AtomicBool = AtomicBool::new(true);
    pub static ref CONFIG: Mutex<ModConfig> = Mutex::new(ModConfig::default());
    pub static ref GAME_UNPACKED: AtomicBool = AtomicBool::new(false);
}

lazy_static! {
    pub static ref TENSION_PULSE_P1: AtomicIsize = AtomicIsize::new(0);
    pub static ref TENSION_PULSE_P2: AtomicIsize = AtomicIsize::new(0);
}

/// The folder where all .bbscript files are held
pub const MODS_FOLDER: &str = r"..\..\Mods";
pub const CONFIG_PATH: &str = r".\rev2mod_config.toml";

#[derive(Serialize, Deserialize, PartialEq, Eq, Clone)]
pub struct ModConfig {
    pub mods_enabled: bool,
    pub hot_reloading: bool,
    pub display_ui_on_start: bool,
    pub log_level: log::LevelFilter,
}

impl Default for ModConfig {
    fn default() -> Self {
        Self {
            mods_enabled: true,
            hot_reloading: true,
            display_ui_on_start: true,
            log_level: log::LevelFilter::Info
        }
    }
}