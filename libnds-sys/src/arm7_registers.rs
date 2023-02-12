/*!	\brief Key input register.
    On the ARM9, the hinge "button", the touch status, and the
    X and Y buttons cannot be accessed directly.
*/
pub const REG_KEYINPUT: *const u16 = 0x04000130 as *const u16;
