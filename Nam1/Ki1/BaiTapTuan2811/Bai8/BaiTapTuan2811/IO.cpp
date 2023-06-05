#include "IO.h"
#include <stdio.h>

int* ReadInts(const int& len)
{
	printf("Nhap mang gom %d phan tu.\n", len);
    int* result = new int[len];
	for (int i = 0; i < len; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf_s("%d", &result[i]);
	}
    return result;
}

double* ReadDoubles(const int& len)
{
	printf("Nhap mang gom %d phan tu.\n", len);
	double* result = new double[len];
	for (int i = 0; i < len; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf_s("%lf", &result[i]);
	}
	return result;
}

char* ReadChars(const int& len)
{
	printf("Nhap chuoi gom %d phan tu.\n", len);
	char* result = new char[len+1];
	scanf_s("%s", result, len+1);
	return result;
}

void WriteInts(int* arr, const int& len)
{
	printf("Mang gom co %d phan tu.\n", len);
	for (int i = 0; i < len; i++)
	{
		printf("Phan tu thu %d: %d.\n", i, arr[i]);
	}
}

void WriteDoubles(double* arr, const int& len)
{
	printf("Mang gom co %d phan tu.\n", len);
	for (int i = 0; i < len; i++)
	{
		printf("Phan tu thu %d: %lf.\n", i, arr[i]);
	}
}

void WriteString(char* arr, const int& len)
{
	printf("Chuoi gom co %d phan tu.\n", len);
	printf("%s.\n", arr);
}
