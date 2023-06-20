#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "BinarySearch.h"

int main()
{
    FILE* in = fopen("100000nSorted.bin", "rb");
    FILE* out = fopen("ResultsBS.txt", "w");
    int n;
    int vals[] = {1511, 4979495, 9999843, 5503353};
    int length = sizeof(vals) / sizeof(*vals);

    for (int i = 0; i < length; i++) {
        clock_t begin = clock();
        int tmp = BinarySearchFile(in, vals[i]);
        clock_t end = clock();
        fprintf(out, "%d %lf\n", tmp, (double)(end - begin));
    }

    fclose(in);
    fclose(out);
}
