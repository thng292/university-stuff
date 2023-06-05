#include <iostream>
#include "GetArrMode.h"

int main() {
    int a[] = { 1213,12,1,5,1,2,6,21,5,1,24,3,0, 0,0,0,0 };
    std::cout << GetArrMode(a, sizeof(a) / sizeof(a[0])) << '\n';
}