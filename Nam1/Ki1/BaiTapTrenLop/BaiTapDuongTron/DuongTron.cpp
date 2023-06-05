#include "DuongTron.h"
#include "Diem.h"
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

DuongTron ReadDuongTron() {
    DuongTron res;
    printf("Nhap duong tron: \n");
    res.center = ReadDiem2D();
    printf("Nhap ban kinh duong tron: ");
    scanf_s("%lf", &res.Radius);
    return res;
}

void WriteDuongTron(DuongTron duongTron) {
    printf("Duong tron co: \n");
    WriteDiem2D(duongTron.center);
    printf("Toa do la: %lf\n", duongTron.Radius);
}

void ReadArrDuongTron(DuongTron arr[], int length) {
    printf("Nhap mang duong tron gom %d phan tu:\n", length);
    for (int i = 0; i < length; i++)
    {
        arr[i] = ReadDuongTron();
    }
}

void WriteArrDuongTron(DuongTron arr[], int length) {
    printf("Mang duong tron gom %d phan tu: \n", length);
    for (int i = 0; i < length; i++)
    {
        WriteDuongTron(arr[i]);
    }
}

double ChuViDuongTron(DuongTron duongTron) {
    return duongTron.Radius * M_PI * 2;
}

double DienTichDuongTron(DuongTron duongTron) {
    return duongTron.Radius * duongTron.Radius * M_PI;
}

double TongChuVi(DuongTron arr[], int length) {
    double res = 0;
    for (int i = 0; i < length; i++)
    {
        res += ChuViDuongTron(arr[i]);
    }
}

double TongDienTich(DuongTron arr[], int length) {
    double res = 0;
    for (int i = 0; i < length; i++)
    {
        res += DienTichDuongTron(arr[i]);
    }
    return res;
}

