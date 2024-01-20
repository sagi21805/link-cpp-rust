#include <stdio.h>
#include "rust.hpp"

int main() {
    Vect i = Vect(10, 2, 3);
    Vect j = Vect(2, 4, 4);
    
    Vect k = i.add(j);

    k.print();

    printf("dot: %f", k.dot(k));

    return 0;
}