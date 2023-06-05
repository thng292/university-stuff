// Bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool SoChinhPhuong(int n) {
	int tmp = sqrt(n);
	for (int i = 0; i <= tmp; i++) {
		if (i * i == n) {
			return 1;
		}
	}
	return 0;
}


int TinhTong(int n) {
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2) {
			ans += i;
		}
		else if (SoChinhPhuong(i)) {
			ans += i;
		}
	}
	return ans;
}

int main()
{
    printf("Chuong trinh tinh tong cac so le hoac so chinh phuong tu 1 den n.\n");
	int n;
	do {
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n < 0);
	printf("Tong cac so le hoac so chinh phuong tu 1 den %d la: %d", n, TinhTong(n));
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
