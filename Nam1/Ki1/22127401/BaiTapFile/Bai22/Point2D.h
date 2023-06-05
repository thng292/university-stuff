#include <cstdio>
#pragma once

struct Point2D {
	int x = 0;
	int y = 0;
};

Point2D ReadPoint2D(FILE* file);

void ReadArrPoint2D(FILE* file, Point2D arr[], int& length);

void ReadMatrixPoint2D(FILE* file, Point2D arr[][100], int& row, int& col);

void WritePoint2D(FILE* file, Point2D p);

void WriteArrPoint2D(FILE* file, Point2D arr[], int length);

void WriteMatrixPoint2D(FILE* file, Point2D arr[][100], int row, int col);