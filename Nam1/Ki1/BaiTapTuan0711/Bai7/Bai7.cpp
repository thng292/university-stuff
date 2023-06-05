// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

double BieuThuc1(int n) {
	double ans = 0;
	for (int i = 1; i < n; i++) {
		ans += ((double)i / (i + 1));
	}
	return ans;
}

long long BieuThuc2(int n) {
	long long ans = 0;
	for (int i = 1; i < n; i++) {
		ans += i * (i * 1LL + 1);
	}
	return ans;
}

long long BieuThuc3(int n) {
	long long ans = 0;
	for (int i = 1; i < n; i++) {
		ans += pow(i,i);
	}
	return ans;
}

int main()
{
	printf("Chuong trinh tinh cac tong theo so nguyen duong n.\n");
	printf("1/2 + 2/3 + 3/4 + ... + (n-1)/n\n");
	printf("1*2 + 2*3 + 3*4 + ... + n*(n+1)\n");
	printf("1^1 + 2^2 + 3^3 + ... + n^n\n");
	int n;
	do {
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n < 0);
	printf("Gia tri cua bieu thuc thu nhat la: %lf.\n", BieuThuc1(n));
	printf("Gia tri cua bieu thuc thu hai la: %llu.\n", BieuThuc2(n));
	printf("Gia tri cua bieu thuc thu ba la: %llu.\n", BieuThuc3(n));
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
