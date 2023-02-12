#[cfg(feature = "arm7")]
use super::arm7_bindings::*;
#[cfg(feature = "arm9")]
use super::arm9_bindings::*;

use libc::c_int;
use libc::c_void;

const IRQ_CASTED_ALL: u32 = IRQ_ALL as u32;

#[no_mangle]
pub unsafe extern "C" fn __atomic_store(ptr: *mut c_void, val: *mut c_void, __memorder: c_int) {
    irqDisable(IRQ_CASTED_ALL);
    core::ptr::write(ptr, core::ptr::read(val));
    irqEnable(IRQ_CASTED_ALL);
}

#[no_mangle]
pub unsafe extern "C" fn __atomic_load_1(ptr: *mut i8, _memorder: c_int) -> i8 {
    irqDisable(IRQ_CASTED_ALL);
    let ret = *ptr;
    irqEnable(IRQ_CASTED_ALL);
    return ret;
}

#[no_mangle]
pub unsafe extern "C" fn __atomic_load_2(ptr: *mut i16, _memorder: c_int) -> i16 {
    irqDisable(IRQ_CASTED_ALL);
    let ret = *ptr;
    irqEnable(IRQ_CASTED_ALL);
    return ret;
}

#[no_mangle]
pub unsafe extern "C" fn __sync_val_compare_and_swap_1(ptr: *mut i8, oldval: i8, newval: i8) -> i8 {
    irqDisable(IRQ_CASTED_ALL);
    let currentval = core::ptr::read(ptr);
    if currentval == oldval {
        core::ptr::write(ptr, newval);
    }
    irqEnable(IRQ_CASTED_ALL);
    return oldval;
}

#[no_mangle]
pub unsafe extern "C" fn __sync_val_compare_and_swap_2(
    ptr: *mut i16,
    oldval: i16,
    newval: i16,
) -> i16 {
    irqDisable(IRQ_CASTED_ALL);
    let currentval = core::ptr::read(ptr);
    if currentval == oldval {
        core::ptr::write(ptr, newval);
    }
    irqEnable(IRQ_CASTED_ALL);
    return oldval;
}

#[no_mangle]
pub unsafe extern "C" fn __sync_val_compare_and_swap_4(
    ptr: *mut i32,
    oldval: i32,
    newval: i32,
) -> i32 {
    irqDisable(IRQ_CASTED_ALL);
    let currentval = core::ptr::read(ptr);
    if currentval == oldval {
        core::ptr::write(ptr, newval);
    }
    irqEnable(IRQ_CASTED_ALL);
    return oldval;
}

#[no_mangle]
pub unsafe extern "C" fn __atomic_load_4(ptr: *mut i32, _memorder: c_int) -> i32 {
    irqDisable(IRQ_CASTED_ALL);
    let ret = *ptr;
    irqEnable(IRQ_CASTED_ALL);
    return ret;
}

#[no_mangle]
pub unsafe extern "C" fn __atomic_store_1(ptr: *mut i8, val: i8, _memorder: c_int) {
    irqDisable(IRQ_CASTED_ALL);
    core::ptr::write(ptr, val);
    irqEnable(IRQ_CASTED_ALL);
}

#[no_mangle]
pub unsafe extern "C" fn __atomic_store_2(ptr: *mut i16, val: i16, _memorder: c_int) {
    irqDisable(IRQ_CASTED_ALL);
    core::ptr::write(ptr, val);
    irqEnable(IRQ_CASTED_ALL);
}

#[no_mangle]
pub unsafe extern "C" fn __atomic_store_4(ptr: *mut i32, val: i32, _memorder: c_int) {
    irqDisable(IRQ_CASTED_ALL);
    core::ptr::write(ptr, val);
    irqEnable(IRQ_CASTED_ALL);
}

#[no_mangle]
pub unsafe extern "C" fn __sync_lock_test_and_set_1(ptr: *mut i8, val: i8, _memorder: c_int) -> i8 {
    irqDisable(IRQ_CASTED_ALL);
    let original_value = core::ptr::read(ptr);
    core::ptr::write(ptr, val);
    irqEnable(IRQ_CASTED_ALL);
    return original_value;
}

#[no_mangle]
pub unsafe extern "C" fn __sync_lock_test_and_set_2(
    ptr: *mut i16,
    val: i16,
    _memorder: c_int,
) -> i16 {
    irqDisable(IRQ_CASTED_ALL);
    let original_value = core::ptr::read(ptr);
    core::ptr::write(ptr, val);
    irqEnable(IRQ_CASTED_ALL);
    return original_value;
}

#[no_mangle]
pub unsafe extern "C" fn __sync_lock_test_and_set_4(
    ptr: *mut i32,
    val: i32,
    _memorder: c_int,
) -> i32 {
    irqDisable(IRQ_CASTED_ALL);
    let original_value = core::ptr::read(ptr);
    core::ptr::write(ptr, val);
    irqEnable(IRQ_CASTED_ALL);
    return original_value;
}
