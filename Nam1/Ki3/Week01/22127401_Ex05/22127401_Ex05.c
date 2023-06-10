#include "Queens.h"
#include <stdio.h>

int main() {
  int board_size = 0;
  printf("Input board_size: ");
  scanf("%d", &board_size);
  NQueens(board_size);
  return 0;
}