#include "Helper.h"

void toBinary(int x)
{
    if (x == 0) {
        return;
    }
    toBinary(x / 2);
    printf("%d", x % 2);
}

int sumOfDigits(int x)
{
    if (x == 0) {
        return 0;
    }
    return x % 10 + sumOfDigits(x / 10);
}