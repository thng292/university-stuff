#include "tinhTong.h"
#include "kiemTra.h"
#include "timSo.h"
int tinhTongSoHoanChinhDauToiCuoi(int n)
{
    int start = soHoanChinhDauTien(n);
    int end = soHoanChinhCuoiCung(n);
    if (start >= end) {
        return 0;
    }
    return (start+end)*(end-start+1)/2;
}
