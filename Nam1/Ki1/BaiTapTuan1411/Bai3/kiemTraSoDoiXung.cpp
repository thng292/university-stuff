#include "kiemTraSoDoiXung.h"
#include "daoNguocSo.h"

bool kiemTraSoDoiXung(int n) {
	return n == daoNguocSo(n);
}