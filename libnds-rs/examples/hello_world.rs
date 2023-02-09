#![no_std]
#![no_main]
#![feature(lang_items)]
use core::format_args;
use core::ptr::null_mut;
use libc_print::*;
extern crate alloc;
extern crate libc;
use libc_alloc::LibcAlloc;

#[global_allocator]
static ALLOCATOR: LibcAlloc = LibcAlloc;

#[panic_handler]
fn handle_panic(info: &core::panic::PanicInfo) -> ! {
    loop {}
}

#[no_mangle]
pub extern "C" fn main(_argc: isize, _argv: *const *const u8) -> isize {
    let touch_xy: *mut libnds_sys::touchPosition = null_mut();
    let mut touch_xy_safe: libnds_sys::touchPosition;
    unsafe {
        libnds_sys::consoleDemoInit();
        libc_println!("Hello world from Rust !");
        loop {
            libnds_sys::swiWaitForVBlank();
            libnds_sys::scanKeys();
            let keys = libnds_sys::keysDown();
            if keys & libnds_sys::KEY_START == 1 {
                break;
            }
            libnds_sys::touchRead(touch_xy);
            touch_xy_safe = *touch_xy;
            //libc_println!("Touch at : X={} Y={}", touch_xy_safe.px, touch_xy_safe.py);
        }
    }
    return 0;
}
