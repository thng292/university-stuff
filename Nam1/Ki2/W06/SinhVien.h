#include <iostream>
#include <string.h>

struct SinhVien {
    char* Id = 0;
    char* Name = 0;
    float AvgScore = 0;
};

bool CheckIdSinhVien(SinhVien* sv);

void FixNameSinhVien(SinhVien* sv);

bool NameContainSinhVien(SinhVien* sv, char* input);

void ReadSinhVien(SinhVien* sv);

void ReadArrSinhVien(SinhVien* arr, size_t length);

void WriteSinhVien(SinhVien* sv);

SinhVien** FindBestSinhVien(SinhVien* arr, size_t length, size_t* outputSize);

void FreeSinhVien(SinhVien* sv);