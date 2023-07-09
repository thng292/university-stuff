#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

int FindMax(int* data, int length) {
    int res = *data;
    while (length--) {
        if (res < *data) {
            res = *data;
        }
        data++;
    }
    return res;
}

void CountingSort(int* data, int length) {
    int max = FindMax(data, length);
    int* count = malloc((max + 1) * sizeof(int));
    memset(count, 0, max * sizeof(int));
    for (int i = 0; i < length; i++) {
        count[data[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        count[i]+= count[i- 1];
    }
    int* res = malloc(length * sizeof(int));
    for (int i = length - 1; i >= 0; i--) {
        res[--count[data[i]]] = data[i];
    }
    memcpy(data, res, length * sizeof(int));
}

int main() {
    int n;
    scanf("%d", &n);
    int* data = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", data + i);
    }
    CountingSort(data, n);
    for (int i = 0; i < n; i++) {
        printf("%d, ", data[i]);
    }
    free(data);
    return 0;
}
