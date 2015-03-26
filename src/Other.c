#include "Tictactoe.h"
#include <stdio.h>

int getElementsCount(struct Matrix obj)
{
	char *rows_ptr = obj.elements;
    int count = 0;
    int  x = 0;

    for (x = 0; x < 9;x++)
    {
        if (rows_ptr[x] != ' ')
        {
            count++;
        }
    }

    return count;
}

void drawMatrix(struct Matrix obj)
{
	  system("cls");

    int cntr = 0;

     printf("Tic Tac Toe DOS. \n\n\n");

    for(cntr = 0;cntr < 9;cntr += 3)
    {
       printf("           %c   __|__   %c   __|__   %c   \n",obj.elements[cntr],obj.elements[cntr + 1],obj.elements[cntr + 2]);
    }

       printf("                 |           |             \n");
       printf("Give Input ->");
} 
