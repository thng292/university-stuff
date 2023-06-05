#include <iostream>
#include "addOne.h"

int main() {
    int* a = new int(2);
    addOne(a);
    std::cout << *a;
    delete a;
}