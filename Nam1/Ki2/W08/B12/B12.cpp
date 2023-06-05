#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    std::cout << "Enter list 1: ";
    SinglyLinkList<int>* head1 = ReadListFromConsole();
    std::cout << "Enter list 2: ";
    SinglyLinkList<int>* head2 = ReadListFromConsole();

    auto tmp = search(head1, end(head2)->data);

    if (tmp) {
        std::cout << "Enter file name to write: ";
        char* filename = new char[100];
        std::cin.clear();
        std::cin.ignore();
        std::cin.getline(filename, 100);
        std::ofstream file(filename);
        file << tmp->data << std::endl;
        delete[] filename;
    } else {
        std::cout << "Not found" << std::endl;
    }

    freeList(head1);
    freeList(head2);
}