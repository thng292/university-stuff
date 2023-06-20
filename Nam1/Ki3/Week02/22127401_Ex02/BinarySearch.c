#include "BinarySearch.h"
#include <stdio.h>

int BinarySearch(int* arr, int length, int key)
{
    int start = 0;
    int end = length - 1;
    while (start <= end) {
        int mid = (end + start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int BinarySearchFile(FILE* file, int key)
{
    fseek(file, 0, SEEK_SET);
    int length;
    fread(&length, sizeof(int), 1, file);
    int start = 0;
    int end = length - 1;
    while (start <= end) {
        int mid = (end + start) / 2;
        int arr_mid;
        fseek(file, (mid + 1) * sizeof(int), SEEK_SET);
        fread(&arr_mid, sizeof(int), 1, file);
        if (arr_mid == key) {
            return mid;
        }
        if (arr_mid > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}