#include "kiemTraToanSoLe.h"

bool kiemTraToanSoLe(int n)
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
