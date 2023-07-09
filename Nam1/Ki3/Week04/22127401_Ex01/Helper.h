#include <stdio.h>

typedef struct {
    long long length;
    char* elem;
} Str;

typedef struct {
    long long length;
    long long base;
    long long* elem; 
} Line;

Line ReadLineParse(FILE* infile);

void WriteLines(FILE* outfile, Line* lines, long long noLine);

void Sort(long long* arr, long long length);
