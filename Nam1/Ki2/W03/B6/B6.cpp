#include <iostream>
#include "DoubleArrSize.h"

int main() {
    int* a = new int[6];
    for (int i = 0; i < 6; i++) {
        a[i] = 6 - i;
    }
    a = DoubleArrSize(a, 6);
    for (int i = 0; i < 12; i++) {
        std::cout << a[i] << ' ';
    }
    delete[] a;
}