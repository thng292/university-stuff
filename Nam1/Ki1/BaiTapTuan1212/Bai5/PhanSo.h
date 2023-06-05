#pragma once
struct PhanSo {
	int tu = 0;
	int mau = 1;
};

PhanSo ReadPhanSo();

PhanSo NReadPhanSo();

void ReadArrPhanSo(PhanSo arr[], int &size);

void WritePhanSo(PhanSo& a);

void WriteArrPhanSo(PhanSo arr[], int size);

/*
* So sanh 2 phan so
* @param a PhanSo
* @param b PhanSo
* @return a > b
*/
bool SoSanhLon(PhanSo a, PhanSo b);

int SoSanhTamTri(PhanSo a, PhanSo b);

void RutGon(PhanSo& a);

PhanSo Tong(PhanSo a, PhanSo b);

PhanSo Hieu(PhanSo a, PhanSo b);

PhanSo Tich(PhanSo a, PhanSo b);

PhanSo Thuong(PhanSo a, PhanSo b);

PhanSo TinhTong(PhanSo arr[], int size);

void SapXep(PhanSo arr[], int size);

int PhanSoFind(PhanSo arr[], int size, PhanSo key);