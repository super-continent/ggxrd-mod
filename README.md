# Guilty Gear Rev2 Mod
This project can be compiled into a dinput8.dll that goes next to `GuiltyGearXrd.exe`, it will now load an ImGui window and allow the user to enable/disable mods, and hide/show the UI with F1!

# Installing
Put the `dinput8.dll` inside your `<Steam Install Path>/Guilty Gear Xrd -REVELATOR-/Binaries/Win32/` folder and run the game. It should display windows overlaying the game.

# WebSockets/SAMMI Integration
This mod has support for integration with WebSockets and an extension for [SAMMI](https://sammi.solutions/), a streaming assistant that allows you to modify things like OBS layouts dynamically based on custom logic. For information on integrating your stream with Xrd, visit [the documentation](WEBSOCKETS_INFO.md), follow the linked guides, and read the information on what data is sent.

Note: can be disabled by compiling without the `websockets` feature.

# Building
Clone the project with git or download a ZIP archive of the source, [install Rust](https://rustup.rs/), make sure you have the `i686-pc-windows-msvc` target by running `rustup target add i686-pc-windows-msvc` in your command line, and then run `cargo build` for a debug (unoptimized) version or `cargo build --release` for a release build, in the `target` folder you will find the built DLL, you can rename it to `dinput8.dll` and follow the instructions in the [Installing](#installing) section above
