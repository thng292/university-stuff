// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../BaiTapTuan2811/Logic.h"
#include "../BaiTapTuan2811/Logic.cpp"
#include "../BaiTapTuan2811/IO.h"
#include "../BaiTapTuan2811/IO.cpp"

int main()
{
	int n = 0;
	printf("Chuong trinh dem so so am trong mang.\n");
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	double* arr = ReadDoubles(n);
	printf("So phan tu am trong mang la: %d", CountNegative(arr, n));
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
