// Bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    printf("Chuong trinh tinh tien tro.\n");
    printf("Phong A: 450.000d/ngay.\n");
    printf("Phong B: 350.000d/ngay.\n");
    printf("Phong C: 250.000d/ngay.\n");
    char loaiPhong = 0; 
    int soNgayThue = 0;
    do {
        printf("Nhap loai phong ban muon thue: ");
        scanf_s("%c", &loaiPhong);
    } while (!((loaiPhong >= 'A' && loaiPhong <= 'C') || (loaiPhong >= 'a' && loaiPhong <= 'c')));
    do {
        printf("Nhap so ngay ban muon thue: ");
        scanf_s("%d", &soNgayThue);
    } while (soNgayThue <= 0);
    float giamGia = 0;
    int tienPhong = 0;
    switch (loaiPhong)
    {
    case 'A' :
    case 'a' :
        giamGia = .1;
        tienPhong = 450000;
        break;
    case 'B' : 
    case 'b' :
        giamGia = .08;
        tienPhong = 350000;
        break;
    case 'C' :
    case 'c' :
        giamGia = .08;
        tienPhong = 250000;
        break;
    default:
        break;
    }
    double thanhTien = 0;
    if (soNgayThue > 10) {
        thanhTien = tienPhong * soNgayThue * (1 - giamGia);
    }
    else {
        thanhTien = tienPhong * soNgayThue;
    }
    printf("Tien phong cua ban la: %lf", thanhTien);
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
