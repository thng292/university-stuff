#include "kiemTra.h"
#include <math.h>
bool kiemTraSoChinhPhuong(int n) {
	return int(pow(floor(sqrt(n)), 2)) == n;
}

bool kiemTraSoChan(int n)
{
	return 1 - (n % 2);
}
