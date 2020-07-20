#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

void draw_horizontal_line(int x_position,int y_position,int length)
{
  int counter = 0;

  gotoxy(x_position,y_position);

    // prueba diferente longitudes para agilizar la escritura.
    // el método menos burdo de realizar esto sería guardando la información de cuantas veces es posible restarle X al largo, y luego dibujar la línea de X, cuantas veces sea posible.
  //multiplo de 7, escribe 7 caracteres.
  if (length % 7 == 0)
  {
    for(counter = length; counter > 0; counter = counter-7)
    {
      printf("%c%c%c%c%c%c%c",196,196,196,196,196,196,196);
    }
  } else
  //multiplo de 6, escribe 6 caracteres.
  if (length % 6 == 0)
  {
    for(counter = length; counter > 0; counter = counter-6)
    {
      printf("%c%c%c%c%c%c",196,196,196,196,196,196);
    }
  } else
  //multiplo de 5, escribe 5 caracteres.
  if (length % 5 == 0 )
  {
    for(counter = length; counter > 0; counter = counter-5)
    {
      printf("%c%c%c%c%c",196,196,196,196,196);
    }
  } else
  //etc.
  if (length % 4 == 0)
  {
    for(counter = length; counter > 0; counter = counter-4)
    {
      printf("%c%c%c%c",196,196,196,196);
    }
  }
  if (length % 3 == 0)
  {
    for(counter = length; counter > 0; counter = counter-3)
    {
      printf("%c%c%c",196,196,196);
    }
  } else
  if (length % 2 == 0 )
  {
    for(counter = length; counter > 0; counter = counter-2)
    {
      printf("%c%c",196,196);
    }
  } else
  {
    for(counter = length; counter > 0; counter--)
    {
      printf("%c",196);
    }
  }
}

void draw_vertical_line(int x_position,int y_position,int length)
{
  int counter = 0;

  //goes to the specified position and prints the line downwards, one character at a time.
  for(counter = 0; conter < length; counter++)
  {
    gotoxy(x_position,y_position + counter);
    printf("%c",196);
  }
}
