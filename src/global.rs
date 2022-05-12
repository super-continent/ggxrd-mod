use crate::game::types::GameState;

use parking_lot::{Mutex};

use std::sync::atomic::{AtomicBool};
use std::sync::Arc;

lazy_static! {
    pub static ref MODS_ENABLED: AtomicBool = AtomicBool::new(true);
    pub static ref SAVED_GAME_STATE: Arc<Mutex<Option<GameState>>> = Arc::new(Mutex::new(None));
    //pub static ref CONFIG: Arc<RwLock<ModConfig>> = Arc::new(RwLock::new(ModConfig::default()));
}

/// The folder where all .bbscript files are held
pub const MODS_FOLDER: &str = r"..\..\Mods";
pub const CONFIG_PATH: &str = r".\rev2mod_config.toml";