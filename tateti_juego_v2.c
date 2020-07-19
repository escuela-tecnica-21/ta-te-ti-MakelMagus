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
    player_turn();
    draw_move();
    if(winner() != 0)
    {
      goto end;
    }
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
