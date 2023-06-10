#include "knightTour.h"

#include <memory.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static bool inboundCheck(int board_size, Pos pos)
{
    return pos.x >= 0 && pos.x < board_size && pos.y >= 0 && pos.y < board_size;
}

static bool fullBoardCheck(bool** board, int board_size)
{
    for (int i = 0; i < board_size; i++) {
        for (int j = 0; j < board_size; j++) {
            if (!board[i][j]) return false;
        }
    }
    return true;
}

static bool knightTour(bool** board, Pos currPos, int board_size, int movNum)
{
    static int moveX[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    static int moveY[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    if (fullBoardCheck(board, board_size)) {
        return true;
    }
    for (int i = 0; i < 8; i++) {
        currPos.x += moveX[i];
        currPos.y += moveY[i];
        if (inboundCheck(board_size, currPos) && !board[currPos.x][currPos.y]) {
            board[currPos.x][currPos.y] = true;
            bool res = knightTour(board, currPos, board_size, movNum + 1);
            board[currPos.x][currPos.y] = false;

            if (res) {
                printf("Move: %d, %d\n", currPos.x, currPos.y);
                return true;
            }
        }
        currPos.x -= moveX[i];
        currPos.y -= moveY[i];
    }
    return false;
}

void knightTourInit(int board_size)
{
    bool** board = malloc(board_size * sizeof(bool*));
    for (int i = 0; i < board_size; i++) {
        board[i] = malloc(board_size * sizeof(bool));
        memset(board[i], false, board_size * sizeof(bool));
    }
    for (int i = 0; i < board_size; i++) {
        for (int j = 0; j < board_size; j++) {
            board[i][j] = true;
            knightTour(board, (Pos){i, j}, board_size, 1);
            board[i][j] = false;
        }
    }
    for (int i = 0; i < board_size; i++) {
        free(board[i]);
    }
    free(board);
}