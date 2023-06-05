#include <iostream>

#include "../SinglyLinkList.h"


int main() {
    char* fileName = new char[50];

    std::cout << "Enter file name contain list 1: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head1 = ReadListFromFile<int>(fileName);

    std::cout << "Enter file name contain list 2: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head2 = ReadListFromFile<int>(fileName);

    Pop(head1);
    JoinList(head1, head2);

    std::cout << "Enter file name to write to: ";
    std::cin.getline(fileName, 50);
    WriteListToFile(fileName, head1);

    freeList(head1);
    delete[] fileName;
}