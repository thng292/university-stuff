// Bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Chuong trinh tinh so so le tu 0 den n.\n");
    double n = 0;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf_s("%lf", &n);
    } while ((floor(n) != n) || (n <= 0));
    int newN = n;
    printf("So so le trong khoang tu 0 toi %d la: %d.\n", newN, newN / 2 + newN % 2);
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
