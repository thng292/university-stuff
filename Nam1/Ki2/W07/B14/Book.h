#pragma once
#include "../SinglyLinkList.h"
#include <iostream>
#include <string.h>

struct Book {
    char Title[201];
    char Author[41];
    char ISBN[11];
    char Language[31];
    int YearPublished = 0;
    double Price = 0.0;
    int StockLevel = 0;
};

std::istream& operator>>(std::istream& is, Book& book) {
    is.clear();
    is.ignore();
    std::cout << "Enter book's title: ";
    is.clear();
    is.getline(book.Title, 200);
    std::cout << "Enter book's author: ";
    is.clear();
    is.getline(book.Author, 40);
    std::cout << "Enter book's ISBN: ";
    is.clear();
    is.getline(book.ISBN, 10);
    std::cout << "Enter book's language: ";
    is.clear();
    is.getline(book.Language, 30);
    std::cout << "Enter book's year published: ";
    is.clear();
    is >> book.YearPublished;
    std::cout << "Enter book's price: ";
    is >> book.Price;
    std::cout << "Enter book's stock level: ";
    is >> book.StockLevel;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    std::cout << "Book:\n";
    std::cout << "Title: " << book.Title << '\n';
    std::cout << "ISBN: " << book.ISBN << '\n';
    std::cout << "Author: " << book.Author << '\n';
    std::cout << "Language: " << book.Language << '\n';
    std::cout << "Year Published: " << book.YearPublished << '\n';
    std::cout << "Price: " << book.Price << "$\n";
    std::cout << "Stock level: " << book.StockLevel << '\n';
    return os;
}

void InsertOrUpdateBook(SinglyLinkList<Book>** head, const Book& book) {
    Book* found = FindInList(*head, [&book](Book& b) {
        return !strcmp(b.ISBN, book.ISBN);
        });
    if (found) {
        found->StockLevel = book.StockLevel;
    } else {
        PushBack(head, book);
    }
}

bool BuyBook(SinglyLinkList<Book>* head, char* ISBN) {
    Book* found = FindInList(head, [&ISBN](Book& book) {
        return !strcmp(book.ISBN, ISBN);
        });
    if (found && found->StockLevel) {
        found->StockLevel--;
        return true;
    }
    return false;
}

SinglyLinkList<Book>* FindBookByName(SinglyLinkList<Book>* head, char* name) {
    while (head) {
        if (strstr(head->data.Title, name)) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

void RemoveAllBook(SinglyLinkList<Book>** head, int k) {
    deleteNodes(head, [k](Book& book) {
        return book.StockLevel < k;
        });
}