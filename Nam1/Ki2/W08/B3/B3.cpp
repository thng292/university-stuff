#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    char* fileName = new char[50];
    std::cout << "Enter file name: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head = ReadListFromFile<int>(fileName);

    Pop(head);
    reverseList(&head);
    PushBack(&head, 0);

    std::cout << "Enter file name to write to: ";
    std::cin.getline(fileName, 50);
    WriteListToFile(fileName, head);

    freeList(head);
    delete[] fileName;

}