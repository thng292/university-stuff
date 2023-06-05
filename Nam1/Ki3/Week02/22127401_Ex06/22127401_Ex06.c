#include <stdlib.h>
#include <stdio.h>
#include "knightTour.h"

int main() {
  int board_size = 5;
  printf("Input board_size: ");
  scanf("%d", &board_size);
  knightTourInit(board_size);
  return 0;
}
