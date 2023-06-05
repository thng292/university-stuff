// Bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../BaiTapTuan2811/Logic.h"
#include "../BaiTapTuan2811/Logic.cpp"
#include "../BaiTapTuan2811/IO.h"
#include "../BaiTapTuan2811/IO.cpp"

int main()
{
	int n;
	printf("Chuong trinh dem so phan tu tan cung la 6 hoac chia het cho 6, tinh trung binh cong cac so nguyen to trong mang, cho biet mang co bao nhieu so nguyen to phan biet.\n");
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	int* inp = ReadInts(n);
	printf("So phan tu tan cung la 6 hoac chia het cho 6 la: %d.\n", CountSix(inp, n));
	double ans = 0;
	inp = AvgPrimes(inp, n, ans);
	printf("Trung binh cong cua cac so nguyen to la: %lf.\n", ans);
	printf("So so nguyen to phan biet la: %d.\n", ToSet(inp + 1, inp[0] - 1)[0]);
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
