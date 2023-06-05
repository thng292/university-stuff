#include "timSo.h"
#include "kiemTra.h"
int soChinhPhuongDauTien(int n)
{
    for (int i = 1; i <= n; i++) {
        if (kiemTraSoChinhPhuong(i)) {
            return i;
        }
    }
    return -1;
}
