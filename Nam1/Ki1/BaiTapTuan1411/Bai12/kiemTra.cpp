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

bool kiemTraSoChan(int n) {
	return 1 - (n % 2);
}