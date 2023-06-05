// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../BaiTapTuan2811/Logic.h"
#include "../BaiTapTuan2811/Logic.cpp"
#include "../BaiTapTuan2811/IO.h"
#include "../BaiTapTuan2811/IO.cpp"

int main()
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
