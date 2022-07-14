use once_cell::sync::Lazy;
use parking_lot::Mutex;
use serde::{Deserialize, Serialize};

use std::sync::atomic::{AtomicBool, AtomicIsize};
use std::sync::Arc;

pub type GlobalMut<T> = Lazy<Mutex<T>>;

pub static GAME_UNPACKED: AtomicBool = AtomicBool::new(false);

pub static MODS_ENABLED: AtomicBool = AtomicBool::new(true);
pub static CONFIG: GlobalMut<ModConfig> = Lazy::new(|| Mutex::new(ModConfig::default()));

pub static DIRECTION_P1: AtomicIsize = AtomicIsize::new(0);
pub static DIRECTION_P2: AtomicIsize = AtomicIsize::new(0);

pub static X_POSITION_P1: AtomicIsize = AtomicIsize::new(0);
pub static X_POSITION_P2: AtomicIsize = AtomicIsize::new(0);

pub static Y_POSITION_P1: AtomicIsize = AtomicIsize::new(0);
pub static Y_POSITION_P2: AtomicIsize = AtomicIsize::new(0);

pub static X_VELOCITY_P1: AtomicIsize = AtomicIsize::new(0);
pub static X_VELOCITY_P2: AtomicIsize = AtomicIsize::new(0);

pub static Y_VELOCITY_P1: AtomicIsize = AtomicIsize::new(0);
pub static Y_VELOCITY_P2: AtomicIsize = AtomicIsize::new(0);

pub static HEALTH_P1: AtomicIsize = AtomicIsize::new(0);
pub static HEALTH_P2: AtomicIsize = AtomicIsize::new(0);

pub static TENSION_PULSE_P1: AtomicIsize = AtomicIsize::new(0);
pub static TENSION_PULSE_P2: AtomicIsize = AtomicIsize::new(0);

pub static SCRIPT_PAWN_ADDR: GlobalMut<[u32; 7]> = Lazy::new(|| Mutex::new([0; 7]));

/// The folder where all .bbscript files are held
pub const MODS_FOLDER: &str = r"..\..\Mods";
pub const CONFIG_PATH: &str = r".\rev2mod_config.toml";

#[derive(PartialEq, Eq, Hash)]
pub enum StateValue {}

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
            log_level: log::LevelFilter::Info,
        }
    }
}
