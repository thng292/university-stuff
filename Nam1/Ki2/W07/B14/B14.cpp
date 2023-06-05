#include <iostream>

#include "Book.h"

int main() {
    SinglyLinkList<Book>* library = nullptr;
    int choice = 0;
    while (1) {
        std::cout << "Menu: \n";
        std::cout << "1. Insert or update a book\n";
        std::cout << "2. Buy a book\n";
        std::cout << "3. Find a book by name\n";
        std::cout << "4. Remove all books with stock level less than k\n";
        std::cout << "5. Exit\n";

        std::cout << "Your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            Book book;
            std::cout << "Enter book information: \n";
            std::cin >> book;
            InsertOrUpdateBook(&library, book);
        } break;
        case 2: {
            char ISBN[11];
            std::cout << "Enter ISBN: ";
            std::cin >> ISBN;
            if (BuyBook(library, ISBN)) {
                std::cout << "Success!\n";
            } else {
                std::cout << "OUT OF STOCK!\n";
            }
        } break;
        case 3: {
            char name[201];
            std::cout << "Enter book name: ";
            std::cin.clear();
            std::cin.ignore();
            std::cin.getline(name, 201);
            auto found = FindBookByName(library, name);
            while (found) {
                std::cout << found->data << '\n';
                found = FindBookByName(found->next, name);
            }
        } break;
        case 4: {
            int k;
            std::cout << "Enter k: ";
            std::cin >> k;
            RemoveAllBook(&library, k);
            std::cout << "Removed all book with stock level less than k!\n";
        } break;
        case 5:
            return 0;
        }
        system("pause");
        system("cls");
    }
    return 0;
}