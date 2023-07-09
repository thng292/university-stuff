#include <stdio.h>

int BinarySearch(int* data, int length, int key)
{
    if (length == 0) {
        return -1;
    }
    int mid = (length / 2);
    if (data[mid] == key) {
        return mid;
    }
    if (data[mid] < key) {
        return BinarySearch(data, mid - 1, key);
    }
    return BinarySearch(data + mid + 1, mid - 1, key);
}

int main() {
    int data[] = {4, 10, 16, 24, 32, 46, 76, 112, 144, 182};
    int length = sizeof(data) / sizeof(*data);
    printf("%d\n", BinarySearch(data, length, 46));
    return 0;
}
