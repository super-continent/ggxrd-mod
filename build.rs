fn main() {
    cxx_build::bridge("src/sdk.rs")
        .std("c++20")
        .file("src/GameDefines.cpp")
        .file("src/SDK_HEADERS/Core_classes.cpp")
        .file("src/SDK_HEADERS/Engine_classes.cpp")
        .file("src/SDK_HEADERS/GameFramework_classes.cpp")
        .file("src/SDK_HEADERS/GFxUI_classes.cpp")
        .file("src/SDK_HEADERS/IpDrv_classes.cpp")
        .file("src/SDK_HEADERS/OnlineSubsystemSteamworks_classes.cpp")
        .file("src/SDK_HEADERS/REDGame_classes.cpp")
        .file("src/SDK_HEADERS/REDGameContent_classes.cpp")
        .file("src/SDK_HEADERS/WinDrv_classes.cpp")
        .file("src/SDK_HEADERS/XAudio2_classes.cpp")
        .compile("rev2-mod");

    println!("cargo:rerun-if-changed=src/sdk.rs");
    println!("cargo:rerun-if-changed=include/Interop.hpp");
}