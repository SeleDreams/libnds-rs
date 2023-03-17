This readme should **only** be used if you plan on helping with the project. This is not currently ready for making anything substanial!

1. Get `libnds-dev` through the instructions at [https://devkitpro.org/wiki/Getting_Started](https://devkitpro.org/wiki/Getting_Started)
2. Make sure that the following are in your path:
    - `/opt/devkitpro/devkitARM/bin`
    - `/opt/devkitpro/tools/bin/`
3. Install `nds-dev`
4. Compile and install [cargo-nds](https://github.com/SeleDreams/cargo-nds); as of writing, this is currently not on crates.io and must be compiled/installed manually. If you want it to be a subcommand, you should install it to your `CARGO_ENV/bin` directory; i.e. `~/.cargo/bin` on Linux.
5. Run `cargo-nds nds build` or `cargo nds build` to build an example rom. 