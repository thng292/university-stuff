#include "TinhToan.h"

//Dinh nghia ham
int TinhTongSoChan(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (KiemTraSoChan(i) == true)
		{
			s += i;
		}
	}
	return s;
}
