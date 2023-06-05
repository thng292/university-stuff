// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../BaiTapTuan2811/Logic.h"
#include "../BaiTapTuan2811/Logic.cpp"
#include "../BaiTapTuan2811/IO.h"
#include "../BaiTapTuan2811/IO.cpp"

int main()
{
	printf("Chuong trinh Tim phan tu co trong A ma khong co trong B, ghep A va B thanh mang khong co phan tu trung.\n");
	int n1, n2;
	do
	{
		printf("Nhap so phan tu cua mang A: ");
		scanf_s("%d", &n1);
	} while (n1 <= 0);
	int* A = ReadInts(n1);
	do
	{
		printf("Nhap so phan tu cua mang B: ");
		scanf_s("%d", &n2);
	} while (n2 <= 0);
	int* B = ReadInts(n2);
	int* C = FindANotInB(A, n1, B, n2);
	WriteInts(C, C[0] - 1);
	delete[] C;
	C = ToSet(ArrConcat(A, n1, B, n2), n1 + n2);
	WriteInts(C + 1, C[0]);
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
