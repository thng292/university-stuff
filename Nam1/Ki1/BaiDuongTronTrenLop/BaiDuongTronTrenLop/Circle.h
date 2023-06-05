#include "Point.h"
struct Circle {
	Point2D Tam;
	int Radius = 0;
};

Circle ReadCircle();

void WriteCircle(Circle c);

void ReadArrCircle(Circle arr[], int& length);

void WriteArrCircle(Circle arr[], int length);

double ChuVi(Circle c);

double Area(Circle c);

double TotalChuVi(Circle arr[], int length);

double TotalArea(Circle arr[], int length);