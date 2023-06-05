#include "Median.h"

double Median(int* arr, int n) {
    if (n % 2) {
        return arr[n / 2];
    } else {
        return double(arr[n / 2] + arr[n / 2 - 1]) / 2;
    }
}