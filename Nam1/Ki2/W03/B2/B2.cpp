#include <iostream>
#include "doSomething.h"

int main() {
    int* a = new int(10);
    int* b = new int(20);
    std::cout << doSomething(a, b) << '\n';
    std::cout << *a << ' ' << *b;
    delete a;
    delete b;
}