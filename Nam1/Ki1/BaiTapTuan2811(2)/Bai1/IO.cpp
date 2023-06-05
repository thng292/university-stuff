#include "IO.h"
#include <iostream>

void ReadRowCol(int& Row, int& Col)
{
	do {
		printf("Nhap so hang: ");
		scanf_s("%d", &Row);
	} while (Row <= 0);
	do {
		printf("Nhap so cot: ");
		scanf_s("%d", &Col);
	} while (Col <= 0);
}

int** InitMatrix(int Row, int Col)
{
    int** res = new int* [Row];
	for (int i = 0; i < Row; i++)
	{
		res[i] = new int[Col];
	}
    return res;
}

int** ReadMatrix(int Row, int Col)
{
	int** res = InitMatrix(Row, Col);
	printf("Nhap ma tran gom %d hang, %d cot.\n", Row, Col);
	for (int i = 0; i < Row; i++)
	{
		printf("Nhap hang thu %d: ", i);
		for (int j = 0; j < Col; j++)
		{
			scanf_s("%d", &res[i][j]);
		}
	}
	return res;
}

void WriteMatrix(int** arr, int Row, int Col)
{
	printf("Ma tran gom %d hang, %d cot.\n", Row, Col);
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void WriteArray(int* arr, int size) {
	printf("Mang gom %d phan tu.\n", size);
	for (int i = 0; i < size; i++)
	{
		printf("Phan tu thu %d: %d.\n", i+1, arr[i]);
	}
}
