#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    char* fileName = new char[50];
    std::cout << "Enter file name: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head = ReadListFromFile<int>(fileName);

    std::cout << "Enter data to delete: ";
    int data;
    std::cin >> data;
    deleteNodes(&head, data);

    std::cout << "Enter file name to write to: ";
    std::cin.ignore();
    std::cin.getline(fileName, 50);
    WriteListToFile(fileName, head);

    freeList(head);
    delete[] fileName;

}