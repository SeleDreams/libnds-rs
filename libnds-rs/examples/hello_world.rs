#![no_std]
#![no_main]
#![feature(core_intrinsics)]
use core::sync::atomic::{AtomicI32, Ordering};
use libc_alloc::LibcAlloc;
use libc_print::*;
use libnds_sys::irqSet;

#[global_allocator]
static ALLOCATOR: LibcAlloc = LibcAlloc;

#[panic_handler]
fn handle_panic(_info: &core::panic::PanicInfo) -> ! {
    loop {}
}

static mut FRAME: AtomicI32 = AtomicI32::new(0);

unsafe extern "C" fn vblank() {
    FRAME.store(FRAME.load(Ordering::Acquire) + 1, Ordering::Release);
}

#[no_mangle]
pub extern "C" fn main(_argc: isize, _argv: *const *const u8) -> isize {
    unsafe {
        FRAME.store(0, Ordering::Release);
        libc_println!("Hello world from Rust !");
        irqSet(libnds_sys::IRQ_VBLANK.try_into().unwrap(), Some(vblank));
        libnds_sys::consoleDemoInit();
        loop {
            libnds_sys::swiWaitForVBlank();
            libnds_sys::scanKeys();
            let keys = libnds_sys::keysDown();
            if (keys & libnds_sys::KEY_START) == 1 {
                break;
            }
            libc_println!("Frame : {}", FRAME.load(Ordering::Acquire));
        }
    }
    return 0;
}
