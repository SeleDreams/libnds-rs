
/// Background 0 Control register (main engine) [GBATEK Reference](http://problemkaputt.de/gbatek.htm#dsvideobgmodescontrol)
pub const REG_BG0CNT: *const u16 = 0x4000008 as *const u16;
/// Background 0 horizontal scroll register (main engine)
pub const REG_BG0HOFS: *const u16 = 0x4000010 as *const u16;
/// Background 0 vertical scroll register (main engine)
pub const REG_BG0VOFS: *const u16 = 0x4000012 as *const u16;
/// Background 1 Control register (main engine) [GBATEK Reference](http://problemkaputt.de/gbatek.htm#dsvideobgmodescontrol)
pub const REG_BG1CNT: *const u16 = 0x400000A as *const u16;
/// Background 1 horizontal scroll register (main engine)
pub const REG_BG1HOFS: *const u16 = 0x4000014 as *const u16;
/// Background 1 vertical scroll register (main engine)
pub const REG_BG1VOFS: *const u16 = 0x4000016 as *const u16;
/// Background 2 Control register (main engine) [GBATEK Reference](http://problemkaputt.de/gbatek.htm#dsvideobgmodescontrol)
pub const REG_BG2CNT: *const u16 = 0x400000C as *const u16;
/// Background 2 horizontal scroll register (main engine)
pub const REG_BG2HOFS: *const u16 = 0x4000018 as *const u16;
/// Background 2 Affine transform (main engine)
pub const REG_BG2PA: *const u16 = 0x4000020 as *const u16;
/// Background 2 Affine transform (main engine)
pub const REG_BG2PB: *const u16 = 0x4000022 as *const u16;
/// Background 2 Affine transform (main engine)
pub const REG_BG2PC: *const u16 = 0x4000024 as *const u16;
/// Background 2 Affine transform (main engine)
pub const REG_BG2PD: *const u16 = 0x4000026 as *const u16;
/// Background 2 vertical scroll register (main engine)
pub const REG_BG2VOFS: *const u16 = 0x400001A as *const u16;
/// Background 2 Screen Offset (main engine)
pub const REG_BG2X: *const u16 = 0x4000028 as *const u16;
/// Background 2 Screen Offset (main engine)
pub const REG_BG2Y: *const u16 = 0x400002C as *const u16;
/// Background 3 Control register (main engine) [GBATEK Reference](http://problemkaputt.de/gbatek.htm#dsvideobgmodescontrol)
pub const REG_BG3CNT: *const u16 = 0x400000E as *const u16;
/// Background 3 horizontal scroll register (main engine)
pub const REG_BG3HOFS: *const u16 = 0x400001C as *const u16;
/// Background 3 Affine transform (main engine)
pub const REG_BG3PA: *const u16 = 0x4000030 as *const u16;
/// Background 3 Affine transform (main engine)
pub const REG_BG3PB: *const u16 = 0x4000032 as *const u16;
/// Background 3 Affine transform (main engine)
pub const REG_BG3PC: *const u16 = 0x4000034 as *const u16;
/// Background 3 Affine transform (main engine)
pub const REG_BG3PD: *const u16 = 0x4000036 as *const u16;
/// Background 3 vertical scroll register (main engine)
pub const REG_BG3VOFS: *const u16 = 0x400001E as *const u16;
/// Background 3 Screen Offset (main engine)
pub const REG_BG3X: *const u16 = 0x4000038 as *const u16;
/// Background 3 Screen Offset (main engine)
pub const REG_BG3Y: *const u16 = 0x400003C as *const u16;
