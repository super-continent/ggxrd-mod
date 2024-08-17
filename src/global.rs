use once_cell::sync::{Lazy, OnceCell};
use parking_lot::Mutex;
use serde::{Deserialize, Serialize};

use std::{
    fs::File,
    io::{Read, Write},
    path::PathBuf,
};

use crate::{helpers, sammi};

pub type GlobalMut<T> = Lazy<Mutex<T>>;

#[cfg(feature = "sammi")]
pub static MESSAGE_SENDER: OnceCell<tokio::sync::mpsc::Sender<sammi::SammiMessage>> =
    OnceCell::new();

fn init_config() -> ModConfig {
    let config_path = PathBuf::from(CONFIG_PATH);

    let default_config = ModConfig::default();
    let default_config_str = toml::to_string_pretty(&default_config).unwrap();

    if !config_path.is_file() {
        match File::create(config_path) {
            Ok(mut f) => f.write_all(default_config_str.as_bytes()).unwrap(),
            Err(e) => error!("{}", e),
        };

        return ModConfig::default();
    } else {
        match File::open(&config_path) {
            Ok(mut f) => {
                let mut config = String::new();
                f.read_to_string(&mut config).unwrap();

                // return loaded config
                return toml::from_str::<ModConfig>(&config).unwrap_or_else(|e| {
                    error!("error loading config: {}, writing default...", e);
                    match File::create(&config_path) {
                        Ok(mut f) => f.write_all(default_config_str.as_bytes()).unwrap(),
                        Err(e) => error!("{}", e),
                    };
                    default_config
                });
            }
            Err(e) => error!("{}", e),
        };

        return ModConfig::default();
    }
}

pub static CONFIG: GlobalMut<ModConfig> = Lazy::new(|| Mutex::new(init_config()));

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
