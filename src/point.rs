use std::os::raw::c_int;


#[no_mangle]
pub extern "C" fn print_array(ptr: *const c_int, len: usize){
    // Safety: We assume the pointer is valid for the specified length
    let slice = unsafe {
        std::slice::from_raw_parts(ptr as *const i32, len)
    };
    let rust_vector: Vec<i32> = slice.to_vec();
    
    for item in rust_vector{
        print!("{} ", item);
    }
    println!("");
}

#[repr(C)]
pub struct Point {
    x: i32,
    y: i32
}

#[no_mangle]
pub extern "C" fn printPoints(instance: *mut Point, size: usize){
    println!("HERE");
    let slice: &mut [Point] = unsafe { std::slice::from_raw_parts_mut(instance, size) };
    // let v2: & mut S = unsafe { &*v2 };

    for p in slice {
        println!("[x: {}, y: {}]", p.x, p.y);
    }
}