// Bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

int SoPhanTuCucTri(int**, int, int);

int main()
{
    printf("Chuong trinh tinh tong cac cuc tri trong ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("So phan tu cuc tri la: %d", SoPhanTuCucTri(inp, Row, Col));

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

bool CucTri(int** arr, int x, int y) {
    static int xCor[] = { 1, 1, 1, 0, 0, -1, -1, -1 };
    static int yCor[] = { 1, 0, -1, 1, -1, 1, 0, -1 };
    int maxx = 1 << 31;
    int minn = ~(1 << 31);
    for (int i = 0; i < 8; i++)
    {
        maxx = max(maxx, arr[x + xCor[i]][y + yCor[i]]);
        minn = min(minn, arr[x + xCor[i]][y + yCor[i]]);
    }
    if (arr[x][y] > maxx || arr[x][y] < minn) {
        return 1;
    }
    else {
        return 0;
    }
}

int SoPhanTuCucTri(int** arr, int Row, int Col) {
    int count = 0;
    for (int i = 1; i < Row -1; i++)
    {
        for (int j = 1; j < Col -1; j++)
        {
            if (CucTri(arr, i, j)) {
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
