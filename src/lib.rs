#[repr(C)]
pub struct Vect {
    x: i32,
    y: i32, 
    z: i32
}

#[no_mangle]
pub extern "C" fn _vect_new(x: i32, y: i32, z: i32) -> *mut Vect {
    Box::into_raw(Box::new(Vect { x: x, y: y, z:z}))
}

#[no_mangle]
pub extern "C" fn _getX(instance: *const Vect) -> i32 {
    let vect_ref: &Vect = unsafe { &*instance };
    return vect_ref.x;
}

#[no_mangle]
pub extern "C" fn _setX(instance: *mut Vect, value: i32) {
    let vect = unsafe { &mut *instance };
    vect.x = value;
}

#[no_mangle]
pub extern "C" fn _vect_free(instance: *mut Vect) {
    unsafe { let _ = Box::from_raw(instance); }
}

#[no_mangle]
pub extern "C" fn _add(v1: *const Vect, v2: *const Vect) -> *mut Vect{
    let v1: &Vect = unsafe { &*v1 };
    let v2: &Vect = unsafe { &*v2 };
    return Box::into_raw(Box::new(Vect { x: v1.x + v2.x, y: v1.y + v2.y, z: v1.z + v2.z }));
}