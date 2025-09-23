use discord_rich_presence::{
    activity::{Activity, Assets},
    DiscordIpc, DiscordIpcClient,
};
use once_cell::sync::Lazy;
use parking_lot::Mutex;

use crate::game::Character;

static DISCORD_IPC: Lazy<Mutex<DiscordIpcClient>> =
    Lazy::new(|| Mutex::new(DiscordIpcClient::new("1416876504981307462")));

static mut CONNECTED: bool = false;

pub unsafe fn handle_discord_presence() {
    let mut ipc = DISCORD_IPC.lock();
    if !CONNECTED {
        if let Err(e) = ipc.connect() {
            log::error!("Error connecting to discord: {}", e);
        }
        CONNECTED = true;
    }

    let large_image = "rev2-main";
    let game_mode = crate::sdk::ffi::get_game_mode();

    let gamestate = *(crate::game::offset::GAMESTATE_PTR.get_address() as *mut *mut u8);

    let res = if gamestate.is_null() {
        let activity = Activity::new()
            .state(game_mode_to_string(game_mode))
            .assets(Assets::new().large_image(large_image));
        ipc.set_activity(activity)
    } else {
        let gs = crate::game::offset::GameState(gamestate);

        let character = gs.player_1().character();
        let character_2 = gs.player_2().character();
        let character = Character::from_number(character as usize);
        let character_2 = Character::from_number(character_2 as usize);
        let details = format!("{} vs {}", character.to_str(), character_2.to_str());

        let activity = Activity::new()
            .state(game_mode_to_string(game_mode))
            .details(&details)
            .assets(Assets::new().large_image(large_image));
        ipc.set_activity(activity)
    };

    if let Err(e) = res {
        log::error!("Error setting discord presence: {}", e);
        CONNECTED = false;
    }
}

fn game_mode_to_string(game_mode: i32) -> &'static str {
    match game_mode {
        5 => "Playing Locally",
        6 => "Training",
        16 => "Playing Online",
        17 => "Watching Replays",
        _ => "Some Other Mode",
    }
}
