// Bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>
using namespace std;

double tinhLaiSuat(int soTienGui, int soThangGui, double laiSuat) {
    return soTienGui * pow(1 + laiSuat, soThangGui);
}

int main() {
    printf("Chuong trinh tinh tien lai ngan hang theo hinh thuc lai nhap von.\n");
    int soTienGui = 0, soThangGui = 0;
    double laiSuat = 0;
    do {
        printf("Nhap so tien gui (so nguyen > 0): ");
        scanf_s("%d",&soTienGui);
    } while (soTienGui <= 0);
    do {
        printf("Nhap so thang gui (so nguyen > 0): ");
        scanf_s("%d", &soThangGui);
    } while (soThangGui <= 0);
    do {
        printf("Nhap lai suat (so thuc > 0): ");
        scanf_s("%lf", &laiSuat);
    } while (laiSuat <= 0);
    printf("\nLai suat khi gui %d dong trong %d la %lf\n",soTienGui,soThangGui, tinhLaiSuat(soTienGui, soThangGui, laiSuat));
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
