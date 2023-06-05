// BaiTapTuan2811.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IO.h"
#include "Logic.h"

int main()
{
	printf("Chuong trinh co the thuc hien cac yeu cau:\n");
	printf("1. Dem so so am trong mang.\n");
	printf("2. Chuyen doi n, -255 <= n <= 255 sang he nhi phan.\n");
	printf("3. Chuyen doi day 16 bit nhi phan sang so nguyen co dau.\n");
	printf("4. Tim uoc so cua x trong mang sau do don uoc cua x ve sau mang roi sap xep.\n");
	printf("5. Dem so phan tu tan cung la 6 va chia het cho 6, tinh trung binh cong cac so nguyen to trong mang, cho biet mang co bao nhieu so nguyen to phan biet.\n");
	printf("6. Trich nhung phan tu trong A khong phai so nguyen to ra b.\n");
	int option = 4;
	do
	{
		printf("Chon so tu 1 toi 7: ");
		scanf_s("%d", &option);
	} while (option <= 0 || option > 7);
	int n = 0;
	switch (option)
	{
	case 1: {
			printf("Chuong trinh dem so so am trong mang.\n");
			do
			{
				printf("Nhap so phan tu cua mang: ");
				scanf_s("%d", &n);
			} while (n <= 0);
			double* arr = ReadDoubles(n);
			printf("So phan tu am trong mang la: %d", CountNegative(arr, n));
		}
		return 0;
	case 2:
		{
			printf("Chuong trinh chuyen doi n, -255 <= n <= 255 sang he nhi phan.\n");
			do
			{
				printf("Nhap so nguyen n: ");
				scanf_s("%d", &n);
			} while (-255 > n || n > 255);
			printf("So %d co dang: %s", n, IntToBinary(n));
		}
		return 0;
	case 3:
		{
		printf("Chuong trinh chuyen doi bit sang so thap phan co dau.\n");
			char* inp;
			do
			{
				printf("Chi nhap 0 hoac 1.\n");
				inp = ReadChars(16);
			} while ([inp]() {
				for (int i = 0; i < 16; i++)
				{
					if (inp[i] != '0' && inp[i] != '1') {
						return true;
					}
				}
				return false;
			}());
			printf("So do la: %d.\n", BinaryToInt(inp));
		}
		return 0;
	case 4:
	{
		printf("Chuong trinh tim uoc so cua x trong mang sau do don uoc cua x ve sau mang roi sap xep.\n");
		int x = 0;
		do
		{
			printf("Nhap so phan tu cua mang: ");
			scanf_s("%d", &n);
		} while (n <= 0);
		printf("Nhap x: ");
		scanf_s("%d", &x);
		int* inp = ReadInts(n);
		for (int i = 0; i < n; i++)
		{
			if (KiemTraUoc(x, inp[i])) {
				printf("%d: %d.\n", i, inp[i]);
			}
		}
		SapXepVaDonUoc(inp, n, x);
		WriteInts(inp, n);
	}
	case 5:
	{
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
		printf("So so nguyen to phan biet la: %d.\n", ToSet(inp + 1, inp[0]-1)[0]);
		return 0;
	}
	case 6:
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
		WriteInts(inp + 1, inp[0]-1);
		SapGiam(inp + 1, inp[0]-1);
		WriteInts(inp + 1, inp[0]-1);
		tmp = DeletePrimes(tmp, n);
		WriteInts(tmp + 1, tmp[0]-1);
		return 0;
	}
	case 7:
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
		C = ToSet(ArrConcat(A, n1, B, n2), n1+n2);
		WriteInts(C+1, C[0]);
		return 0;
	}
	}
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
