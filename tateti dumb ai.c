#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>

int dumb_ai_movement(cell[]) {
  int random=0, possible_play=0;
  while (possible_play == 0)
  {
    random = rand(0) % 8;
    if (cell[random] == 0)
    {
      possible_play = 1;
    }
  }
  return random;
}
