// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <initializer_list>
#include "../Bai1/IO.cpp"

int max(std::initializer_list<int>);

int MaxBien(int**, int, int);

int main()
{
    printf("Chuong trinh tim so lon nhat tren bien ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("So lon nhat tren bien ma tran la: %d", MaxBien(inp, Row, Col));
}

int max(std::initializer_list<int> args) {
    int res = 1<<31;
    for (int i : args) 
    {
        if (i > res) {
            res = i;
        }
    }
    return res;
}

int MaxBien(int** arr, int row, int col) {
    int res = 1<<31;
    for (int i = 0; i < row; i++)
    {
        res = max({ res, arr[i][0], arr[i][col-1] });
    }
    for (int i = 0; i < col; i++)
    {
        res = max({ res, arr[0][i], arr[row-1][i] });
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
