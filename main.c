#include "head.h"

int main(void){

    S s = { 1, 2 };
    printf("CREATED\n");
    printS(&s);
    printS(&s);
    printf("C thinks: X is %i, and Y is %i", s.x, s.y);
}