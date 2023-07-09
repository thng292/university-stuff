#include <stdio.h>
#include <stdlib.h>
#include "Helper.h"

const char* const infile = "data_radix.txt";
const char* const outfile = "output_radix.txt";
    
int main() {
    FILE* file = fopen(infile, "r");
    long long n;
    fscanf(file, "%d", &n);
    Line* lines = malloc(n * sizeof(Line));
    for (long long i = 0; i < n; i++) {
        lines[i] = ReadLineParse(file);
        Sort(lines[i].elem, lines[i].length);
    }
    fclose(file);
    file = fopen(outfile, "w");
    WriteLines(file, lines, n);
    fclose(file);
    for (int i = 0; i < n; i++) {
        free(lines[i].elem);
    }
    free(lines);
    return 0;
}
