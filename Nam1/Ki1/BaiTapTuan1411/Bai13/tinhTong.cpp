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

int tinhTongSoNguyenTo(int n)
{
	int ans = 0;
	for (int i = 0; i <=n; i++)
	{
		if (kiemTraSoNguyenTo(i)) {
			ans += i;
		}
	}
    return ans;
}

int tinhTongSoChinhPhuongHaySoHoanChinh(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (kiemTraSoChinhPhuong(i) || kiemTraSoHoanChinh(i)) {
            sum += i;
        }
    }
    return sum;
}
