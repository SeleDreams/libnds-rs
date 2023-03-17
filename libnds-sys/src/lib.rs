#![no_std]
#![feature(core_intrinsics)]
extern crate alloc;
extern crate libc;

#[allow(non_upper_case_globals,non_camel_case_types,non_snake_case,improper_ctypes,dead_code)]
pub mod arm7_bindings;
pub mod arm7_registers;

#[allow(non_upper_case_globals,non_camel_case_types,non_snake_case,improper_ctypes,dead_code)]
pub mod arm9_bindings;
pub mod arm9_registers;

pub mod video_registers;
pub mod background_registers;

mod atomics;
