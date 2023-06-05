#include "Diem.h"
#include <stdio.h>

Diem2D ReadDiem2D() {
    Diem2D res;
    printf("Nhap toa do x y: ");
    scanf_s("%lf %lf", &res.x, &res.y);
}

void WriteDiem2D(Diem2D diem2D) {
    printf("Toa do la: %lf, %lf\n", diem2D.x, diem2D.y);
}
