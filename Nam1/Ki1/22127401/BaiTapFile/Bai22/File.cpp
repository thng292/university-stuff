#include "File.h"

void WriteArr(FILE* file, int arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
		fprintf_s(file, "%d ", arr[i]);
	}
}

void ReadMatrix(FILE* file, int arr[][100], int &row, int &col) {
	fscanf_s(file, "%d %d", &row, &col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fscanf_s(file, "%d", &arr[i][j]);
		}
	}
}

void WriteMatrix(FILE* file, int arr[][100], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fprintf_s(file, "%d ", arr[i][j]);
		}
		fprintf_s(file, "\n");
	}
}
