#include "Frac.h"

std::istream& operator>>(std::istream& is, Frac& frac) {
    is >> frac.tu >> frac.mau;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Frac& frac) {
    os << frac.tu << '/' << frac.mau;
    return os;
}

Frac operator+(const Frac& lhs, const Frac& rhs) {
    Frac tmp = { 0, lhs.mau * rhs.mau };
    tmp.tu = lhs.tu * rhs.mau + lhs.mau * rhs.tu;
    return tmp;
}

void WriteArrFrac(Frac* arr) {
    size_t n = sizeArr(arr);
    for (size_t i = 0; i < n; i++) {
        std::cout << arr[i] << '\n';
    }
}

Frac* ReadArrFrac() {
    Arr1D arr = initArr(sizeof(Frac));
    Frac tmp;
    while (std::cin >> tmp) {
        pushArr(&arr, &tmp);
    }
    return (Frac*)arr;
}

Frac* FindAllNegative(Frac* arr) {
    size_t n = sizeArr(arr);
    Arr1D negativeArr = initArr(sizeof(Frac));
    for (size_t i = 0; i < n; i++) {
        if (arr[i].isNegative()) {
            pushArr(&negativeArr, ((Frac*)arr + i));
        }
    }
    return (Frac*)negativeArr;
}

Frac SumAllPositive(Frac* arr) {
    Frac tmp = { 0,1 };
    size_t n = sizeArr(arr);
    for (size_t i = 0; i < n; i++) {
        if (!arr[i].isNegative()) {
            tmp = tmp + *((Frac*)arr + i);
        }
    }
    return tmp;
}
