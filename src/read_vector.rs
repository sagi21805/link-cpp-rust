#[allow(non_snake_case)]

#[no_mangle]

pub extern "C" fn changeVectorVals(vectStart: *mut i32, size: usize){
    let slice: &mut [i32] = unsafe { std::slice::from_raw_parts_mut(vectStart, size) };

    for item in slice{
        *item += 1;
    }
}