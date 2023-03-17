
use crate::arm9_bindings::{_ext_palette,_palette};

/// background graphics memory pointer
pub const BG_GFX: *const u16 = 0x6000000 as *const u16;

/// background graphics memory (sub engine)
pub const BG_GFX_SUB: *const u16 = 0x6200000 as *const u16;

/// background palette memory
pub const BG_PALETTE: *const u16 = 0x05000000 as *const u16;

/// background palette memory (sub engine)
pub const BG_PALETTE_SUB: *const u16 = 0x05000400 as *const u16;

/// pointer to Object Attribute Memory
pub const OAM: *const u16 = 0x07000000 as *const u16;

/// pointer to Object Attribute Memory (Sub engine)
pub const OAM_SUB: *const u16 = 0x07000400 as *const u16;

/// sprite graphics memory
pub const SPRITE_GFX: *const u16 = 0x6400000 as *const u16;

/// sprite graphics memory (sub engine)
pub const SPRITE_GFX_SUB: *const u16 = 0x6600000 as *const u16;

/// sprite palette memory
pub const SPRITE_PALETTE: *const u16 = 0x05000200 as *const u16;

/// sprite palette memory (sub engine)
pub const SPRITE_PALETTE_SUB: *const u16 = 0x05000600 as *const u16;

/// pointer to vram bank A mapped as LCD
pub const VRAM_A: *const u16 = 0x6800000 as *const u16;

/// pointer to vram bank B mapped as LCD
pub const VRAM_B: *const u16 = 0x6820000 as *const u16;

/// pointer to vram bank C mapped as LCD
pub const VRAM_C: *const u16 = 0x6840000 as *const u16;

/// pointer to vram bank D mapped as LCD
pub const VRAM_D: *const u16 = 0x6860000 as *const u16;

/// pointer to vram bank E mapped as LCD
pub const VRAM_E: *const u16 = 0x6880000 as *const u16;

/// Used for accessing vram E as an extended palette.
pub const VRAM_E_EXT_PALETTE: *const _ext_palette = VRAM_E as *const _ext_palette;

/// pointer to vram bank F mapped as LCD
pub const VRAM_F: *const u16 = 0x6890000 as *const u16;

/// Used for accessing vram F as an extended palette.
pub const VRAM_F_EXT_PALETTE: *const _ext_palette = VRAM_F as *const _ext_palette;

/// Used for accessing vram F as an extended sprite palette.
pub const VRAM_F_EXT_SPR_PALETTE: *const _palette = VRAM_F as *const _palette;

/// pointer to vram bank G mapped as LCD
pub const VRAM_G: *const u16 = 0x6894000 as *const u16;

/// Used for accessing vram G as an extended palette.
pub const VRAM_G_EXT_PALETTE: *const _ext_palette = VRAM_G as *const _ext_palette;

/// Used for accessing vram G as an extended sprite palette.
pub const VRAM_G_EXT_SPR_PALETTE: *const _palette = VRAM_G as *const _palette;

/// pointer to vram bank H mapped as LCD
pub const VRAM_H: *const u16 = 0x6898000 as *const u16;

/// Used for accessing vram H as an extended palette.
pub const VRAM_H_EXT_PALETTE: *const _ext_palette = VRAM_H as *const _ext_palette;

/// pointer to vram bank I mapped as LCD
pub const VRAM_I: *const u16 = 0x68A0000 as *const u16;

/// Used for accessing vram H as an extended palette.
pub const VRAM_I_EXT_PALETTE: *const _ext_palette = VRAM_I as *const _ext_palette;

#[macro_export]
macro_rules! argb16 {
    ($a:expr, $r:expr, $g:expr, $b:expr) => {
        ( (($a) << 15) | ($r)|(($g)<<5)|(($b)<<10))
    }
}

#[macro_export]
macro_rules! rgb15 {
    ($r:expr, $g:expr, $b:expr) => {
        (($r)|(($g)<<5)|(($b)<<10))
    }
}
