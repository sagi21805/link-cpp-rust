#include <stdio.h>
#include "rust.hpp"

int main() {
    Vect i = Vect(10, 2, 3);
    Vect j = Vect(2, 4, 4);
    
    Vect k = i.add(j);

    k.print();

    printf("dot: %f", k.dot(k));

    int size = 5;

    int32_t p[size] = {1, 3, 4, 54, 5};

    print_array(p, size);
    
    i.free();
    k.free();
    j.free();
    return 0;
}