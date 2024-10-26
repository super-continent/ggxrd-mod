use std::ffi::{CStr, CString};

use steamworks_sys::{
    ISteamClient, SteamAPI_GetHSteamPipe, SteamAPI_GetHSteamUser,
    SteamAPI_ISteamClient_GetISteamFriends, SteamAPI_ISteamFriends_GetFriendPersonaName,
    SteamInternal_CreateInterface,
};

const STEAMCLIENT_INTERFACE_VERSION: &str = "SteamClient017";
const STEAMFRIENDS_INTERFACE_VERSION: &str = "SteamFriends015";

pub unsafe fn get_name_from_id(id: u64) -> String {
    let h_steamuser = SteamAPI_GetHSteamUser();
    let h_steampipe = SteamAPI_GetHSteamPipe();

    let interface_version = CString::new(STEAMCLIENT_INTERFACE_VERSION).unwrap();
    let client = SteamInternal_CreateInterface(interface_version.as_ptr()) as *mut ISteamClient;

    let friends_version = CString::new(STEAMFRIENDS_INTERFACE_VERSION).unwrap();
    let friends = SteamAPI_ISteamClient_GetISteamFriends(
        client,
        h_steamuser,
        h_steampipe,
        friends_version.as_ptr(),
    );

    let name = SteamAPI_ISteamFriends_GetFriendPersonaName(friends, id);

    CStr::from_ptr(name).to_string_lossy().to_string()
}
