# Guilty Gear Rev2 Hook
This project can be compiled into a dinput8.dll that goes next to `GuiltyGearXrd.exe`, it will now load an ImGui window and allow the user to enable/disable mods, and hide/show the UI with F1!

# Installing
Put the `dinput8.dll` inside your `<Steam Install Path>/Guilty Gear Xrd -REVELATOR-/Binaries/Win32/` folder and run the game. It should display windows overlaying the game.

# SAMMI Integration
This mod has experimental support for integration with [SAMMI](https://sammi.solutions/), a streaming assistant that allows you to modify things like OBS layouts dynamically based on custom logic.

The way it works is that when this mod is compiled with the `sammi` feature enabled (as it should be in the releases), the mod will send webhook triggers to the webhook URL specified in the `rev2mod_config.ini` inside your Xrd installation folder.

Webhook triggers that are currently sent are listed here, to examine the data sent with each trigger, use the variable viewer in SAMMI:
- `ggxrd_stateUpdate`: Triggered every other frame at 30fps, you can change the update rate in the config, `0` or `1` will send updates every frame, and any other value will send an update every `n` frames.
- `ggxrd_hitEvent`: Triggered when a player is hit, the data will contain info about which player was hit, if that player was hit by the opponent or a projectile, and the current state of the opponent or projectile .

# Building
Clone the project with git or download a ZIP archive of the source, [install Rust](https://rustup.rs/), make sure you have the `i686-pc-windows-msvc` target by running `rustup target add i686-pc-windows-msvc` in your command line, and then run `cargo build` for a debug (unoptimized) version or `cargo build --release` for a release build, in the `target` folder you will find the built DLL, you can rename it to `dinput8.dll` and follow the instructions in the [Installing](#installing) section above
