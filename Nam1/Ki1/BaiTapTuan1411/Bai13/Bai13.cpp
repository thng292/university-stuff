// Bai13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "tinhTong.h"
#include "tinhTich.h"
#include "kiemTra.h"
#include "timSo.h"

int main()
{
	printf("Chuong trinh nay se lam nhieu thu vi dieu neu ban nhap so n.\n");
	int n;
	do {
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n < 0);
	//b1
	if (kiemTraSoChinhPhuong(n)) {
		printf("%d la so chinh phuong.\n", n);
	}
	else {
		printf("%d khong la so chinh phuong.\n", n);
	}
	//b2
	if (kiemTraSoNguyenTo(n)) {
		printf("%d la so nguyen to.\n", n);
	}
	else {
		printf("%d khong la so nguyen to.\n", n);
	}
	//b3
	if (kiemTraSoDoiXung(n)) {
		printf("%d la so doi xung.\n", n);
	}
	else {
		printf("%d khong la so doi xung.\n", n);
	}
	//b4
	if (kiemTraSoToanLe(n)) {
		printf("%d la so co toan so le.\n", n);
	}
	else {
		printf("%d khong la so co toan so le.\n", n);
	}
	//b5
	if (kiemTraSoHoanChinh(n)) {
		printf("%d la so hoan chinh.\n", n);
	}
	else {
		printf("%d khong la so hoan chinh.\n", n);
	}
	//b6
	printf("Tong cac so nguyen to tu 1 toi %d la: %d\n", n, tinhTongSoNguyenTo(n));
	//b7
	printf("Tong cac so la so chinh phuong hoac so hoan chinh trong khoang tu 1 den %d la: %d\n",n, tinhTongSoChinhPhuongHaySoHoanChinh(n));
	//b8
	printf("Tong so chinh phuong hoac so chan tu 1 toi %d la: %d\n", n,tinhTichSoChinhPhuongHaySoChan(n));
	//b9
	printf("Tinh tich so nguyen to hoac so toan le trong khoang tu 1 toi %d la: %d\n",n,tinhTichSoNguyenToHaySoToanLe(n));
	//b10(1)
	printf("So chinh phuong dau tien trong khoang tu 1 den %d la: %d\n",n,soChinhPhuongDauTien(n));
	//b10(2)
	printf("So hoan chinh cuoi cung trong khoang tu 1 den %d la: %d\n", n, soHoanChinhCuoiCung(n));
	//b11
	printf("Tong cac so tu so hoan chinh dau tien den so hoan chinh cuoi cung\ntrong khoang tu 1 den %d la: %d\n", n, tinhTongSoHoanChinhDauToiCuoi(n));
	//b12
	printf("Tich cac so chan tu so hoan chinh dau tien den so chinh phuong cuoi cung la: %lld\n", tinhTichSoChan(n));
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
