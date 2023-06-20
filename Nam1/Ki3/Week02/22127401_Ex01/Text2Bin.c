#include "Text2Bin.h"

#include <stdio.h>
#include <stdlib.h>

static const int BUFF_SIZE = 512;

void Text2Bin(const char* inFileName, const char* outFileName)
{
    FILE* in = fopen(inFileName, "r");
    FILE* out = fopen(outFileName, "wb");
    int n;
    fscanf(in, "%d", &n);
    fwrite(&n, sizeof(int), 1, out);
    int* buff = malloc(BUFF_SIZE * sizeof(int));
    int buffEnd = 0;
    for (int i = 0; i < n; i++) {
        fscanf(in, "%d", &buff[buffEnd++]);
        if (buffEnd == 512) {
            fwrite(buff, sizeof(int), buffEnd, out);
            buffEnd = 0;
        }
    }
    fwrite(buff, sizeof(int), buffEnd, out);
    free(buff);
    fclose(in);
    fclose(out);
}
