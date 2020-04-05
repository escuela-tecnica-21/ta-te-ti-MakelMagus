# ta-te-ti-MakelMagus

<h3>Ta-te-ti-MakelMagus created by GitHub Classroom</h3>

<p>
Hello, I'm not sure whether I should speak in english or Spanish.
<br>
Hola, no estoy seguro de si debería hablar en español o inglés.
<br>
Mi main() es el siguiente, las funciones las tengo todas en una carpeta aparte, la idea es transformar esa carpeta en una .lib, y luego convocarla junto al resto.
<br>
<br>
Nunca pude comprobar si el código funcionaba correctamente, debido a que no se como activar un compilador de manera correcta.
<br>
Antes utilizábamos Codeblocks, pero no me está identificando conio2.h, pese a que ya lo descargué y coloqué junto a las otras librerías.
</p>
<code><pre>
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
</pre></code>
