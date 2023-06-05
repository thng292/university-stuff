// Bai$.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

int min(const int&, const int&);

int FindMin(int**, int, int);

int main() {
	printf("Chuong trinh tim so duong nho nhat trong ma tran.\n");
	int Row, Col;
	ReadRowCol(Row, Col);
	int** inp = ReadMatrix(Row, Col);
	printf("So duong nho nhat trong ma tran la: %d", FindMin(inp, Row, Col));
}

int min(const int& a, const int& b) {
	return a < b;
}

int FindMin(int** arr, int Row, int Col) {
	int res = INT_MAX;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (arr[i][j] > 0) {
				res = min(res, arr[i][j]);
			}
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
