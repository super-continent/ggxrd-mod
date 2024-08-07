use once_cell::sync::{Lazy, OnceCell};
use parking_lot::Mutex;
use serde::{Deserialize, Serialize};

use std::path::PathBuf;

use crate::{helpers, sammi};

pub type GlobalMut<T> = Lazy<Mutex<T>>;

#[cfg(feature = "sammi")]
pub static MESSAGE_SENDER: OnceCell<tokio::sync::mpsc::Sender<sammi::SammiMessage>> =
    OnceCell::new();

pub static CONFIG: GlobalMut<ModConfig> = Lazy::new(|| Mutex::new(ModConfig::default()));
pub static MOD_SUBFOLDERS: GlobalMut<Vec<Option<PathBuf>>> = Lazy::new(|| {
    let mut paths: Vec<Option<PathBuf>> = helpers::get_subfolder_names(DEFAULT_MODS_FOLDER)
        .unwrap_or(Vec::new())
        .into_iter()
        .map(|p| Some(p))
        .collect();

    paths.insert(0, None);

    Mutex::new(paths)
});

pub static SELECTED_MOD_FOLDER: GlobalMut<PathBuf> =
    Lazy::new(|| Mutex::new(DEFAULT_MODS_FOLDER.into()));

/// The folder where all .bbscript files are held
pub const DEFAULT_MODS_FOLDER: &str = r"..\..\Mods\";
pub const DUMPED_SCRIPTS_FOLDER: &str = r"..\..\Dumped Scripts\";
pub const CONFIG_PATH: &str = r".\rev2mod_config.toml";

#[derive(Serialize, Deserialize, Clone)]
pub struct ModConfig {
    pub mods_enabled: bool,
    pub display_ui_on_start: bool,
    pub dump_scripts: bool,
    pub log_level: log::LevelFilter,

    #[cfg(feature = "sammi")]
    pub sammi: sammi::SammiConfig,
}

impl Default for ModConfig {
    fn default() -> Self {
        Self {
            mods_enabled: true,
            display_ui_on_start: true,
            dump_scripts: false,
            log_level: log::LevelFilter::Info,

            #[cfg(feature = "sammi")]
            sammi: sammi::SammiConfig::default(),
        }
    }
}
