#include <stdio.h>
#include <stdlib.h>

//palabras que significan valores
int círculo = 79, cruz = 88, vacio = 255
int arriba_izquierda = 0, arriba = 1, arriba_derecha = 2, izquierda = 3, centro = 4, derecha = 5, abajo_izquierda = 6, abajo = 7, abajo_derecha = 8;

int controlar_posicion(int tablero[], posicion)
{
  if (tablero[posicion] == vacio)
  {
    return posicion;
  } else
  {
    return -1;
  }
}

int controlar_bordes(tablero[])
{
  if (controlar_posicion(tablero[], arriba) != -1)
  {
    return arriba;
  } else
  if (controlar_posicion(tablero[], izquierda) != -1)
  {
    return izquierda;
  } else
  if (controlar_posicion(tablero[], derecha) != -1)
  {
    return derecha;
  } else
  if (controlar_posicion(tablero[], abajo) != -1)
  {
    return abajo;
  } else
  {
    return -1;
  }
}

int controlar_esquinas(tablero[])
{
  if (controlar_posicion(tablero[], arriba_izquierda) != -1)
  {
    return arriba_izquierda;
  } else
  if (controlar_posicion(tablero[], arriba_derecha) != -1)
  {
    return arriba_derecha;
  } else
  if (controlar_posicion(tablero[], abajo_izquierda) != -1)
  {
    return abajo_izquierda;
  } else
  if (controlar_posicion(tablero[], abajo_derecha) != -1)
  {
    return abajo_derecha;
  } else
  {
    return -1;
  }
}

int controlar_centro(tablero[])
{
  if (controlar_posicion(tablero[], centro) != -1)
  {
    return centro;
  } else
  return -1;
}

int movimiento_de_la_ia (int tablero[])
{

  int auxiliar=0, contador=0, contador2=0, posiciones_posibles=0, posiciones_optimas=0, posicion_final=0;

  //buscar la cantidad de movimientos posibles
  for (contador = 0; contador < 9; contador++)
  {
    if (tablero[contador] == vacio)
    {
      posiciones_posibles++;
    }
  }

        //Prioridad de movimientos para cuando no encuentra ninguno clave:

  // De ser posible, controlar un borde. (contador reemplaza en orden a arriba, izquierda, derecha y abajo)
  for (contador = 1; contador < 8; contador = contador+2)
  {

  }

  //de ser posible, controlar las esquinas.


  //de ser posible, controlar el centro.
  posicion_final = controlar_posicion(tablero[], centro);


  //detect if it can win by completing a row
  for (i2=0;i2<3;i2++)
  {
    for (i=0;i<3;i++)
    {

    }
  }

  //detect if it can win by completing a column
  for (i=0;i<3;i++)
  {
    for (i2=0;i2<3;i2++){

    }
  }

  //detect if it can win by completing a diagonal
  //left-right
  for (i=0;i<3;i++){

  }

  //right-left
  i = 3;
  for (i2=0;i2<3;i2++){i--;}
  finish_move:

  endIA:
  return final_placement;
}

/*
General idea:
when two of the same values are in the same row, column or diagonal, the next move is placed in the remaining spot.
*/
