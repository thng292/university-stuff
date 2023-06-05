// bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

int SoHoangHau(int**, int, int);

int main()
{
    printf("Chuong trinh dem so luong hoang hau tren ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("So luong hoang hau trong ma tran la: %d.\n", SoHoangHau(inp, Row, Col));
}

int* MaxRow(int** arr, int Row, int Col) {
    int* res = new int[Row];
    for (int i = 0; i < Row; i++)
    {
        res[i] = arr[i][0];
    }
    for (int i = 1; i < Row; i++)
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

int* MaxCol(int** arr, int Row, int Col) {
    int* res = new int[Col];
    for (int i = 0; i < Col; i++)
    {
        res[i] = arr[0][i];
    }
    for (int i = 1; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (arr[i][j] > res[j]) {
                res[j] = arr[i][j];
            }
        }
    }
    return res;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

bool CheckMaxCheoXuong(int** arr, int Row, int Col, int xCor, int yCor) {
    int tmp = -min(xCor, yCor);
    while (xCor + tmp < Row && yCor + tmp < Col)
    {
        if (arr[xCor][yCor] < arr[xCor + tmp][yCor + tmp]) {
            return 0;
        }
        ++tmp;
    }
    return 1;
}

bool CheckMaxCheoLen(int** arr, int Row, int Col, int xCor, int yCor) {
    int tmp = 0;
    while (xCor + tmp < Row && yCor - tmp >= 0) {
        if (arr[xCor + tmp][yCor - tmp] > arr[xCor][yCor]) {
            return 0;
        }
        tmp++;
    }
    tmp = 0;
    while (xCor - tmp >= 0 && yCor + tmp < Col) {
        if (arr[xCor - tmp][yCor + tmp] > arr[xCor][yCor]) {
            return 0;
        }
        tmp++;
    }
    return 1;
}

int SoHoangHau(int** arr, int Row, int Col) {
    int count = 0;
    int* maxRow = MaxRow(arr, Row, Col);
    int* maxCol = MaxCol(arr, Row, Col);
    WriteArray(maxRow, Row);
    WriteArray(maxCol, Col);
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            printf("Cheo len %d %d: %d\n",i,j, CheckMaxCheoLen(arr, Row, Col, i, j));
            printf("Cheo Xuong %d %d: %d\n",i,j, CheckMaxCheoXuong(arr, Row, Col, i, j));
            if (maxRow[i] == maxRow[j] && maxRow[i] == arr[i][j] && CheckMaxCheoLen(arr, Row, Col, i, j) && CheckMaxCheoXuong(arr, Row, Col, i, j)) {
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
