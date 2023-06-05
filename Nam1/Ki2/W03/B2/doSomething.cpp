#include "doSomething.h"



int doSomething(int* x, int* y) {
    int tmp = *x;
    *x = *y * 10;
    *y = tmp * 10;
    return *x + *y;
}