#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    char* fileName = new char[50];
    std::cout << "Enter file name: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head = ReadListFromFile<int>(fileName);

    Pop(head);
    SinglyLinkList<int>* nhead = SplitList(head);

    PushBack(&head, 0);
    PushBack(&nhead, 0);
    std::cout << "List 1: ";
    WriteListToConsole(head);
    std::cout << "List 2: ";
    WriteListToConsole(nhead);

    freeList(head);
    freeList(nhead);
    delete[] fileName;
}