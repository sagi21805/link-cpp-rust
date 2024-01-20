#include <stdio.h>
#include "rust.hpp"

int main() {
    // Vect i = Vect(10, 2, 3);
    // Vect j = Vect(2, 3, 4);
    Vect* i = _vect_new(10, 2, 3);
    Vect* j = _vect_new(2, 3, 4);

    Vect* k = _add(i, j);
    std::cout << "X val: " << _getX(k) << "\n"; 

    return 0;
}