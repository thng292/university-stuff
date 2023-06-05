#include "kiemTra.h"
#include <math.h>


bool kiemTraSoHoanChinh(int n)
{
	if (n <= 1) {
		return 0;
	}
	int tmp = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tmp += i;
		}
	}
	return tmp == n;
}

bool kiemTraSoChinhPhuong(int n)
{
	return int(pow(floor(sqrt(n)), 2)) == n;
}

bool kiemTraSoChan(int n) 
{
	return 1 - (n % 2);
}

bool kiemTraSoNguyenTo(int n) 
{
	if (n <= 1) {
		return 0;
	}
	int tmp = sqrt(n) + 1;
	for (int i = 2; i < tmp; i++)
	{
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

bool kiemTraSoToanLe(int n)
{
    while (n > 0) {
        int tmp = n % 10;
        if (tmp % 2 == 0) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int daoNguocSo(int n) {
	int ans = 0;
	while (n > 0) {
		int tmp = n % 10;
		ans *= 10;
		ans += tmp;
		n /= 10;
	}
	return ans;
}

bool kiemTraSoDoiXung(int n) 
{
	return n == daoNguocSo(n);
}