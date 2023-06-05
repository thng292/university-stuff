#include "tinhTongSoNguyenTo.h"
#include "kiemTra.h"

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
