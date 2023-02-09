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
    let touch_xy: *mut nds_sys::touchPosition = null_mut();
    let mut touch_xy_safe: nds_sys::touchPosition;
    unsafe {
        nds_sys::consoleDemoInit();
        libc_println!("Hello world!");
        loop {
            nds_sys::swiWaitForVBlank();
            nds_sys::scanKeys();
            let keys = nds_sys::keysDown();
            if keys & nds_sys::KEY_START == 1 {
                break;
            }
            nds_sys::touchRead(touch_xy);
            touch_xy_safe = *touch_xy;
            //libc_println!("Touch at : X={} Y={}", touch_xy_safe.px, touch_xy_safe.py);
        }
    }
    return 0;
}
