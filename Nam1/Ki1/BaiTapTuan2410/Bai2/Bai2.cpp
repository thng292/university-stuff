// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	printf("Chuong trinh tinh tien dien phai tra trong thang.\n");
	double chiSoDienCu = 0, chiSoDienMoi = 0;
	printf("Nhap chi so dien cu: ");
	scanf_s("%lf", &chiSoDienCu);
	do {
		printf("Nhap chi so dien moi(> chi so dien cu): ");
		scanf_s("%lf", &chiSoDienMoi);
	} while (chiSoDienMoi < chiSoDienCu);
	//int donGia[] = { 1243, 1304, 1644, 1806, 1976, 2297 };
	int donGiaMuc1 = 1243;
	int donGiaMuc2 = 1304;
	int donGiaMuc3 = 1644;
	int donGiaMuc4 = 1806;
	int donGiaMuc5 = 1976;
	int donGiaMuc6 = 2297;
	double thanhTien = 0;
	double mucTieuThuThangNay = chiSoDienMoi - chiSoDienCu;
	//Muc 1
	if (mucTieuThuThangNay > 50) {
		mucTieuThuThangNay -= 50;
		thanhTien += 50 * donGiaMuc1;
	}
	else {
		thanhTien += mucTieuThuThangNay * donGiaMuc1;
		mucTieuThuThangNay = 0;
	}
	
	//Muc 2
	if (mucTieuThuThangNay > 50) {
		mucTieuThuThangNay -= 50;
		thanhTien += 50 * donGiaMuc2;
	}
	else {
		thanhTien += mucTieuThuThangNay * donGiaMuc2;
		mucTieuThuThangNay = 0;
	}
	
	//Muc 3
	if (mucTieuThuThangNay > 50) {
		mucTieuThuThangNay -= 50;
		thanhTien += 50 * donGiaMuc3;
	}
	else {
		thanhTien += mucTieuThuThangNay * donGiaMuc3;
		mucTieuThuThangNay = 0;
	}
	
	//Muc 4
	if (mucTieuThuThangNay > 50) {
		mucTieuThuThangNay -= 50;
		thanhTien += 50 * donGiaMuc4;
	}
	else {
		thanhTien += mucTieuThuThangNay * donGiaMuc4;
		mucTieuThuThangNay = 0;
	}
	
	//Muc 5
	if (mucTieuThuThangNay > 50) {
		mucTieuThuThangNay -= 50;
		thanhTien += 50 * donGiaMuc5;
	}
	else {
		thanhTien += mucTieuThuThangNay * donGiaMuc5;
		mucTieuThuThangNay = 0;
	}
	/*
	for (int i = 0; i < 5; ++i) {
		if (mucTieuThuThangNay > 50) {
			mucTieuThuThangNay -= 50;
			thanhTien += 50 * donGia[i];
		}
		else {
			thanhTien += mucTieuThuThangNay * donGia[i];
			mucTieuThuThangNay = 0;
			break;
		}
	}
	thanhTien += mucTieuThuThangNay * donGia[5];
	*/
	
	//Muc 6
	thanhTien += mucTieuThuThangNay * donGiaMuc6;
	printf("Tien dien thang nay la: %lf\n", thanhTien);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
