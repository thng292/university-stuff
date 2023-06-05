#include <iostream>
#include "isPalindrome.h"

int main() {
    char succ[] = "919101919";
    char fail[] = "acb";
    std::cout << (isPalindrome(succ) ? "True" : "False") << '\n';
    std::cout << (isPalindrome(fail) ? "True" : "False") << '\n';
}