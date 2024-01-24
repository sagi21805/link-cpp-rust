#ifndef _HEAD_
#define _HEAD_

#include <stdio.h>

typedef struct S S;

struct S {
    int x; 
    int y;
};

extern void printS(S* instance);


#endif