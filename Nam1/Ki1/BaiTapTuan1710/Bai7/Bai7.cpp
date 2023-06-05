// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Chuong trinh tinh gia tri cua bieu thuc (x^2 + x + 1)^n + (x^2 - x + 1)^n.\n");
    printf("Nhap gia tri cua so nguyen n va so thuc x: ");
    printf("Chuong trinh tinh gia tri cua bieu thuc (x^2+1)^n.\n");
    printf("Nhap gia tri cua so nguyen n: ");
    int n = 0;
    double x = 0;
    scanf_s("%d", &n);
    printf("Nhap gia tri cua so thuc x: ");
    scanf_s("%lf", &x);
    printf("Gia tri cua bieu thuc (x^2 + x + 1)^n + (x^2 - x + 1)^n la: %.10lf\n",pow((x * x + x + 1), n) + pow((x * x - x + 1), n));
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
