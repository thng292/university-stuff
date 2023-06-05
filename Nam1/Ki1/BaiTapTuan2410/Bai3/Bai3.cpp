// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int max(int a, int b) {
	if (a>b) {
		return a;
	}
	return b;
}

int min(int a, int b) {
	if (a<b) {
		return a;
	}
	return b;
}

int main()
{
	printf("Chuong trinh tinh vi tri tuong doi cua 2 duong tron.\n");
	int r1 = 0, r2 = 0, distanceOfCenter = 0;
	do {
		printf("Nhap ban kinh r1 (so nguyen > 0): ");
		scanf_s("%d", &r1);
	} while (r1 <= 0);
	do {
		printf("Nhap ban kinh r2 (so nguyen > 0): ");
		scanf_s("%d", &r2);
	} while (r2 <= 0);
	do {
		printf("Nhap khoang cach giua 2 tam duong tron (so nguyen > 0): ");
		scanf_s("%d", &distanceOfCenter);
	} while (distanceOfCenter < 0);

	if (distanceOfCenter == 0) {
		if (r1 == r2)
			printf("Hai hinh tron chong khop len nhau.\n");
		else
			printf("Hai hinh tron bao nhau.\n");
		return 0;
	}
	if (r1 + r2 > distanceOfCenter) {
		int bienTam = distanceOfCenter + min(r1, r2);
		if (bienTam == max(r1, r2)) {
			printf("Hai duong tron tiep xuc trong.\n");
		}
		else if (bienTam < max(r1, r2)) {
			printf("Hai duong tron bao nhau.\n");
		} else 
			printf("Hai duong tron giao nhau.\n");
		return 0;
	}
	else if (r1 + r2 == distanceOfCenter) {
		printf("Hai duong tron tiep xuc ngoai.\n");
		return 0;
	}
	else {
		printf("Hai duong tron tach roi");
		return 0;
	}
	/*
	if (distanceOfCenter + min(r1, r2) == max(r1, r2)) {
		printf("Hai duong tron tiep xuc trong.\n");
		return 0;
	}
	if (dd == 0) {
		printf("Hai hinh tron tiep xuc ngoai voi nhau.\n");
		return 0;
	}
	else if (dd > 0) {
		printf("Hai duong tron tach roi.\n");
		return 0;
	}
	else {

	}
	*/
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
