#include <iostream>
#include "Frac.h"

int main() {
    std::cout << "Give me some Fractions: \n";
    Frac* arr = ReadArrFrac();
    Arr1D negativeArr = FindAllNegative(arr);
    size_t n = sizeArr(negativeArr);
    if (n) {
        std::cout << "\nNegative Fractions:\n";
        WriteArrFrac(FindAllNegative(arr));
    } else {
        std::cout << "\nThe array are all positive\n";
    };
    std::cout << '\n';
    std::cout << "Sum of all positive fraction: " << SumAllPositive(arr) << '\n';
    freeArr(arr);
    freeArr(negativeArr);
}