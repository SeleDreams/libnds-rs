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
pub mod arm7_bindings;
pub mod arm7_impl;
mod atomics;
