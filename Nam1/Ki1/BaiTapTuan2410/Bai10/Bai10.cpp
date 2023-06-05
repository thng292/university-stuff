// Bai10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Chuong trinh tinh cac tong theo so nguyen duong n.\n");
    printf("1/2 + 2/3 + 3/4 + ... + (n-1)/n\n");
    printf("1*2 + 2*3 + 3*4 + ... + n*(n+1)\n");
    printf("1^1 + 2^2 + 3^3 + ... + n^n\n");
    int n = 0;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf_s("%d", &n);
    } while (n <= 0);
    double total1 = 0;
    unsigned long long total2 = 0, total3 = 0;
    for (int i = 1; i < n; i++) {
        total1 += ((double)i / (i + 1));
        total2 += i * (i * 1LL + 1);
        total3 += pow(i, i);
    }
    printf("Gia tri cua bieu thuc thu nhat la: %lf.\n", total1);
    printf("Gia tri cua bieu thuc thu hai la: %llu.\n", total2);
    printf("Gia tri cua bieu thuc thu ba la: %llu.\n", total3);
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
