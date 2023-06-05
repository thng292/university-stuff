// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai1/IO.cpp"

bool IsPrime(int);

int CountPrimes(int**, int, int);

int main()
{
    printf("Chuong trinh dem so luong so nguyen to trong ma tran.\n");
    int Row, Col;
    ReadRowCol(Row, Col);
    int** inp = ReadMatrix(Row, Col);
    printf("So luong so nguyen to trong ma tran la: %d", CountPrimes(inp, Row, Col));

}

bool IsPrime(int n) {
    int tmp = sqrt(n) + 1;
    for (int i = 2; i < tmp; i++)
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int CountPrimes(int** arr, int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (IsPrime(arr[i][j])) {
                ++count;
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
