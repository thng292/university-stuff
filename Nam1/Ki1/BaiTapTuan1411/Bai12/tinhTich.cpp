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
