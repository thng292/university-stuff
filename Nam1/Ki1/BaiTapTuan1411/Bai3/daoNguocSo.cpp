#include "daoNguocSo.h"
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