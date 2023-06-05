#include "tinhTich.h"
#include "kiemTra.h"
int tinhTichSoNguyenToHaySoToanLe(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        if (kiemTraSoToanLe(i) || kiemTraSoNguyenTo(i)) {
            ans *= i;
        }
    }
    return ans;
}
