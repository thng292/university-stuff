#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int* data, int length, int key) {
    int start = 0;
    int end = length - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (data[mid] == key) {
            return mid;
        }
        if (data[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int data[] = {4, 10, 16, 24, 32, 46, 76, 112, 144, 182};
    int length = sizeof(data) / sizeof(*data);
    printf("%d\n", BinarySearch(data, length, 46));
    return 0;
}
