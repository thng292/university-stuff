// BaiTapTuan1710.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// BaiTap1.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double tinhChuVi(double R) {
	return 2 * R * M_PI;
}

int main(int argc, char* argv[]) {
	double R = 0;
	printf("Chuong trinh tinh chu vi hinh tron tu ban kinh R\n");
	do {
		printf("Nhap ban kinh R cua hinh tron (so thuc > 0): ");
		scanf_s("%lf", &R);
	} while (R <= 0);
	printf("\n");
	printf("Chu vi cua hinh tron ban kinh %lf la %lf", R, tinhChuVi(R));
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:a 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
