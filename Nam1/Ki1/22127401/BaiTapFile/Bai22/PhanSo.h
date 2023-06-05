#include <cstdio>
struct PhanSo {
	int tu = 0;
	int mau = 1;
};

PhanSo ReadPhanSo(FILE* file);

void ReadArrPhanSo(FILE* file, PhanSo arr[], int &size);

void ReadMatrixPhanSo(FILE* file, PhanSo arr[][100], int& row, int& col);

void WritePhanSo(FILE* file, PhanSo a);

void WriteArrPhanSo(FILE* file, PhanSo arr[], int size);

void WriteMatrixPhanSo(FILE* file, PhanSo arr[][100], int row, int col);