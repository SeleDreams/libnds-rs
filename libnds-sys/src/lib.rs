#![no_std]
#![feature(core_intrinsics)]
extern crate alloc;
extern crate libc;

#[allow(non_upper_case_globals,non_camel_case_types,non_snake_case,improper_ctypes,dead_code)]
#[cfg(target_os = "nintendo_ds_arm7")]
pub mod arm7_bindings;
#[cfg(target_os = "nintendo_ds_arm7")]
pub mod arm7_registers;

#[allow(non_upper_case_globals,non_camel_case_types,non_snake_case,improper_ctypes,dead_code)]
#[cfg(target_os = "nintendo_ds_arm9")]
pub mod arm9_bindings;
#[cfg(target_os = "nintendo_ds_arm9")]
pub mod arm9_registers;

mod atomics;
