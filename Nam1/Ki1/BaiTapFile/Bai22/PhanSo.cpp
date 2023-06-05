#include "PhanSo.h"

PhanSo ReadPhanSo(FILE* file) {
    PhanSo res;
    char tmp;
    fscanf_s(file, "%d%c%d", &res.tu, &tmp, 1, &res.mau);
    return res;
}

void ReadArrPhanSo(FILE* file, PhanSo arr[], int& size) {
    fscanf_s(file, "%d", &size);
    for (int i = 0; i < size; i++)
    {
        arr[i] = ReadPhanSo(file);
    }
}

void ReadMatrixPhanSo(FILE* file, PhanSo arr[][100], int& row, int& col) {
    fscanf_s(file, "%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = ReadPhanSo(file);
        }
    }
}

void WritePhanSo(FILE* file, PhanSo a) {
    fprintf_s(file, "%d/%d ", a.tu, a.mau);
}

void WriteArrPhanSo(FILE* file, PhanSo arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        WritePhanSo(file, arr[i]);
    }
}

void WriteMatrixPhanSo(FILE* file, PhanSo arr[][100], int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            WritePhanSo(file, arr[i][j]);
        }
        fprintf_s(file, "\n");
    }
}
