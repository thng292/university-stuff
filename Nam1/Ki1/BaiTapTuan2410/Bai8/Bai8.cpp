// Bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int n = 0;
    printf("Chuong trinh tinh gia tri trung binh cua day so n.\n");
    do {
        printf("Nhap so nguyen n: ");
        scanf_s("%d", &n);
    } while (n == 0);
    long long total = 0;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            total += i;
        }
    }
    else {
        for (int i = n; i <= 1; i++) {
            total += i;
        }
    }
    printf("Gia tri trung binh cua day so n la: %lf", (double)total / n);
    return 0;
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
