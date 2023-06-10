#include <stdio.h>

#include "utils.h"

int main()
{
    const int testNumber = 5;
    printf("Fibonacci(%d) = %llu\n", testNumber, Fibbonacci(testNumber));
    printf("X(%d) = %lld\n", testNumber, X(testNumber));
    printf("Y(%d) = %lld\n", testNumber, Y(testNumber));
    printf("X(%d) = %lld\n", testNumber, Xseries(testNumber));
    printf(
        "C(%d, %d) = %lld\n",
        testNumber,
        testNumber / 2,
        C(testNumber, testNumber / 2)
    );
    printf("toBinary(%d) = ", testNumber);
    toBinary(testNumber);
    printf("\n");
    printf("sumOfDigit(%d) = %d", testNumber, sumOfDigits(testNumber));
    return 0;
}
