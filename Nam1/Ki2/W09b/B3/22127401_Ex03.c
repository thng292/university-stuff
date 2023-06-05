#include <stdio.h>
#include <string.h>

#include "Helper.h"

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf_s("%s", s);
    if (isPalindrome(0, strlen(s) - 1, s)) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
    return 0;
}