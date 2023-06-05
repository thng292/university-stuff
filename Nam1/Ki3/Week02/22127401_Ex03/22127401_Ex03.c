#include <stdio.h>

#include "Array.h"

int main()
{
    int testData[] = {1, -2, 4, -7, 9, 8, 5, 3, 5};
    ArrayInt arr = {sizeof(testData) / sizeof(testData[0]), testData};
    ArrayInt* parr = &arr;
    printf("Array: ");
    Output(parr);
    printf("\n");
    printf("Array reverse: ");
    OutputReverse(parr);
    printf("\n");
    printf("Sum of all positive: %d\n", SumAllPositive(parr));
    printf("Counts all distinc value: %d\n", CountDistincValue(parr));
    printf(
        "Is array contain all odd number? %s\n",
        CheckAllOddNum(parr) ? "true" : "false"
    );
    printf("Largest value in array: %d\n", FindMax(parr));
    return 0;
}