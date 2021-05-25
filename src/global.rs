use crate::game::types::GameState;

use parking_lot::Mutex;

use std::sync::atomic::{AtomicBool, AtomicU32};
use std::sync::Arc;

lazy_static! {
    /// Base EXE eddress in memory, used for adding with function offsets
    pub static ref BASE_ADDRESS: AtomicU32 = AtomicU32::new(0);
    pub static ref MODS_ENABLED: AtomicBool = AtomicBool::new(true);
    pub static ref SAVED_GAME_STATE: Arc<Mutex<Option<GameState>>> = Arc::new(Mutex::new(None));
}

/// The folder where all .bbscript files are held
pub const MODS_FOLDER: &str = r"..\..\Mods";
