#include <iostream>
#include <iomanip>
#include "Seat.h"
#include "../DynamicArr.h"

const int totalSeat = 15 * 30;

struct Theater {
    Seat** Seats = 0;
    int soldSeats = 0;
    int* priceOfRow = 0;
};

bool ReadPrice(Theater* theater, std::istream& is);

Theater* initTheater(std::istream& is);

void cleanTheater(Theater* theater);

void PrintSeatsChart(Theater* theater);

bool CheckSeatIsSold(Theater* theater, int row, int col);

int CalcRevenue(Theater* theater);

bool Buy(Theater* theater, int row, int col);

int GetPrice(Theater* theater, int row);

int GetAvailableSeatInRow(Theater* theater, int row);