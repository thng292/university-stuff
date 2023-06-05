#include "timSo.h"
#include "kiemTra.h"
int soHoanChinhDauTien(int n)
{
    for (int i = 1; i <= n; ++i) {
        if (kiemTraSoHoanChinh(i)) {
            return i;
        }
    }
    return -1;
}

int soHoanChinhCuoiCung(int n) {
    for (int i = n; i > 0; --i) {
        if (kiemTraSoHoanChinh(i)) {
            return i;
        }
    }
    return -1;
}