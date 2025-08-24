fn log_debug(s: String) {
    log::debug!("cxx log: {}", s);
}

#[cxx::bridge]
pub mod ffi {
    extern "Rust" {
        fn log_debug(str: String);
    }

    unsafe extern "C++" {
        include!("rev2-mod/include/Interop.hpp");

        type TArray;
        type FString;

        // library functions
        fn find_globals() -> bool;
        fn to_string(string: &String) -> &FString;
        fn from_string(string: &FString) -> String;

        // mod functions
        fn enter_replay() -> i32;
        fn enter_menu() -> i32;
        fn toggle_debug_menu() -> i32;
        fn change_scene(scene_id: i32) -> i32;
        fn get_game_mode() -> i32;
        fn get_scene_id() -> i32;
        fn select_replay(idx: i32) -> i32;
        fn replay_list_length() -> i32;
        fn start_replay();
        fn inc_replay_offset() -> i32;
        fn set_selected_stage(stage: i32) -> i32;
        fn toggle_debug_camera(bDrawDebugText: bool) -> i32;
    }
}