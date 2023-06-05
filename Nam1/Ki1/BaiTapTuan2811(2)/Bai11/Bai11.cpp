// Bai11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include "../Bai1/IO.cpp"

void SortMaTran(int**, int, int);

int main()
{
    printf("Chuong trinh sap xep cac gia tri nam tren bien ma tran theo chieu kim dong ho.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("Ma tran sau khi sap xep la:\n");
    SortMaTran(inp, Row, Col);
    WriteMatrix(inp, Row, Col);
}

void SortMaTran(int** arr, int Row, int Col) {
    int N = Row * 2 + Col * 2 - 4;
    int* res = new int[N];
    int last = 0;
    for (int i = 0; i < Col; i++, last++)
    {
        res[last] = arr[0][i];
    }
    for (int i = 0; i < Col; i++, last++)
    {
        res[last] = arr[Row - 1][i];
    }
    for (int i = 1; i < Row - 1; i++, last++)
    {
        res[last] = arr[i][0];
    }
    for (int i = 1; i < Row - 1; i++, last++)
    {
        res[last] = arr[i][Col - 1];
    }
    std::sort(res, res + N);
    printf("Sorted.\n");
    WriteArray(res, N);
    last = 0;
    for (int i = 0; i < Col; i++, last++) 
    {
        arr[0][i] = res[last];
    }
    for (int i = 1; i < Row; i++, last++)
    {
        arr[Col - 1][i] = res[last];
    }
    for (int i = Col - 2; i >= 0; i--, last++)
    {
        arr[Row - 1][i] = res[last];
    }
    for (int i = Row - 2; i >= 1; i--, last++) 
    {
        arr[i][0] = res[last];
    }
    delete[] res;
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
