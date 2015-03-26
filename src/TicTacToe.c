#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "Tictactoe.h"

/*
    Simple Tic tac toe game.
    This game dosen't uses any GUI and no menu. When the execution starts . The game begins to play.
    This code is open-source , anybody is free to edit it and add new features.

    Controls:
    1 -> Left-Top Corner
    2 -> Middle-Top
    3 -> Right-Top Corner
    4 -> Left-Middle
    5 -> Center
    6 -> Right-Middle
    7 -> Left-Bottom Corner
    8 -> Middle-Bottom
    9 -> Right-Bottom Corner
*/

void main()
{
    struct Matrix * game_view = (struct Matrix * ) malloc(sizeof(struct Matrix) * 1);

    game_view->elements = (char *) malloc(sizeof(char) * 9);

    int x = 0;

    for (x = 0;x < 9;x++)
    {
        game_view->elements[x] = ' ';
    }

    jmp:

      if (getElementsCount(*game_view) < 9)
      {
          int game_state = checkState(*game_view);
	       		
          if (game_state == 1)
          {
          	  Sleep(1000);
              system("cls");
              printf("You won the game!");
              Sleep(1000);
              exit(1);
          }
          else if (game_state == 2)
          {
              Sleep(1000);
              system("cls");
              printf("You lost the game!!");
              Sleep(1000);
              exit(1);
          }

         if (kbhit())
         {
             if (!processInput(*game_view, getch()))
             {
                 printf("\nWrong Input...");
                 Sleep(500);
             }
         }

         drawMatrix(*game_view);

         Sleep(1000);
      }
      else
      {
         int game_state = checkState(*game_view);

		 system("cls");
		 Sleep(1000);

          if (game_state == 1)
          {
              printf("You won the game!");
          }
          else if (game_state == 2)
          {
              printf("You lost the game!!");
          }
          else
          {
              printf("Game draw!!");
          }
          
          Sleep(1000);
          exit(1);
      }

    goto jmp;
}
