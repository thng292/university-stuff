#include "PhanSo.h"
#include <stdio.h>
#include <math.h>
#include <algorithm>

int min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}

PhanSo NReadPhanSo() {
    PhanSo res;
    printf("Nhap vao phan so dang a/b.\n");
    scanf_s("%d/%d", &res.tu, &res.mau);
    return res;
}

PhanSo ReadPhanSo() {
    PhanSo res;
    printf("Nhap phan so dang.\n");
    printf("Nhap tu: ");
    scanf_s("%d", &res.tu);
    printf("Nhap mau: ");
    scanf_s("%d", &res.mau);
    return res;
}

void ReadArrPhanSo(PhanSo arr[], int &size) {
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf_s("%d", &size);
    } while (size <= 0);
    for (int i = 0; i < size; i++)
    {
        arr[i] = NReadPhanSo();
    }
}

void WritePhanSo(PhanSo& a) {
    printf("Phan so la: ");
    printf("%d/%d\n", a.tu, a.mau);
}

void WriteArrPhanSo(PhanSo arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        WritePhanSo(arr[i]);
    }
}

bool SoSanhLon(PhanSo a, PhanSo b) {
    return double(a.tu)/a.mau > double(b.tu)/b.mau;
}

bool SoSanhBe(PhanSo a, PhanSo b) {
    return double(a.tu) / a.mau < double(b.tu) / b.mau;
}

int SoSanhTamTri(PhanSo a, PhanSo b) {
    if (a.mau == b.mau && a.tu == b.tu) {
        return 0;
    }
    if (SoSanhLon(a, b)) {
        return 1;
    }
    else {
        return -1;
    }
}

void RutGon(PhanSo& a) {
    int tmp = min(abs(a.mau), abs(a.tu));
    if (a.mau < 0) {
        a.mau /= -1;
        a.tu /= -1;
    }
    for (int i = tmp; i > 0; i--)
    {
        if (a.mau % i == 0 && a.tu % i == 0) {
            a.mau /= i;
            a.tu /= i;
        }
    }
}

PhanSo Tong(PhanSo a, PhanSo b) {
    PhanSo res;
    res.mau = a.mau * b.mau;
    res.tu = a.tu * b.mau + a.mau * b.tu;
    return res;
}

PhanSo Hieu(PhanSo a, PhanSo b) {
    b.tu = -b.tu;
    return Tong(a, b);
}

PhanSo Tich(PhanSo a, PhanSo b) {
    PhanSo res;
    res.mau = a.mau * b.mau;
    res.tu = a.tu * b.tu;
    return res;
}

PhanSo Thuong(PhanSo a, PhanSo b) {
    PhanSo tmp;
    tmp.tu = b.mau;
    tmp.mau = b.tu;
    return Tich(a, tmp);
}

PhanSo TinhTong(PhanSo arr[], int size) {
    PhanSo res;
    for (int i = 0; i < size; i++)
    {
        res = Tong(res, arr[i]);
    }
    return res;
}

void SapXep(PhanSo arr[], int size) {
    std::sort(arr, arr+size, SoSanhBe);
}

int PhanSoFind(PhanSo arr[], int size, PhanSo key) {
    for (int i = 0; i < size; i++)
    {
        if (SoSanhTamTri(arr[i], key) == 0) {
            return i;
        }
    }
    return -1;
}