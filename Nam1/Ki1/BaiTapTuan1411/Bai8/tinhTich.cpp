#include "tinhTich.h"
#include "kiemTra.h"

int tinhTichSoChinhPhuongHaySoChan(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        if (kiemTraSoChan(i) || kiemTraSoChinhPhuong(i)) {
            ans *= i;
        }
    }
    return ans;
}
