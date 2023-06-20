#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../heap.h"

const char* filename = "data_heap_arr.bin";
const char* outname = "output_heap_arr.txt";

int main(void) {
    int length;
    int buff;
    Heap* heap = Heap_Init();
    FILE* infile = fopen(filename, "rb");
    fread(&length, sizeof(length), 1, infile);
    for (int i = 0; i < length; i++) {
        fread(&buff, sizeof(buff), 1, infile);
        Heap_Push(heap, buff);
    }
    fclose(infile);
    infile = fopen(outname, "w");
    while (!Heap_IsEmpty(heap)) {
        fprintf(infile, "%d ", Heap_Pop(heap));
    }
    fclose(infile);
    Heap_Destroy(heap);
    return 0;
}
