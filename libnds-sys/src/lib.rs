#![no_std]
#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::all)]
#![feature(core_intrinsics)]
extern crate alloc;
extern crate libc;

#[allow(dead_code)]
#[allow(non_snake_case)]
#[cfg(feature = "arm7")]
pub mod arm7_bindings;
#[cfg(feature = "arm7")]
pub mod arm7_registers;

#[cfg(feature = "arm9")]
pub mod arm9_bindings;
#[cfg(feature = "arm9")]
pub mod arm9_registers;

mod atomics;
