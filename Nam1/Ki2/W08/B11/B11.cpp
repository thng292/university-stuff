#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    SinglyLinkList<int>* head = NumberToList(n);

    std::cout << "List: ";
    WriteListToConsole(head);

    freeList(head);

}