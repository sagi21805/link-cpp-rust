#ifndef _Rust_
#define _Rust_

#include <iostream>

typedef struct Vect_Rust Vect_Rust;

extern "C" Vect_Rust* _vect_new(float x, float y, float z);

extern "C" Vect_Rust* _vect_new_stack(float x, float y, float z);

extern "C" float _getX(Vect_Rust* vect);

extern "C" void _setX(Vect_Rust* vect, float value);

extern "C" void _vect_free(Vect_Rust* vect);

extern "C" Vect_Rust* _add(Vect_Rust* v1, Vect_Rust* v2);

extern "C" void _print(Vect_Rust* vect);

extern "C" float _dot_prod(Vect_Rust* v1, Vect_Rust* v2);

struct Vect {

    Vect_Rust* v;

    Vect(float x, float y, float z) : v(_vect_new(x, y, z)) {}

    Vect(Vect_Rust* v) : v(v) {}

    int getX() { return _getX(v); }    

    void setX(int value) { _setX(v, value); }

    Vect add(Vect vect) { return Vect(_add(v, vect.v)); }

    void free() { _vect_free(v); }

    void print() {_print(v);}

    float dot(Vect vect) { return _dot_prod(v, vect.v); }
    

};

extern "C" void print_array(const int32_t* ptr, size_t len);


#endif 