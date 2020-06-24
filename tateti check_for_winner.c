#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>

int check_for_winner(cell[]) {
  int counter = 0, winner = 0;

  for (counter = 0; counter < 3; counter++)
  {
    //horizontal check
    if( cell[ counter*3 ] == cell[ (counter*3) + 1 ] && cell[ counter*3 ] == cell[ counter*3 ] + 2)
    {
      winner = cell [counter];
      goto win;
    }
    //vertical check
    if( cell[ counter ] == cell [ counter + 3] && cell[ counter ] == cell [ counter + 6])
    {
      winner = cell [counter];
      goto win;
    }
  }
  //diagonal checks
  if ( (cell [0] == cell [4] && cell [0] == cell [8]) || (cell [2] == cell [4] && cell [2] == cell [6]) )
  {
    winner = cell [4];
    goto win;
  }

  win:
  return winner;
}
