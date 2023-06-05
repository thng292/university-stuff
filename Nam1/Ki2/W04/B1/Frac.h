#include <iostream>
#include "../DynamicArr.h"

struct Frac {
    int tu = 0;
    int mau = 1;
    inline bool isNegative() { return mau * tu < 0; };
};

std::istream& operator>>(std::istream& is, Frac& frac);

std::ostream& operator<<(std::ostream& os, const Frac& frac);

Frac operator+(const Frac& lhs, const Frac& rhs);

void WriteArrFrac(Frac* arr);

Frac* ReadArrFrac();

Frac* FindAllNegative(Frac* arr);

Frac SumAllPositive(Frac* arr);