#include "utils.h"

#include <stdio.h>

unsigned long long Fibbonacci(int n)
{
    if (n < 2) {
        return 1;
    }
    return Fibbonacci(n - 1) + Fibbonacci(n - 2);
}

long long X(int n)
{
    if (n == 0) {
        return 1;
    }
    return X(n - 1) + Y(n - 1);
}

long long Y(int n)
{
    if (n == 0) {
        return 0;
    }
    return 3 * X(n - 1) + 2 * Y(n - 1);
}

long long Xseries(int n)
{
    if (n == 0) {
        return 1;
    }
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += i * i * Xseries(n - i);
    }
    return res;
}

long long C(int n, int k)
{
    if (k == 0 || k == n) {
        return 1;
    }
    return C(n - 1, k) + C(n - 1, k - 1);
}

void toBinary(int x) {
    if (!x) {
        return;
    }
    toBinary(x/2);
    printf("%d", x % 2);
}

int sumOfDigits(int x) {
    if (x == 0) {
        return x;
    }
    return x % 10 + sumOfDigits(x / 10);
}