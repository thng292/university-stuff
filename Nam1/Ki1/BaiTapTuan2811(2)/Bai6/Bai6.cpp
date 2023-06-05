// Bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

bool AllEven(int*, int);

int* RowAllEven(int**, int, int);

int main() {
	printf("Chuong trinh liet ke cac dong chua toan so chan trong ma tran.\n");
	int Row, Col;
	ReadRowCol(Row, Col);
	int** inp = ReadMatrix(Row, Col);
	printf("Nhung dong chua toan so chan la:\n");
	int* Rows = RowAllEven(inp, Row, Col);
	WriteArray(Rows + 1, Rows[0]);
}

bool AllEven(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2) return 0;
	}
	return 1;
}

int* RowAllEven(int** arr, int Row, int Col) {
	int* res = new int[Row];
	res[0] = 0;
	for (int i = 0; i < Row; i++)
	{
		if (AllEven(arr[i], Col)) {

			res[++res[0]] = i;
		}
	}
	return res;
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
