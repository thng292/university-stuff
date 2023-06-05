// Bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

int main() {
	printf("Chuong trinh cho biet tu co bao nhieu ki tu.\n");
	char str[100];
	printf("Nhap chuoi: ");
	gets_s(str);
	int pos = 0;
	do {
		printf("Nhap vi tri cua tu: ");
		scanf_s("%d", &pos);
	} while (pos <= 0);
	int tmp = pos;
	char *nextptr = NULL;
	char* part = strtok_s(str, " ", &nextptr);
	while (part != NULL)
	{
		pos--;
		if (pos) {
			part = strtok_s(NULL, " ", &nextptr);
		}
		else {
			printf("Do dai cua tu thu %d la: %d", tmp, strlen(part));
			break;
		}
	}
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
