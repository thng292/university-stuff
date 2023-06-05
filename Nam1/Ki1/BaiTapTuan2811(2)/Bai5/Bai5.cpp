// Bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

bool HasNegative(int*, int);

int* RowHasNegative(int**, int, int);

int main()
{
    printf("Chuong trinh tim cac ding co gia tri am trong ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("Nhung dong co so am la:\n");
    int* Rows = RowHasNegative(inp, Row, Col);
    WriteArray(Rows + 1, Rows[0]);
}

bool HasNegative(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) {
            return 1;
        }
    }
    return 0;
}

int* RowHasNegative(int** arr, int row, int col) {
    int* res = new int[row];
    res[0] = 0;
    for (int i = 0; i < row; i++) {
        if (HasNegative(arr[i], col)) {
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
