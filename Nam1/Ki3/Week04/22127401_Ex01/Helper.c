#include "Helper.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 256

Line ReadLineParse(FILE* infile) {
    Line res;
    fscanf(infile, "%d", &res.length);
    fscanf(infile, "%d", &res.base);
    res.elem = malloc(sizeof(long long) * res.length);
    char buff[BUFFSIZE];
    char* pEnd;
    for (long long i = 0; i < res.length; i++) {
        fscanf(infile, "%s", buff);
        res.elem[i] = strtol(buff, &pEnd, res.base);
    }
    return res;
}

void ToBase(char* buff, long long data, long long base) {
    long long tail = 0;
    while (data) {
        long long tmp = data % base;
        data = data / base;
        if (tmp < 10) {
            buff[tail] = tmp + '0';
        } else {
            buff[tail] = tmp - 10 + 'A';
        }
        tail++;
    }
    buff[tail--] = 0;
    long long head = 0;
    while (head < tail) {
        long long tmp = buff[head];
        buff[head] = buff[tail];
        buff[tail] = tmp;
        head++;
        tail--;
    }
}

void WriteLines(FILE* outfile, Line* lines, long long noLine) {
    char buff[BUFFSIZE];
    for (long long i = 0; i < noLine; i++) {
        for (long long j = 0; j < lines[i].length; j++) {
            ToBase(buff, lines[i].elem[j], lines[i].base);
            fprintf(outfile, "%s ", buff);
        }
        fscanf(outfile, "\n");
    }
}

long long ArrayMax(long long* arr, long long length)
{
    long long max = *arr;
    for (long long i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void Sort(long long* arr, long long length) {
    long long base = 10;
    long long** bucket = malloc(base * sizeof(long long*));
    for (long long i = 0; i < base; i++) {
        bucket[i] = malloc(length * sizeof(long long));
    }

    long long max = ArrayMax(arr, length);
    // prlong longf("max: %d\n", max);
    long long modd = 1;
    while (max) {
        max /= base;
        modd *= base;
        for (long long i = 0; i < base; i++) {
            bucket[i][0] = 1;
        }
        for (long long i = 0; i < length; i++) {
            long long tmp = arr[i] % modd;
            tmp /= (modd / base);
            // prlong longf("tmp: %d\n", tmp);
            bucket[tmp][bucket[tmp][0]++] = arr[i];
        }
    }

    long long tail = 0;
    for (long long i = 0; i < base; i++) {
        for (long long j = 1; j < bucket[i][0]; j++) {
            arr[tail++] = bucket[i][j];
        }
    }

    for (long long i = 0; i < base; i++) {
        free(bucket[i]);
    }
    free(bucket);
}
