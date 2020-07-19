#include <stdio.h>
#include <stdlib.h>
#include <tateti.h>

main()
{
  //menu
  draw_title();
  select_AI_type();
  cleanup_screen();
  //game
  draw_board();
  while(winner() == 0)
  {
    //asks the player for an input
    player_turn();
    draw_move();
    //end if the player wins
    if(winner() != 0)
    {
      goto end;
    }
    //reads the board and decides the position
    AI_turn();
    draw_move();
  }
  //winner declared
  end:
  cleanup_screen();
  draw_title();
  declare_winner();
  /* Idea:
  *   if (winner() == 1)
  *   {
  *     printf("The human player won.");
  *   } else
  *   if (winner() == 2)
  *   {
  *     printf("The machine shall rise from this victory, and control the world!");
  *   }
  */
}
