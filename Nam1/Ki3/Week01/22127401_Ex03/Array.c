#include "Array.h"

#include <stdio.h>

static void Output_(ArrayInt* arr, int index)
{
    if (index >= arr->size) {
        return;
    }
    printf("%d ", arr->data[index]);
    return Output_(arr, index + 1);
}

void Output(ArrayInt* arr) { Output_(arr, 0); }

static void OutputR_(ArrayInt* arr, int index)
{
    if (index >= arr->size) {
        return;
    }
    OutputR_(arr, index + 1);
    printf("%d ", arr->data[index]);
}

void OutputReverse(ArrayInt* arr) { OutputR_(arr, 0); }

static int SumAllPositive_(ArrayInt* arr, int index)
{
    if (arr->size <= index) {
        return 0;
    }
    if (arr->data[index] > 0) {
        return arr->data[index] + SumAllPositive_(arr, index + 1);
    }
    return SumAllPositive_(arr, index + 1);
}

int SumAllPositive(ArrayInt* arr) { return SumAllPositive_(arr, 0); }

static int Find(ArrayInt* arr, int item, int limit)
{
    int* iter = arr->data;
    for (int i = 0; i < limit; i++) {
        if (*iter == item) {
            return 1;
        }
        iter++;
    }
    return 0;
}

static int CountDistincValue_(ArrayInt* arr, int index)
{
    if (index >= arr->size) {
        return 0;
    }
    return 1 - Find(arr, arr->data[index], index) + CountDistincValue_(arr, index + 1);
}

int CountDistincValue(ArrayInt* arr) { return CountDistincValue_(arr, arr->size); }

static bool CheckAllOddNum_(ArrayInt* arr, int index)
{
    if (arr->size <= index) {
        return true;
    }
    return (arr->data[index] % 2) && CheckAllOddNum_(arr, index + 1);
}

bool CheckAllOddNum(ArrayInt* arr) { return CheckAllOddNum_(arr, 0); }

static int FindMax_(ArrayInt* arr, int index)
{
    if (index >= arr->size - 1) {
        return arr->data[arr->size - 1];
    }
    int tmp = FindMax_(arr, index + 1);
    return tmp > arr->data[index] ? tmp : arr->data[index];
}

int FindMax(ArrayInt* arr) { return FindMax_(arr, 0); }