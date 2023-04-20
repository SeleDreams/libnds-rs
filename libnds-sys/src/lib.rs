#![no_std]
#![feature(core_intrinsics)]
extern crate alloc;
extern crate libc;

#[allow(non_upper_case_globals,non_camel_case_types,non_snake_case,improper_ctypes,dead_code)]
#[cfg(target_os = "nintendo_ds_arm7")]
pub mod arm7_bindings;

#[cfg(target_os = "nintendo_ds_arm7")]
pub mod bios_registers;

#[allow(non_upper_case_globals,non_camel_case_types,non_snake_case,improper_ctypes,dead_code)]
#[cfg(target_os = "nintendo_ds_arm9")]
pub mod arm9_bindings;

#[cfg(target_os = "nintendo_ds_arm9")]
pub mod video_registers;
#[cfg(target_os = "nintendo_ds_arm9")]
pub mod background_registers;

#[cfg(target_os = "nintendo_ds_arm7")]
mod atomics;
#[cfg(target_os = "nintendo_ds_arm9")]
mod atomics;