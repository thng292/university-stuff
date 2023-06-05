#include "Theater.h"

bool ReadPrice(Theater* theater, std::istream& is) {
    if (is.fail()) {
        return 0;
    } else {
        for (size_t i = 0; i < 15; i++) {
            is >> theater->priceOfRow[i];
        }
        return 1;
    }
}

Theater* initTheater(std::istream& is) {
    Theater* res = new Theater;
    res->priceOfRow = new int[15];
    ReadPrice(res, is);
    res->Seats = (Seat**)initArr(15, sizeof(Seat*));
    for (size_t i = 0; i < 15; i++) {
        res->Seats[i] = (Seat*)initArr(30, sizeof(Seat));
        memset(res->Seats[i], 0, 30 * sizeof(bool));
    }
    return res;
}

void cleanTheater(Theater* theater) {
    delete[] theater->priceOfRow;
    for (size_t i = 0; i < 15; i++) {
        freeArr(theater->Seats[i]);
    }
    freeArr((void*)theater->Seats);
}

void PrintSeatsChart(Theater* theater) {
    std::cout << "\n        ";
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 1; j < 10; j++) {
            std::cout << j;
        }
        std::cout << 0;
    }
    std::cout << '\n';
    for (size_t i = 0; i < 15; i++) {
        std::cout << "Row  ";
        std::cout << std::setw(2) << std::right << std::setfill('0') << i + 1 << ' ';
        for (size_t j = 0; j < 30; j++) {
            std::cout << (theater->Seats[i][j].isSold ? '*' : '#');
        }
        std::cout << '\n';
    }
}

bool CheckSeatIsSold(Theater* theater, int row, int col) {
    if (row >= 0 && row < 15 && col >= 0 && col < 30) {
        return theater->Seats[row][col].isSold;
    } else {
        return true;
    }
}

int CalcRevenue(Theater* theater) {
    int res = 0;
    for (size_t i = 0; i < 15; i++) {
        for (size_t j = 0; j < 30; j++) {
            res += theater->Seats[i][j].isSold * theater->priceOfRow[i];
        }
    }
    return res;
}

bool Buy(Theater* theater, int row, int col) {
    if (CheckSeatIsSold(theater, row, col)) {
        return false;
    } else {
        theater->Seats[row][col].isSold = true;
        theater->soldSeats++;
        return true;
    }
}

int GetPrice(Theater* theater, int row) {
    return theater->priceOfRow[row];
}

int GetAvailableSeatInRow(Theater* theater, int row) {
    int res = 30;
    for (int i = 0; i < 30; i++) {
        res -= CheckSeatIsSold(theater, row, i);
    }
    return res;
}
