// Bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    printf("Chuong trinh tinh tong cac so thuc nhap tu ban phim.\n");
    double inp = 0, answer = 0;
    do {
        printf("Nhap so thuc n (nhap 0 de hoan thanh): ");
        scanf_s("%lf", &inp);
        answer += inp;
    } while (inp != 0);
    printf("Tong cua cac so thuc vua nhap la: %lf", answer);
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
