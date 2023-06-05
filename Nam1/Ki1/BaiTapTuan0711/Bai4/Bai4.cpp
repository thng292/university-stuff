// Bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool KiemTraSoLe(int n) {
	while (n/10)
	{
		if (n % 10 % 2 == 0) {
			return 0;
		}
		n /= 10;
	}
	if (n % 10 % 2 == 0) {
		return 0;
	}
	return 1;
}

int main()
{
	printf("Chuong trinh kiem tra 1 so nguyen duong toan so le.\n");
	int n;
	do {
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n < 0);
	if (KiemTraSoLe(n)) {
		printf("So %d toan so le.\n", n);
	}
	else {
		printf("So %d toan so chan.\n", n);
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
