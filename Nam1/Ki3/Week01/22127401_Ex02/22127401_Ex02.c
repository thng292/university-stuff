#include <stdbool.h>
#include <stdio.h>

#include "isPadlindrome.h"

int main()
{
    const char* str = "aaaaa test isPadlindrome";
    int l = 0;
    int r = 4;
    if (isPadlindrome(0, 4, str)) {
        printf("%s is a padlindrome form %d to %d\n", str, l, r);
    } else {
        printf("%s is not a padlindrome form %d to %d\n", str, l, r);
    }
    return 0;
}