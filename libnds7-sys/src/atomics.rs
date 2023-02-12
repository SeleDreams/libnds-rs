use super::arm7_bindings::*;

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
