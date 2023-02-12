#![no_std]
#![feature(core_intrinsics, start)]
extern crate libc;
extern crate libnds_sys;

#[cfg(feature = "arm7")]
mod arm7;

#[cfg(feature = "arm9")]
mod arm9;

#[global_allocator]
static ALLOCATOR: libc_alloc::LibcAlloc = libc_alloc::LibcAlloc;

#[panic_handler]
fn handle_panic(_info: &core::panic::PanicInfo) -> ! {
    loop {}
}
