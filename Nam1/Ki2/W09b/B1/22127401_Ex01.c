#include <stdio.h>

#include "Helper.h"

int main()
{
    int n = 10, k = 5;
    printf("Fibbonaci(%d) = %d\n", n, Fibbonaci(n));
    printf("x(%d) = %d\n", n, xy(n, true));
    printf("x(%d) = %d\n", n, x(n));
    printf("C(%d, %d) = %d\n", n, k, C(n, k));
}