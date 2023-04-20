# libnds-rs
A rust wrapper for the libnds library present in devkitpro

This wrapper allows the generation of both arm9 and arm7 binaries to be able to use both CPUs of the nintendo ds together. The main program needs to use the arm9, the arm7 is the co-processor.

If you wish to contribute, you can learn how to get everything set up [here]("GETTING_STARTED.md"). An example ported in rust of usage of both processors together has been added.

This DS port was based on ctru-rs for the basic build scripts and project architecture https://github.com/rust3ds/ctru-rs

Thus, following the same logic. nds-sys represents the raw bindgen generated low level wrapper around the libnds api and nds-rs represents the higher level rust api.

At the moment, this project is heavily WIP and only the nds-sys crate is usable.

You will need to use cargo-nds to build nds roms out of this repository
you can find cargo-nds here : https://github.com/SeleDreams/cargo-nds
