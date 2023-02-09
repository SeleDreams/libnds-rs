# libnds-rs
A rust wrapper for the libnds library present in devkitpro

This DS port was based on ctru-rs for the basic build scripts and project architecture https://github.com/rust3ds/ctru-rs

Thus, following the same logic. nds-sys represents the raw bindgen generated low level wrapper around the libnds api and nds-rs represents the higher level rust api.

At the moment, this project is heavily WIP and only the nds-sys crate is usable.

You will need to use cargo-nds to build nds roms out of this repository
you can find cargo-nds here : https://github.com/SeleDreams/cargo-nds
