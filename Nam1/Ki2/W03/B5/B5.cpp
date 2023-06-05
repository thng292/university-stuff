#include <iostream>
#include "Median.h"

int main() {
    int a[] = { 1,2,3,4,5,6,7,8,9 };
    std::cout << Median(a, sizeof(a) / sizeof(a[0]));
}