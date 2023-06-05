// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <vector>
using namespace std;
const int MENHGIA[] = { 10, 5, 2, 1 };

vector<int> QuiDoi(int dong) {
	vector<int> answer(4, 0);
	for (int i = 0; i < 4; i++) {
		while (dong >= MENHGIA[i]) {
			dong -= MENHGIA[i];
			answer[i]++;
		}
	}
	return answer;
}

int main(int argc, char* argv[]) {
	printf("Chuong trinh quy doi tien nguyen ra cac dong co menh gia:\n");
	for (int i : MENHGIA) {
		printf("%2d dong\n", i);
	}
	int dong = 0;
	do {
		printf("\nnhap so tien nguyen can doi (so nguyen > 0): ");
		scanf_s("%d",&dong);
	} while (dong <= 0);
	vector<int> answer = QuiDoi(dong);
	printf("%d dong qui doi duoc:\n", dong);
	for (int i = 0; i < 4; i++) {
		printf("%d dong menh gia %d\n", answer[i], MENHGIA[i]);
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
