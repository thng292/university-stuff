#include "Point2D.h"

struct Circle {
	Point2D Tam;
	int Radius = 0;
};

Circle ReadCircle(FILE* file);

void ReadArrCircle(FILE* file, Circle arr[], int& length);

void ReadMatrixCircle(FILE* file, Circle arr[][100], int& row, int& col);

void WriteCircle(FILE* file, Circle c);

void WriteArrCircle(FILE* file, Circle arr[], int length);

void WriteMatrixCircle(FILE* file, Circle arr[][100], int row, int col);