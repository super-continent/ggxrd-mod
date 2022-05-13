# Guilty Gear Rev2 Hook
This new project can be compiled into a dinput8.dll that goes next to the GuiltyGearXrd.exe file, it will now load an ImGui window and allow the user to enable/disable mods, and hide/show the UI with F1, more features to come soon!

# Installing
Put the `dinput8.dll` inside your `<Steam Install Path>/Guilty Gear Xrd -REVELATOR-/Binaries/Win32/` folder and run the game. It should display windows overlaying the game.

# Building
Clone the project with git or download a ZIP archive of the source, [install Rust](https://rustup.rs/), make sure you have the `i686-pc-windows-msvc` target by running `rustup target add i686-pc-windows-msvc` in your command line, and then run `cargo build` for a debug (unoptimized) version or `cargo build --release` for a release build, in the `target` folder you will find the built DLL, you can rename it to `dinput8.dll` and follow the instructions in the [Installing](#installing) section above
