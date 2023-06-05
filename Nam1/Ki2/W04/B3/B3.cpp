#include <iostream>
#include <fstream>
#include <iomanip>
#include "Theater.h"

void MainLoop(Theater* theater);

int main() {
    std::cout << "Enter the file name to read from (leave a blank to use standard input): ";
    char buff[100] = { 0 };
    std::cin.getline(buff, 100);
    std::ifstream inp(buff);
    Theater* theater;
    if (inp.fail()) {
        std::cout << "Enter seat prices for each row: ";
        theater = initTheater(std::cin);
    } else {
        theater = initTheater(inp);
    }
    MainLoop(theater);
    cleanTheater(theater);
}

void PrintMenu();
void BuyHandle(Theater* theater);
void ViewHandle(Theater* theater);
void InfoHandle(Theater* theater);
void SaleHandle(Theater* theater);

void MainLoop(Theater* theater) {
    char inp = 0;
    while (inp != 'x' && inp != 'X') {
        system("cls");
        PrintSeatsChart(theater);
        std::cout << std::setw(30) << std::setfill('-') << std::right << '\n';
        PrintMenu();
        std::cin.get(inp);
        switch (inp) {
        case 'b':
        case 'B':
            BuyHandle(theater);
            break;
        case 'v':
        case 'V':
            ViewHandle(theater);
            break;
        case 'i':
        case 'I':
            InfoHandle(theater);
            break;
        case 's':
        case 'S':
            SaleHandle(theater);
            break;
        }
        std::cout << "Press any key to continue.\n";
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cin.get();
    }
}


void PrintMenu() {
    std::cout << "MENU\n";
    std::cout << "B - Buy seat on row x and column y\n";
    std::cout << "V - View number of seat have been sold\n";
    std::cout << "I - View number of seat available in each row and the auditorium\n";
    std::cout << "S - View ticket sale\n";
    std::cout << "X - Exit the program\n";
    std::cout << std::setw(30) << std::setfill('-') << std::right << '\n';
    std::cout << "Enter your option: ";
}

void BuyHandle(Theater* theater) {
    int row, col;
    std::cout << "Which seat do you want to buy?\n";
    std::cin >> row >> col;
    row--;
    col--;
    if (Buy(theater, row, col)) {
        std::cout << "The price is: " << GetPrice(theater, row) << '\n';
    } else {
        std::cout << "This seat is not valid or it has already been bought!\n";
    }
}

void ViewHandle(Theater* theater) {
    std::cout << theater->soldSeats << " have been sold!\n";
}

void InfoHandle(Theater* theater) {
    for (int i = 0; i < 15; i++) {
        std::cout << "There is " << GetAvailableSeatInRow(theater, i) << " available seat in row " << i + 1 << '\n';
    }
}

void SaleHandle(Theater* theater) {
    std::cout << "The total of all ticket sale is: " << CalcRevenue(theater) << '\n';
}