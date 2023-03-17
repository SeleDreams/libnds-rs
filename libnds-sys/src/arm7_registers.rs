/*! 
    Registers for things that can only be accessed with ARM7 code
    This generally includes anything related to the BIOS and key inputs.
*/

/**	\brief Key input register.
 * On the ARM9, the hinge "button", the touch status, and the X and Y buttons cannot be accessed directly.
*/
pub const REG_KEYINPUT: *const u16 = 0x04000130 as *const u16;

/// Key input control register.
pub const REG_KEYCNT: *const u16 = 0x04000132 as *const u16;

/** \brief Halt control register.
 * Writing 0x40 to HALT_CR activates GBA mode. HALT_CR can only be accessed via the BIOS.
 */
pub const HALT_CR: *const u16 = 0x04000300 as *const u16;

/// LCD status register.
pub const REG_DISPSTAT: *const u16 = 0x04000004 as *const u16;

/** \brief Power control register.
 * This register controls what hardware should be turned on or off.
*/
pub const REG_POWERCNT: *const u16 = 0x4000304 as *const u16;

/// Current display scanline.
pub const REG_VCOUNT: *const u16 = 0x4000006 as *const u16;

/// Interrupt Enable Register.
pub const REG_IE: *const u32 = 0x04000210 as *const u32;

/** \brief Interrupt Flag Register. 
 * Since there is only one hardware interrupt vector, the IF register contains flags to indicate when a particular of interrupt has occured. To acknowledge processing interrupts, set IF to the value of the interrupt handled.
*/
pub const REG_IF: *const u32 = 0x04000214 as *const u32;

/** Interrupt Master Enable Register.
 * When bit 0 is clear, all interrupts are masked. When it is 1, interrupts will occur if not masked out in REG_IE.
*/ 
pub const REG_IME: *const u32 = 0x04000208 as *const u32;

/// maximum number of interrupts.
pub const MAX_INTERRUPTS: u8 = 25 as u8;