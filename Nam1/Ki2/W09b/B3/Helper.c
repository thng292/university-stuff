#include "Helper.h"

bool isPalindrome(int l, int r, char *s)
{
    if (s[l] != s[r]) return false;
    if (l >= r) return true;
    return isPalindrome(l + 1, r - 1, s);
}