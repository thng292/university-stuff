// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
bool SoChinhPhuong(int n) {
	int tmp = sqrt(n);
	for (int i = 0; i < tmp + 1; i++) {
		if (i * i == n) {
			return 1;
		}
	}
	return 0;
}

int main()
{
	printf("Chuong trinh kiem tra so chinh phuong.\n");
	int n;
	do {
		printf("Nhap vao so n (nguyen duong): ");
		scanf_s("%d", &n);
	} while (n < 0);
	//for (n = 0; n < 1000; n++)
	if (SoChinhPhuong(n)) {
		printf("So %d la so chinh phuong.\n", n);
	}
	else {
		printf("So %d khong la so chinh phuong.\n", n);
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
