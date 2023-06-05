// Bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../BaiTapTuan2811/Logic.h"
#include "../BaiTapTuan2811/Logic.cpp"
#include "../BaiTapTuan2811/IO.h"
#include "../BaiTapTuan2811/IO.cpp"

int main()
{
	printf("Chuong trinh trich nhung phan tu trong A khong phai so nguyen to ra b.\n");
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	int* inp = ReadInts(n);
	int* tmp = copyArr(inp, n);
	inp = ExtractNonPrimes(inp, n);
	WriteInts(inp + 1, inp[0] - 1);
	SapGiam(inp + 1, inp[0] - 1);
	WriteInts(inp + 1, inp[0] - 1);
	tmp = DeletePrimes(tmp, n);
	WriteInts(tmp + 1, tmp[0] - 1);
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
