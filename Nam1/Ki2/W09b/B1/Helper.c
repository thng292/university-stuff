#include "Helper.h"

int Fibbonaci(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 2;
    return Fibbonaci(n - 1) + Fibbonaci(n - 2);
}

int xy(int n, bool isX)
{
    if (isX) {
        if (n == 0) return 1;
        return xy(n - 1, false) + xy(n - 1, true);
    } else {
        if (n == 0) return 0;
        return 3 * xy(n - 1, true) + 2 * xy(n - 1, false);
    }
}

int x(int n)
{
    if (n == 0) return 1;
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += (n - i) * x(i);
    }
    return res;
}

int C(int n, int k)
{
    if (k == 0 || k == n) return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}