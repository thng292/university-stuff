#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    std::cout << "Enter list: ";
    SinglyLinkList<int>* head1 = ReadListFromConsole();
    std::cout << "Enter number: ";
    int n;
    std::cin >> n;

    auto tmp = search(head1, n);

    std::cout << "Enter file name to write: ";
    char* filename = new char[100];
    std::cin.clear();
    std::cin.ignore();
    std::cin.getline(filename, 100);
    std::ofstream file(filename);
    if (tmp) {
        file << "YES";
    } else {
        file << "NO";
    }
    delete[] filename;

    freeList(head1);
}