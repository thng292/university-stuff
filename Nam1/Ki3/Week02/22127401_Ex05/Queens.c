#include "Queens.h"

#include <stdio.h>
#include <stdlib.h>

void PrintBoard(bool** board, int board_size)
{
    for (int i = 0; i < board_size; i++) {
        for (int j = 0; j < board_size; j++) {
            if (board[i][j]) {
                printf("A queen at %d, %d\n", i, j);
            }
        }
    }
}

bool CheckRow(bool** board, int board_size, int row)
{
    for (int i = 0; i < board_size; i++) {
        if (board[row][i]) {
            return false;
        }
    }
    return true;
}

bool CheckCol(bool** board, int board_size, int col)
{
    for (int i = 0; i < board_size; i++) {
        if (board[i][col]) {
            return false;
        }
    }
    return true;
}

bool CheckBound(int board_size, int row, int col)
{
    return row >= 0 && col >= 0 && row < board_size && col < board_size;
}

int min(int a, int b) { return a > b ? b : a; }

bool CheckDiagonal1(bool** board, int board_size, int row, int col)
{
    int tmp = min(row, board_size - col - 1);
    int i = row - tmp;
    int j = col + tmp;
    for (; i < board_size && j < board_size; i++, j--) {
        if (!CheckBound(board_size, i, j)) {
            return false;
        }
    }
    return true;
}

bool CheckDiagonal2(bool** board, int board_size, int row, int col)
{
    int tmp = min(row, col);
    int i = row - tmp;
    int j = col - tmp;
    for (; i < board_size && j < board_size; i++, j++) {
        if (!CheckBound(board_size, i, j)) {
            return false;
        }
    }
    return true;
}

bool CanPlace(bool** board, int board_size, int row, int col)
{
    return CheckRow(board, board_size, row) &&
           CheckCol(board, board_size, col) &&
           CheckDiagonal1(board, board_size, row, col) &&
           CheckDiagonal2(board, board_size, row, col);
}

bool Place(bool** board, int board_size, int row)
{
    if (row >= board_size) {
        PrintBoard(board, board_size);
        return 1;
    }
    for (int col = 0; col < board_size; col++) {
        if (CanPlace(board, board_size, row, col)) {
            board[row][col] = true;
            bool res = Place(board, board_size, row + 1);
            board[row][col] = false;
            if (res) {
                return true;
            }
        }
    }
    return false;
}

void NQueens(int board_size)
{
    bool** board = malloc(sizeof(bool*) * board_size);
    for (int i = 0; i < board_size; i++) {
        board[i] = malloc(sizeof(bool) * board_size);
    }
    Place(board, board_size, 0);
    for (int i = 0; i < board_size; i++) {
        free(board[i]);
    }
    free(board);
}
