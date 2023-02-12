use core::{ptr::read_volatile, sync::atomic::AtomicBool, sync::atomic::Ordering};

use libnds_sys::arm7_bindings::*;
use libnds_sys::arm7_registers::*;

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
        // Start the RTC tracking IRQ
        initClockIRQ();

        SetYtrigger(30);
        installWifiFIFO();
        installSoundFIFO();
        installSystemFIFO();
        irqSet(IRQ_VCOUNT as u32, Some(vcount_handler));
        irqSet(IRQ_VBLANK as u32, Some(vblank_handler));
        irqEnable((IRQ_VBLANK | IRQ_VCOUNT | IRQ_NETWORK) as u32);
        setPowerButtonCB(Some(power_button_cb));

        // Keep the ARM7 mostly idle
        while !EXIT_FLAG.load(Ordering::Acquire) {
            let keyinput = read_volatile(REG_KEYINPUT);
            if (keyinput & (KEY_SELECT | KEY_START | KEY_L | KEY_R) as u16) > 0 {
                EXIT_FLAG.store(true, Ordering::Release);
            }

            if fifoCheckValue32(FIFO_USER_01 as i32) {
                //we don't care what value got sent. all we're interested in is the signal
                fifoGetValue32(FIFO_USER_01 as i32);

                let mut t1: ::libc::c_int = 0;
                let mut t2: ::libc::c_int = 0;
                let temp = touchReadTemperature(
                    &mut t1 as *mut ::libc::c_int,
                    &mut t2 as *mut ::libc::c_int,
                );

                //these will queue up
                fifoSendValue32(FIFO_USER_01 as i32, t1 as u32);
                fifoSendValue32(FIFO_USER_01 as i32, t2 as u32);
                fifoSendValue32(FIFO_USER_01 as i32, temp);
            }
            swiIntrWait(1, (IRQ_FIFO_NOT_EMPTY | IRQ_VBLANK) as u32);
        }
        return 0;
    }
}
