#![no_std]
#![feature(start)]

extern crate libc;
extern crate libnds_sys;
extern crate libc_print;

#[cfg(target_os = "nintendo_ds_arm7")]
mod arm7;

#[cfg(target_os = "nintendo_ds_arm9")]
mod arm9;

#[global_allocator]
static ALLOCATOR: libc_alloc::LibcAlloc = libc_alloc::LibcAlloc;

#[panic_handler]
fn panic(_info: &core::panic::PanicInfo) -> ! {
    loop {
    }
}
