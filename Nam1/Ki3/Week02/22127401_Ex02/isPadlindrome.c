#include "isPadlindrome.h"

bool isPadlindrome(int l, int r, char* s)
{
    if (l > r) {
        return false;
    }
    if (s[l] != s[r]) {
        return false;
    } else {
        if (l + 1 < r - 1) {
            return isPadlindrome(l + 1, r - 1, s);
        } else {
            return true;
        }
    }
}