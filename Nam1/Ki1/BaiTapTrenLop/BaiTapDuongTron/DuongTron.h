#pragma once
struct Diem2D {
	double x = 0;
	double y = 0;
};

struct DuongTron {
	Diem2D center;
	double Radius = 0;
};

/*
* Bieu dien cau truc
* nhap xuat mang
* tinh chu vi 
* tinh dien tich
* tinh tong chu vi dien tich cua mang
*/

DuongTron ReadDuongTron();

void WriteDuongTron(DuongTron duongTron);

void ReadArrDuongTron(DuongTron arr[], int length);

void WriteArrDuongTron(DuongTron arr[], int length);

double ChuViDuongTron(DuongTron duongTron);

double DienTichDuongTron(DuongTron duongTron);

double TongDienTich(DuongTron arr[], int length);

double TongChuVi(DuongTron arr[], int length);