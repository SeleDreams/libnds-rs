#![no_std]
#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::all)]
extern crate alloc;
extern crate libc;
#[cfg(feature = "arm7")]
mod arm7_bindings;
#[cfg(feature = "arm7")]
pub use arm7_bindings::*;
#[cfg(feature = "arm9")]
mod arm9_bindings;
#[cfg(feature = "arm9")]
pub use arm9_bindings::*;

mod atomics;
pub unsafe fn errno() -> s32 {
    (*__getreent())._errno
}
