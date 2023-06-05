#include "Diem2D.h"
#include <stdio.h>
#include <math.h>

Diem2D ReadPoint() {
    Diem2D res;
    printf("Nhap diem.\n");
    printf("x: ");
    scanf_s("%lf", &res.x);
    printf("y: ");
    scanf_s("%lf", &res.y);
    return res;
}

double sqr(double a) {
    return a * a;
}

double Distance(Diem2D a, Diem2D b) {
    return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y));
}

double ChuViTamGiac(TamGiac tamgiac) {
    return Distance(tamgiac.a, tamgiac.b) + Distance(tamgiac.b, tamgiac.c) + Distance(tamgiac.a, tamgiac.c);
}

double ChuViTamGiac(Diem2D a, Diem2D b, Diem2D c) {
    return Distance(a, b) + Distance(b, c) + Distance(a, c);
}

double DienTichTamGiac(TamGiac tamgiac) {
    double tmp = ChuViTamGiac(tamgiac)/2;
    return sqrt(tmp 
        * (tmp-Distance(tamgiac.a, tamgiac.b))
        * (tmp-Distance(tamgiac.b, tamgiac.c))
        * (tmp-Distance(tamgiac.a, tamgiac.c))
    );
}

double DienTichTamGiac(Diem2D a, Diem2D b, Diem2D c) {
    double tmp = ChuViTamGiac(a, b, c) / 2;
    return sqrt(tmp
        * (tmp - Distance(a, b))
        * (tmp - Distance(b, c))
        * (tmp - Distance(a, c))
    );
}

Diem2D TinhVec(Diem2D a, Diem2D b) {
    Diem2D res;
    res.x = b.x - a.x;
    res.y = b.y - a.y;
    return res;
}

bool CheckBenTrong(TamGiac tamgiac, Diem2D d) {
    double tmp = DienTichTamGiac(tamgiac);
    return (DienTichTamGiac(d, tamgiac.a, tamgiac.b) + DienTichTamGiac(d, tamgiac.b, tamgiac.c) + DienTichTamGiac(d, tamgiac.a, tamgiac.c)) <= tmp + 0.01;
}
