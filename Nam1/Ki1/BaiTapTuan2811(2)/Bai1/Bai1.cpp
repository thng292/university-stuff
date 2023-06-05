
// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IO.h"

long long SumAll(int**, int, int);

int main()
{
    printf("Chuong trinh tinh tong cac phan tu duong trong ma tran.\n");
    int Row = 0, Col = 0;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("Tong cac phan tu trong ma tran la: %d", SumAll(inp, Row, Col));
}   

long long SumAll(int** arr, int row, int col) {
    long long res = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            res += arr[i][j];
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
