#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    char* fileName = new char[50];
    std::cout << "Enter file name: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head = ReadListFromFile<int>(fileName);

    removeDup(head);

    std::cout << "Enter file name to write to: ";
    std::cin.getline(fileName, 50);
    WriteListToFile(fileName, head);

    freeList(head);
    delete[] fileName;

}