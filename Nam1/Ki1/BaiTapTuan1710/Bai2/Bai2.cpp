// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
double calcArea(double chuVi) {
	double h = chuVi / 5;
	double w = h * 1.5;
	return (w * h);
}

int main(int argc, char* argv[]) {
	double chuVi = 0;
	printf("Chuong trinh tinh dien tich hinh chu nhat\n");
	printf("co chieu dai bang 1.5 lan chieu rong\n");
	do {
		printf("Nhap chu vi hinh chu nhat (so thuc > 0): ");
		scanf_s("%lf", &chuVi);
	} while (chuVi <= 0);
	printf("\nDien tich hinh chu nhat la: %lf\n", calcArea(chuVi));
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
