// BaiTapTuan2410.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <cfloat>

int main()
{
	printf("Chuong trinh tim so lon nhat trong 4 so thuc.\n");
	double maximum = 0, minimum = 0, inp = 0;

	printf("Nhap so thuc thu 1: ");
	scanf_s("%lf", &maximum);
	minimum = maximum;
	
	printf("Nhap so thuc thu 2: ");
	scanf_s("%lf", &inp);
	if (inp > maximum) {
		maximum = inp;
	}
	if (inp < minimum) {
		minimum = inp;
	}
	
	printf("Nhap so thuc thu 3: ");
	scanf_s("%lf", &inp);
	if (inp > maximum) {
		maximum = inp;
	}
	if (inp < minimum) {
		minimum = inp;
	}
	
	printf("Nhap so thuc thu 4: ");
	scanf_s("%lf", &inp);
	if (inp > maximum) {
		maximum = inp;
	}
	if (inp < minimum) {
		minimum = inp;
	}
	
	/*
	for (int i = 1; i < 4; i++) {
		printf("Nhap so thuc thu %d: ", i+1);
		scanf_s("%lf", &inp);
		if (inp > maximum) {
			maximum = inp;
		}
		if (inp < minimum) {
			minimum = inp;
		}
	}
	*/
	
	printf("So lon nhat trong 4 so la: %lf\n", maximum);
	printf("So nho nhat trong 4 so la: %lf\n", minimum);
	
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
