#ifndef _Rust_
#define _Rust_

#include <iostream>

typedef struct Vect Vect;

extern "C" Vect* _vect_new(int x, int y, int z);

extern "C" int _getX(Vect* vect);

extern "C" void _setX(Vect* vect, int value);

extern "C" void _vectFree(Vect* vect);

extern "C" Vect* _add(Vect* v1, Vect* v2);

// struct Vect {

//     Vect* v;

//     Vect(int x, int y, int z) { v = _vect_new(x, y, z); }

//     int getX() { return _getX(v); }    

//     void setX(int value) { _setX(v, value); }

//     Vect* add(Vect vect) { return _add(v, &vect); }

//     void free() { _vectFree(v); }

    
// };



#endif 