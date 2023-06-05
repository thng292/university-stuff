// Vidutuan1411.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KiemTra.h"
#include "TinhToan.h"
int main(int argc, char* argv[])
{
	int n;
	printf("--- CHUC NANG ---\n");
	printf("Nhap 1 - Kiem tra so chan\n");
	printf("Nhap 2 - Tinh tong so chan\n");
	printf("--- ************************* ---\n");
	printf("Nhap chuc nang:");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		int so;
		printf("Nhap vao mot so:");
		scanf_s("%d", &so);
		if (KiemTraSoChan(so))
		{
			printf("%d la so chan", so);
		}
		else {
			printf("%d la so le", so);
		}
		break;
	case 2:
		int son;
		printf("Nhap vao mot so:");
		scanf_s("%d", &son);
		int s = TinhTongSoChan(son);
		printf("Tong cac so chan la: %d", s);
		break;
	}
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
