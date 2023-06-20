#include "Bin2Text.h"

#include <stdio.h>
#include <stdlib.h>

static const int BUFF_SIZE = 512;

void Bin2Text(const char* inFileName, const char* outFileName)
{
    FILE* in = fopen(inFileName, "rb");
    FILE* out = fopen(outFileName, "w");
    int n;
    fread(&n, sizeof(int), 1, in);
    fprintf(out, "%d\n", n);
    int* buff = malloc(BUFF_SIZE * sizeof(int));
    int buffEnd = 0;
    for (int i = 0; i < n; i++) {
        buffEnd = fread(buff, sizeof(int), BUFF_SIZE, in);
        i+=buffEnd;
        for (int j = 0; j < buffEnd; j++) {
            fprintf(out, "%d ", buff[j]);
        }
    }
    free(buff);
    fclose(in);
    fclose(out);
}