#include <stdio.h>
#include <stdlib.h>

#include "../heap.h"

const char* filename = "data_heap_ll.bin";
const char* outname = "output_heap_ll.txt";

int main(void)
{
    FILE* file = fopen(filename, "rb");
    int buff;
    unsigned long out = 1;
    Heap* heap = Heap_Init();
    while (!feof(file)) {
        out = fread(&buff, sizeof(buff), 1, file);
        if (out) {
            Heap_Push(heap, buff);
        } else {
            break;
        }
    }
    fclose(file);
    int n = Heap_Size(heap);
    int m = n;
    int* tmpArr = malloc(sizeof(int) * n);
    while (n--) {
        tmpArr[n] = Heap_Pop(heap);
    }
    file = fopen(outname, "w");
    for (int i = 0; i < m; i++) {
        fprintf(file, "%d ", tmpArr[i]);
    }
    fclose(file);
    Heap_Destroy(heap);
    return 0;
}
