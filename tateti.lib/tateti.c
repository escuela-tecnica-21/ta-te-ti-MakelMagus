#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <base_functions.h>

void draw_title(){
  gotoxy(30,8);
  printf("TA-TE-TI por Micael Garcia");
};


int select_AI_type(int AI_type){
    //Used to alternate between the different AIs
  gotoxy(20,10);
  printf("Choose AI: Random = 1, Complex = 2\n");
  scanf("%d",&AI_type);
  return AI_type;
};


void cleanup_screen_from(height){
  int counter=0;
  for(counter=0;counter < (35-height);counter++)
  {
    draw_horizontal_line(0,height+counter,120);
  }
};


void draw_board(){
    //don't know how to break this up even more without overcomplicating stuff.
  draw_vertical_line(9,2,11);
  draw_vertical_line(13,2,11);
  draw_horizontal_line(5,6,11);
  draw_horizontal_line(5,10,11);
};


int winner(){

};


int player_turn(){
  int cell=-1;
    //ask the player for the input
  gotoxy(1;18);
  printf("You play on positon: ");
  scanf("%d",&cell);
    //clean the test
  cleanup_screen_from(17);
  return cell-1;
};


int AI_turn(){

};




void declare_winner(){

};
