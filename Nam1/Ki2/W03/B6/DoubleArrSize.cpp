#include "DoubleArrSize.h"



int* DoubleArrSize(int* arr, int n) {
    int* tmp = new int[n * 2];
    memcpy(tmp, arr, n * sizeof(int));
    memset(tmp + n, 0, n * sizeof(int));
    return tmp;
}