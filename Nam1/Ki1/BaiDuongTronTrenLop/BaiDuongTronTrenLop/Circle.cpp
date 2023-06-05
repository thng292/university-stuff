#include "Circle.h"
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

Circle ReadCircle() {
	Circle res;
	printf("Nhap duong tron.\n");
	printf("Nhap tam.\n");
	res.Tam = ReadPoint2D();
	do {
		printf("Nhap ban kinh: ");
		scanf_s("%d", &res.Radius);
	} while (res.Radius <= 0);
	return res;
}

void WriteCircle(Circle c) {
	printf("Duong tron co tam la: \n");
	WritePoint2D(c.Tam);
	printf("Ban kinh la: %d", c.Radius);
}

void ReadArrCircle(Circle arr[], int& length) {
	length = 0;
	do {
		printf("Nhap so duong tron: ");
		scanf_s("%d", &length);
	} while (length <= 0);
	for (int i = 0; i < length; i++)
	{
		arr[i] = ReadCircle();
	}
}

void WriteArrCircle(Circle arr[], int length) {
	printf("Mang co do dai la: %d.\n", length);
	for (int i = 0; i < length; i++)
	{
		WriteCircle(arr[i]);
	}
}

double ChuVi(Circle c) {
	return 2 * c.Radius * M_PI;
}

double Area(Circle c) {
	return c.Radius * c.Radius * M_PI;
}

double TotalChuVi(Circle arr[], int length) {
	double res = 0;
	for (int i = 0; i < length; i++)
	{
		res += ChuVi(arr[i]);
	}
	return res;
}

double TotalArea(Circle arr[], int length) {
	double res = 0;
	for (int i = 0; i < length; i++)
	{
		res += Area(arr[i]);
	}
	return res;
}