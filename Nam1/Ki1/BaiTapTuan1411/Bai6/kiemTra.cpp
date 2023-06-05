#include "kiemTra.h"
#include <math.h>
bool kiemTraSoNguyenTo(int n) {
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