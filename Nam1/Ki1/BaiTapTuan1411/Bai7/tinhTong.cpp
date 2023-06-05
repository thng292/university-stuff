#include "tinhTong.h"
#include "kiemTra.h"
int tinhTongSoChinhPhuongHaySoHoanChinh(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (kiemTraChinhPhuong(i) || kiemTraSoHoanChinh(i)) {
            sum += i;
        }
    }
    return sum;
}
