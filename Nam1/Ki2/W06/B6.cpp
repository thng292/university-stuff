#include "SinhVien.h"

int main() {
    int n;
    std::cout << "Nhap so sinh vien: ";
    std::cin >> n;
    SinhVien* arr = new SinhVien[n];
    ReadSinhVien(arr);
    std::cout << '\n';
    ReadArrSinhVien(arr + 1, n - 1);

    char test[] = "test";

    std::cout << "Sinh vien da nhap:\n";
    for (size_t i = 0; i < n; i++) {
        std::cout << "Sinh vien thu " << i << '\n';
        WriteSinhVien(arr + i);
        std::cout << "Ma so sinh vien " << (CheckIdSinhVien(arr + i) ? "hop le" : "khong hop le") << '\n';
        std::cout << "Chuoi \"" << test << "\" " << (NameContainSinhVien(arr + i, test) ? "ton tai" : "khong ton tai") << " trong ten sinh vien" << '\n' << '\n';
    }

    std::cout << "Cac sinh vien diem cao nhat:\n";
    size_t nn = 0;
    SinhVien** narr = FindBestSinhVien(arr, n, &nn);
    for (size_t i = 0; i < nn; i++) {
        WriteSinhVien(*(narr + i));
    }

    for (size_t i = 0; i < n; i++) {
        FreeSinhVien(arr + i);
    }
}