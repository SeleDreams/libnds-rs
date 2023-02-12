// use core::ptr::write_volatile;
// use core::ptr::read_volatile;


// const REG_DISPSTAT : *mut u64 = 0x04000004 as *mut u64;


// #[doc = "\\brief sets the Y trigger(?)\n\n\\param Yvalue the value for the Y trigger."]
// static  unsafe fn SetYtrigger(Yvalue: u64) {
//    write_volatile(REG_DISPSTAT, (read_volatile(REG_DISPSTAT) & 0x007f) | (Yvalue << 8) | ((Yvalue & 0x100) >> 1));
// }