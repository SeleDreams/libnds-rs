use core::sync::atomic::AtomicBool;

use libnds7_sys::arm7_bindings::*;

unsafe extern "C" fn vblank_handler() {
    Wifi_Update();
}

unsafe extern "C" fn vcount_handler() {
    inputGetAndSend();
}

static EXIT_FLAG: AtomicBool = AtomicBool::new(false);

unsafe extern "C" fn power_button_cb() {
    EXIT_FLAG.store(true, core::sync::atomic::Ordering::Release);
}

#[start]
fn main(_argc: isize, _argv: *const *const u8) -> isize {
    unsafe {
        readUserSettings();
        irqInit();
        fifoInit();
        mmInstall(FIFO_MAXMOD as i32);
        initClockIRQ();
        SetYtrigger(30);
        installWifiFIFO();
        installSoundFIFO();
        installSystemFIFO();
        irqSet(IRQ_VCOUNT as u32, Some(vcount_handler));
        irqSet(IRQ_VBLANK as u32, Some(vblank_handler));
    }
    return 0;
}
