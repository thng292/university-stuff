#include "kiemTra.h"
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