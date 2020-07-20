#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio2.h>

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
