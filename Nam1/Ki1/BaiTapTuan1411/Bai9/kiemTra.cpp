#include "kiemTra.h"
#include <math.h>

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