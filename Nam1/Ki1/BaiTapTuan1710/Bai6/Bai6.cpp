// Bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
double calculateR(double s) {
    return sqrt(s / M_PI);
}

int main() {
    printf("Chuong trinh tinh ban kinh hinh tron tu dien tich.\n");
    double s = 0;
    do {
        printf("Nhap dien tich hinh tron (so nguyen > 0): ");
        scanf_s("%lf", &s);
    } while (s <= 0);
    printf("\n");
    printf("Ban kinh cua hinh tron co dien tich %lf la %lf", s, calculateR(s));
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
