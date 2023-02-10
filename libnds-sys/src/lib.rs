#![no_std]
#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::all)]
extern crate alloc;
extern crate libc;
mod bindings;
pub use bindings::*;
mod atomics;
pub unsafe fn errno() -> s32 {
    (*__getreent())._errno
}
