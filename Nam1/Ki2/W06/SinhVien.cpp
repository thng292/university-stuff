#include "SinhVien.h"

bool CheckIdSinhVien(SinhVien* sv) {
    if (strlen(sv->Id) != 7) {
        return false;
    }
    bool res = 1;
    for (size_t i = 0; i < 7; i++) {
        res &= !!isalpha(sv->Id[i]) || !!isdigit(sv->Id[i]);
    }
    return res;
}

void FixNameSinhVien(SinhVien* sv) {
    int n = strlen(sv->Name);
    sv->Name[0] = toupper(sv->Name[0]);
    for (size_t i = 1; i < n; i++) {
        if (sv->Name[i - 1] == ' ') {
            sv->Name[i] = toupper(sv->Name[i]);
        }
    }
}

bool NameContainSinhVien(SinhVien* sv, char* input) {
    return strstr(sv->Name, input);
}

void ReadSinhVien(SinhVien* sv) {
    char* buf = new char[50];
    std::cin.ignore();
    std::cin.clear();
    std::cout << "Nhap ma so sinh vien: ";
    std::cin.getline(buf, 50);
    sv->Id = new char[strlen(buf) + 1];
    strcpy(sv->Id, buf);

    std::cin.clear();

    std::cout << "Nhap ten sinh vien: ";
    std::cin.getline(buf, 50);
    sv->Name = new char[strlen(buf) + 1];
    strcpy(sv->Name, buf);
    FixNameSinhVien(sv);

    std::cout << "Nhap diem trung binh: ";
    std::cin >> sv->AvgScore;

    delete[] buf;
}

void ReadArrSinhVien(SinhVien* arr, size_t length) {
    for (size_t i = 0; i < length; i++) {
        ReadSinhVien(arr + i);
        std::cout << '\n';
    }
}

void WriteSinhVien(SinhVien* sv) {
    std::cout << "Ma so: " << sv->Id << '\n';
    std::cout << "Ho va Ten: " << sv->Name << '\n';
    std::cout << "Diem trung binh: " << sv->Id << '\n';
}

SinhVien** FindBestSinhVien(SinhVien* arr, size_t length, size_t* outputSize) {
    SinhVien** tmp = new SinhVien * [length];
    int cnt = 0;
    tmp[cnt++] = arr;
    float mmax = arr[0].AvgScore;
    for (size_t i = 1; i < length; i++) {
        if (arr[i].AvgScore > mmax) {
            cnt = 0;
            tmp[cnt++] = arr + i;
        } else if (arr[i].AvgScore == mmax) {
            tmp[cnt++] = arr + i;
        }
    }
    *outputSize = cnt;
    SinhVien** res = new SinhVien * [cnt];
    for (size_t i = 0; i < cnt; i++) {
        res[i] = tmp[i];
    }
    delete[] tmp;
    return res;
}

void FreeSinhVien(SinhVien* sv) {
    delete[] sv->Id;
    delete[] sv->Name;
}
