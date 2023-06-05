#include <iostream>

#include "../SinglyLinkList.h"

void insertToList(SinglyLinkList<int>* head, int data) {
    SinglyLinkList<int>* prev = nullptr;
    while (head && head->data < data) {
        prev = head;
        head = head->next;
    }
    head = prev->next;
    prev->next = new SinglyLinkList<int>;
    prev->next->data = data;
    prev->next->next = head;
}

int main() {
    char* fileName = new char[50];
    std::cout << "Enter file name: ";
    std::cin.getline(fileName, 50);
    SinglyLinkList<int>* head = ReadListFromFile<int>(fileName);

    std::cout << "Enter data to insert: ";
    int data;
    std::cin >> data;

    insertToList(head, data);

    std::cout << "Enter file name to write to: ";
    std::cin.ignore();
    std::cin.getline(fileName, 50);
    WriteListToFile(fileName, head);

    freeList(head);
    delete[] fileName;
}