#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    char* fileName = new char[50];
    std::cout << "Enter file name: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head1 = ReadListFromFile<int>(fileName);

    std::cout << List2Int(head1) << '\n';

    freeList(head1);
    delete[] fileName;
}