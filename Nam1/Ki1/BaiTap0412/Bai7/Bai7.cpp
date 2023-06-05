// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

void trim(char str[]) {
	while (str[0] == ' ') {
		int N = strlen(str);
		for (int i = 0; i < N; i++)
		{
			str[i] = str[i + 1];
		}
	}
	while (str[strlen(str) - 1] == ' ') {
		str[strlen(str) - 1] = '\0';
	}
}

void strShift(char str[100], int start, int shift) {
	if (shift > 0) {
		for (int i = strlen(str); i >= start; i--) {
			str[i + shift] = str[i];
		}
	}
	else {
		for (int i = start; i <= strlen(str); i++) {
			str[i] = str[i - shift];
		}
	}
}

void removeWhiteSpace(char str[]) {
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == str[i + 1] && str[i] == ' ') {
			strShift(str, i, -1);
			i--;
		}
	}
}

int main()
{
	printf("Chuong trinh loai bo khoang trang thua trong chuoi.\n");
	printf("Nhap chuoi: ");
	char str[100];
	gets_s(str);
	trim(str);
	removeWhiteSpace(str);
	printf("Chuoi da loai bo la:\n");
	puts(str);
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
