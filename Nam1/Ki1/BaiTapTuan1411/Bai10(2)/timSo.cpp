#include "timSo.h"
#include "kiemTra.h"
int soHoanChinhCuoiCung(int n)
{
	for (int i = n; i > 0; i--)
	{
		if (kiemTraSoHoanChinh(i)) {
			return i;
		}
	}
    return -1;
}
