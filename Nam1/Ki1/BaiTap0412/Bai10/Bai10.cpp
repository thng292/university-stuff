// Bai10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

inline bool isChar(char ch) {
	return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || ('0' <= ch && ch <= '9');
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

int main() {
	printf("Chuong trinh xoa nhung ki tu dac biet trong chuoi.\n");
	printf("Nhap chuoi:\n");
	char str[100];
	gets_s(str);
	for (int i = 0; i < strlen(str); i++)
	{
		if (!isChar(str[i])) {
			char tmp[10];
			printf("Tim thay mot ki tu la: %c.\n", str[i]);
			printf("Ban co muon loai bo tu nay khong? (Nhap Y de loai bo): ");
			gets_s(tmp);
			if (tmp[0] == 'Y') {
				strShift(str, i, -1);
				i--;
			}
		}
	}
	printf("Chuoi cuoi cung la: ");
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
