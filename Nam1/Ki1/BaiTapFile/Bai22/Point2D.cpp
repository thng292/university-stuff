#include "Point2D.h"

Point2D ReadPoint2D(FILE* file) {
	Point2D res;
	char tmp;
	fscanf_s(file, "%d%c%d", &res.x, &tmp, 1, &res.y);
	return res;
}

void ReadArrPoint2D(FILE* file, Point2D arr[], int& length) {
	fscanf_s(file, "%d", &length);
	for (int i = 0; i < length; i++)
	{
		arr[i] = ReadPoint2D(file);
	}
}

void ReadMatrixPoint2D(FILE* file, Point2D arr[][100], int& row, int& col) {
	fscanf_s(file, "%d %d", &row, &col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ReadPoint2D(file);
		}
	}
}

void WritePoint2D(FILE* file, Point2D p) {
	fprintf_s(file, "(%d, %d) ", p.x, p.y);
}

void WriteArrPoint2D(FILE* file, Point2D arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		WritePoint2D(file, arr[i]);
	}
}

void WriteMatrixPoint2D(FILE* file, Point2D arr[][100], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		WriteArrPoint2D(file, arr[i], col);
		fprintf_s(file, "\n");
	}
}
