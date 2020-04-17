#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>

//miscellaneous variables
int counter=0;
//graphic variables
int base_x=0, base_y=0, cell_size=3
int table_size = cell_size*3;
int end_of_table_x = table_size + base_x;
int end_of_table_y = table_size + base_y;
//game variables
int cell[9], user_movement=0, winner=0, turn=0;
//funciones
void user_movement_place(user_movement,cell_size) {
  int x,y,cell_mod;
  cell_mod = cell % 3;
  x = cell_mod + 1;
  y = cell-cell_mod / 3;

  gotoxy( (x*cell_size) + base_x, (y*cell_size) + base_y);
  printf("X");
}
void draw_horizontal_line(size,y_position){
  i=0;
  for (i = 0; i < size; i++) {
    gotoxy(i+1;y_position);
    printf("%c",196);
  }
}
void draw_vertical_line(size,x_position) {
  i=0;
  for (i=0; i < size; i++) {
    gotoxy(x_position,i+1);
    printf("%c",124);
  }
}
void write_table(x,y,cell_size){
  counter=0;
  for (i=0;i<2;i++)
  {
    draw_horizontal_line(cell_size*3,y+cell_size*(i+1));
    draw_vertical_line(cell_size*3,x+cell_size*(i+1));
  }
}
int check_for_winner(cell[]) {
  for (counter = 0; counter < 3; counter++){
    //horizontal check
    if( cell[ counter*3 ] == cell[ (counter*3) + 1 ] && cell[ counter*3 ] == cell[ counter*3 ] + 2){
      winner = cell [counter];
      goto win;
    }
    //vertical check
    if( cell[ counter ] == cell [ counter + 3] && cell[ counter ] == cell [ counter + 6]){
      winner = cell [counter];
      goto win;
    }
  }
  //diagonal checks
  if ( (cell [0] == cell [4] && cell [0] == cell [8]) || (cell [2] == cell [4] && cell [2] == cell [6]) ){
    winner = cell [4];
    goto win;
  }

  win:
  return winner;
}
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

//juego
int main() {

  //set vectors to 0
  for (counter = 0; counter < 9 ;counter++)
  {
    cell[counter] = 0;
  }

  write_table(base_x,base_y,cell_size);
  //ask the player for input
  for (turn = 0; turn < 9; turn += 2){
    if (check_for_winner(cell) == 0)
    {
      gotoxy(end_of_table_x+1,end_of_table_y+1);
      scanf("%d",&user_movement);
      user_movement_place(user_movement,cell_size,1);
    } else
    {
      goto end;
    }
    if (check_for_winner(cell) == 0 && turn < 9)
    {
      user_movement_place(dumb_ai_movement(cell),cell_size,2);
    } else
    {
      goto end;
    }
  }

  end:
  systemclear();
  printf("And the winner is player %d",check_for_winner);
  scanf("%d",&counter);
  return 0;
}
