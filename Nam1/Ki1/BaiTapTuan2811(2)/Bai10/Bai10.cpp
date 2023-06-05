// Bai10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

int Freq(int**, int, int);

int main()
{
    printf("Chuong trinh cho biet chu so xuat hien nhieu nhat trong ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("Phan tu xuat hien nhieu nhat trong ma tran la: %d.\n", Freq(inp, Row, Col));
}

int max(const int& a, const int& b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int Freq(int** arr, int Row, int Col) {
    int N = 1'000'000;
    int* freq = new int[N];
    memset(freq, 0, N);
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            freq[arr[i][j]]++;
        }
    }
    int res = 0, best = -1;
    for (int i = 0; i < N; i++)
    {
        if (res < freq[i]) {
            res = freq[i];
            best = i;
        }
    }
    delete[] freq;
    return best;
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
