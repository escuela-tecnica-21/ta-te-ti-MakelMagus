#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void user_movement(cell,cell_size,player) {
  int x,y,cell_mod;
  cell_mod = cell % 3;
  x = cell_mod + 1;
  y = cell-cell_mod / 3;

  gotoxy( (x*cell_size) + base_x, (y*cell_size) + base_y);
  if (player == 1)
  {
    printf("X");
  } else {
    printf("O");
  }
}
