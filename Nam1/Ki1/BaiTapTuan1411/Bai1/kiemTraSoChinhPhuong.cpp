#include "kiemTraSoChinhPhuong.h"
#include <math.h>

bool kiemTraSoChinhPhuong(int n) {
	return int(pow(floor(sqrt(n)), 2)) == n;
}