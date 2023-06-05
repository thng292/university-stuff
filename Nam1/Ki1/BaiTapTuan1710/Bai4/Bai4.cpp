// Bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
	printf("Chuong trinh tinh gia tri cua x/3 va x/7\n");
	printf("Nhap so thuc x: ");
	double x = 0;
	scanf_s("%lf", &x);
	printf("\n");
	printf("Gia tri cua x/3 la: %.2lf\n", x/3);
	printf("Gia tri cua x/7 la: %.2lf\n", x/7);
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
