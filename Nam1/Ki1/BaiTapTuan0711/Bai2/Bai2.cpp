// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//int Factorial(int n) {
//	if (n == 2) return 2;
//	return Factorial(n - 1) * n;
//}
//
//int P(int n, int r) {
//	return Factorial(n) / Factorial(n - r);
//}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	double a, b;
	printf("Chuong trinh hoan vi a, b.\n");
	printf("Nhap so thuc a: ");
	scanf_s("%lf", &a);
	printf("Nhap so thuc b: ");
	scanf_s("%lf", &b);
	int c = int(a);
	int d = int(b);
	swap(c, d);
	printf("a = %d", c);
	printf("b = %d", d);
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
