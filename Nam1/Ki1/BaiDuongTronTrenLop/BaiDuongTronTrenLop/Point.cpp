#include "Point.h"
#include <stdio.h>

Point2D ReadPoint2D() {
	Point2D res;
	printf("Nhap diem (x,y): ");
	scanf_s("%d %d", &res.x, &res.y);
	return res;
}

void WritePoint2D(Point2D p) {
	printf("Diem co toa do x: %d, y: %d.\n", p.x, p.y);
}