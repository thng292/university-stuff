#include "tinhTich.h"
#include "timSo.h"
#include "kiemTra.h"
unsigned long long tinhTichSoChan(int n)
{
	int start = soHoanChinhDauTien(n);
	int end = soChinhPhuongCuoiCung(n);
	if (start >= end) return 0;
	unsigned long long ans = 1;
	for (int i = start; i <= end; i++) {
		if (kiemTraSoChan(i)) {
			ans *= i;
		}
	}
	return ans;
}

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