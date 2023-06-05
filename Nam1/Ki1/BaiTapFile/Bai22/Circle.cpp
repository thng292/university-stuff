#include "Circle.h"
#include "Point2D.h"

Circle ReadCircle(FILE* file) {
    Circle res;
    res.Tam = ReadPoint2D(file);
    char tmp;
    fscanf_s(file, "%c%d", &tmp, 1, &res.Radius);
    return res;
}

void ReadArrCircle(FILE* file, Circle arr[], int& length) {
    fscanf_s(file, "%d", &length);
    for (int i = 0; i < length; i++)
    {
        arr[i] = ReadCircle(file);
    }
}

void ReadMatrixCircle(FILE* file, Circle arr[][100], int& row, int& col) {
    fscanf_s(file, "%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = ReadCircle(file);
        }
    }
}

void WriteCircle(FILE* file, Circle c) {
    fprintf_s(file, "C((%d, %d), %d) ", c.Tam.x, c.Tam.y, c.Radius);
}

void WriteArrCircle(FILE* file, Circle arr[], int length) {
    for (int i = 0; i < length; i++)
    {
        WriteCircle(file, arr[i]);
    }
}

void WriteMatrixCircle(FILE* file, Circle arr[][100], int row, int col) {
    for (int i = 0; i < row; i++)
    {
        WriteArrCircle(file, arr[i], col);
        fprintf(file, "\n");
    }
}


