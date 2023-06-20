#include <stdio.h>
#include <time.h>

#include "helper.h"

const char* filename = "100000nSorted.bin";
const char* outfile = "ResultIS.txt";

int main(void)
{
    FILE* file = fopen(filename, "rb");
    FILE* out = fopen(outfile, "w");
    int vals[] = {1511, 4979495, 9999843, 5503353};
    int length = sizeof(vals) / sizeof(*vals);
    for (int i = 0; i < length; i++) {
        clock_t begin = clock();
        int tmp = interpolationSearch(file, vals[i]);
        clock_t end = clock();
        fprintf(
            out, "%d %lf\n", tmp, (double)(end - begin) / CLOCKS_PER_SEC * 1000
        );
    }
    fclose(file);
    fclose(out);
    return 0;
}
