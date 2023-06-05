// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

int DemYen(int**, int, int);

int main()
{
    printf("Chuong trinh dem so luong yen ngua trong ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("So luong yen ngua trong ma tran la: %d", DemYen(inp, Row, Col));
}

int* MaxRow(int** arr, int Row, int Col) {
    int* res = new int[Row];
    for (int i = 0; i < Row; i++)
    {
        res[i] = arr[i][0];
    }
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (arr[i][j] > res[i]) {
                res[i] = arr[i][j];
            }
        }
    }
    return res;
}

int* MinCol(int** arr, int Row, int Col) {
    int* res = new int[Col];
    for (int i = 0; i < Col; i++)
    {
        res[i] = arr[0][i];
    }
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (res[j] > arr[i][j]) {
                res[j] = arr[i][j];
            }
        }
    }
    return res;
}

int DemYen(int** arr, int Row, int Col) {
    int count = 0;
    int* maxRow = MaxRow(arr, Row, Col);
    WriteArray(maxRow, Row);
    int* minCol = MinCol(arr, Row, Col);
    WriteArray(minCol, Col);
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (minCol[j] == maxRow[i] && arr[i][j] == minCol[j]) {
                count++;
            }
        }
    }
    return count;
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
