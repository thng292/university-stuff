#include <stdbool.h>

typedef struct {
    int size;
    int* data;
} ArrayInt;

void Output(ArrayInt* arr);

void OutputReverse(ArrayInt* arr);

int SumAllPositive(ArrayInt* arr);

int CountDistincValue(ArrayInt* arr);

bool CheckAllOddNum(ArrayInt* arr);

int FindMax(ArrayInt* arr);