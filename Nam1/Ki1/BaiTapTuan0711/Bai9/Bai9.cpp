// Bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double TinhTienDiXe(double km) {
    double discount = 1;
    if (km > 120) {
        discount = 0.9;
    }
    double total = 0;
    if (km <= 1) {
        return km * 15000;
    }
    else {
        total += 15000;
        --km;
    }
    if (km <= 4) {
        return total + km * 13500;
    }
    else {
        total += 4 * 13500;
        km -= 4;
    }
    total += km * 11000;
    return total*discount;
}

int main()
{
    printf("Chuong trinh tinh so tien di xe taxi.\n");
    double n;
    do {
        printf("Nhap so km: ");
        scanf_s("%lf", &n);
    } while (n < 0);
    printf("So tien di taxi la: %.2lf.\n", TinhTienDiXe(n));
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
