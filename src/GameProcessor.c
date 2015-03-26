#include "Tictactoe.h"
#include <stdio.h>

int processInput(struct Matrix obj,char input)
{
	if (input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '7' && input != '8' && input !='9')
   {
       return 0;
   }
   else
   {
       if (input == '1')
       {
           if (obj.elements[0] == ' ')
           {
              obj.elements[0] = 'X';
              processCPU(obj, 1);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '2')
       {
           if (obj.elements[1] == ' ')
           {
                 obj.elements[1] = 'X';
                 processCPU(obj, 2);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '3')
       {
           if (obj.elements[2] == ' ')
           {
 obj.elements[2] = 'X';
  processCPU(obj, 3);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '4')
       {
           if (obj.elements[3] == ' ')
           {
 obj.elements[3] = 'X';
  processCPU(obj, 4);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '5')
       {
           if (obj.elements[4] == ' ')
           {
 obj.elements[4] = 'X';
  processCPU(obj, 5);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '6')
       {
           if (obj.elements[5] == ' ')
           {
 obj.elements[5] = 'X';
  processCPU(obj,6 );
           }
           else
           {
               return 0;
           }
       }
       else if (input == '7')
       {
           if (obj.elements[6] == ' ')
           {
 obj.elements[6] = 'X';
  processCPU(obj, 7);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '8')
       {
           if (obj.elements[7] == ' ')
           {
 obj.elements[7] = 'X';
  processCPU(obj, 8);
           }
           else
           {
               return 0;
           }
       }
       else if (input == '9')
       {
           if (obj.elements[8] == ' ')
           {
 obj.elements[8] = 'X';
  processCPU(obj, 9);
           }
           else
           {
               return 0;
           }
       }
       // Correct Input.
	}
}

/*
	This checks the current state of the game board.
*/

int checkState(struct Matrix obj)
{
	 // Pattern0
    if (obj.elements[0] == 'X' && obj.elements[1] == 'X' && obj.elements[2] == 'X')
    {
        return 1;
    }
    else if (obj.elements[0] == 'O' && obj.elements[1] == 'O' && obj.elements[2] == 'O')
    {
        return 2;
    }

    //Pattern1
    if (obj.elements[3] == 'X' && obj.elements[4] == 'X' && obj.elements[5] == 'X')
    {
        return 1;
    }
    else if (obj.elements[3] == 'O' && obj.elements[4] == 'O' && obj.elements[5] == 'O')
    {
        return 2;
    }

    // Pattern3
    if (obj.elements[6] == 'X' && obj.elements[7] == 'X' && obj.elements[8] == 'X')
    {
        return 1;
    }
    else if (obj.elements[6] == 'O' && obj.elements[7] == 'O' && obj.elements[8] == 'O')
    {
        return 2;
    }

    // Pattern4
    if (obj.elements[0] == 'X' && obj.elements[3] == 'X' && obj.elements[6] == 'X')
    {
        return 1;
    }
    else if (obj.elements[0] == 'O' && obj.elements[3] == 'O' && obj.elements[6] == 'O')
    {
        return 2;
    }

    // Pattern5
    if (obj.elements[1] == 'X' && obj.elements[4] == 'X' && obj.elements[7] == 'X')
    {
        return 1;
    }
    else if (obj.elements[1] == 'O' && obj.elements[4] == 'O' && obj.elements[7] == 'O')
    {
        return 2;
    }

    // Pattern6
    if (obj.elements[2] == 'X' && obj.elements[5] == 'X' && obj.elements[8] == 'X')
    {
        return 1;
    }
    else if (obj.elements[2] == 'O' && obj.elements[5] == 'O' && obj.elements[8] == 'O')
    {
        return 2;
    }

    // Pattern7
    if (obj.elements[0] == 'X' && obj.elements[4] == 'X' && obj.elements[8] == 'X')
    {
        return 1;
    }
    else if (obj.elements[0] == 'O' && obj.elements[4] == 'O' && obj.elements[8] == 'O')
    {
        return 2;
    }

    // Pattern8
    if (obj.elements[2] == 'X' && obj.elements[4] == 'X' && obj.elements[6] == 'X')
    {
        return 1;
    }
    else if (obj.elements[2] == 'O' && obj.elements[4] == 'O' && obj.elements[6] == 'O')
    {
        return 2;
    }

    return 0;
}

/* 
	This handles the computer's chance.
*/

void processCPU(struct Matrix obj,int user_input)
{
    if (user_input == 1)
    {
       // Level01
       if (obj.elements[1] == 'X' && obj.elements[2] == ' ')
       {
           obj.elements[2] = 'O';
       }
       else if (obj.elements[2] == 'X' && obj.elements[1] == ' ')
       {
           obj.elements[1] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[3] == 'X' && obj.elements[6] == ' ')
           {
               obj.elements[6] = 'O';
           }
           else if (obj.elements[6] == 'X' && obj.elements[3] == ' ')
           {
               obj.elements[3] = 'O';
           }
           else
           {
               // Level03
               if (obj.elements[4] == 'X' && obj.elements[8] == ' ')
               {
                   obj.elements[8] = 'O';
               }
               else if (obj.elements[8] == 'X' && obj.elements[4] == ' ')
               {
                   obj.elements[4] = 'O';
               }
               else
               {
                   //Try Corners
                   if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
               }
           }
       }
    }
    else if (user_input == 2)
    {
        // Level01
       if (obj.elements[0] == 'X' && obj.elements[2] == ' ')
       {
           obj.elements[2] = 'O';
       }
       else if (obj.elements[2] == 'X' && obj.elements[0] == ' ')
       {

           obj.elements[0] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[4] == 'X' && obj.elements[7] == ' ')
           {
               obj.elements[7] = 'O';
           }
           else if (obj.elements[7] == 'X' && obj.elements[4] == ' ')
           {
               obj.elements[4] = 'O';
           }
           else
           {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                       obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
             }
        }
    }
    else if (user_input == 3)
    {
        // Level01
       if (obj.elements[1] == 'X' && obj.elements[0] == ' ')
       {
           obj.elements[0] = 'O';
       }
       else if (obj.elements[0] == 'X' && obj.elements[1] == ' ')
       {
           obj.elements[1] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[4] == 'X' && obj.elements[6] == ' ')
           {
               obj.elements[6] = 'O';
           }
           else if (obj.elements[6] == 'X' && obj.elements[4] == ' ')
           {
               obj.elements[4] = 'O';
           }
           else
           {
               // Level03
               if (obj.elements[5] == 'X' && obj.elements[8] == ' ')
               {
                   obj.elements[8] = 'O';
               }
               else if (obj.elements[8] == 'X' && obj.elements[5] == ' ')
               {
                   obj.elements[5] = 'O';
               }
               else
               {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                       obj.elements[0] = 'O';
                   }

                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
               }
           }
       }
    }
    else if (user_input == 4)
    {
         // Level01
       if (obj.elements[4] == 'X' && obj.elements[5] == ' ')
       {
           obj.elements[5] = 'O';
       }
       else if (obj.elements[5] == 'X' && obj.elements[4] == ' ')
       {
           obj.elements[4] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[0] == 'X' && obj.elements[6] == ' ')
           {
               obj.elements[6] = 'O';
           }
           else if (obj.elements[6] == 'X' && obj.elements[0] == ' ')
           {
               obj.elements[0] = 'O';
           }
           else
           {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                       obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
               }
           }
       }
       else if (user_input == 5)
       {
         // Level01
       if (obj.elements[0] == 'X' && obj.elements[8] == ' ')
       {
           obj.elements[8] = 'O';
       }
       else if (obj.elements[8] == 'X' && obj.elements[0] == ' ')
       {
           obj.elements[0] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[3] == 'X' && obj.elements[5] == ' ')
           {
               obj.elements[5] = 'O';
           }
           else if (obj.elements[5] == 'X' && obj.elements[3] == ' ')
           {
               obj.elements[3] = 'O';
           }
           else
           {
               // Level03
               if (obj.elements[2] == 'X' && obj.elements[6] == ' ')
               {
                   obj.elements[6] = 'O';
               }
               else if (obj.elements[6] == 'X' && obj.elements[2] == ' ')
               {
                   obj.elements[2] = 'O';
               }
               else
               {
                   if (obj.elements[1] == 'X' && obj.elements[7] == ' ')
                   {
                       obj.elements[7] = 'O';
                   }
                   else if (obj.elements[7] == 'X' && obj.elements[1] == ' ')
                   {
                       obj.elements[1] = 'O';
                   }
                   else
                   {

                   //Try Corners
                   if (obj.elements[0] ==  ' ')
                   {
                       obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
                  }
               }
           }
       }
    }
    else if (user_input == 6)
    {
        if (obj.elements[2] == 'X' && obj.elements[8] == ' ')
       {
           obj.elements[8] = 'O';
       }
       else if (obj.elements[8] == 'X' && obj.elements[2] == ' ')
       {
           obj.elements[2] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[4] == 'X' && obj.elements[3] == ' ')
           {
               obj.elements[3] = 'O';
           }
           else if (obj.elements[3] == 'X' && obj.elements[4] == ' ')
           {
               obj.elements[4] = 'O';
           }
           else
           {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                       obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
               }
           }
    }
    else if (user_input == 7)
    {
        // Level01
       if (obj.elements[0] == 'X' && obj.elements[3] == ' ')
       {
           obj.elements[3] = 'O';
       }
       else if (obj.elements[3] == 'X' && obj.elements[0] == ' ')
       {
           obj.elements[0] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[4] == 'X' && obj.elements[2] == ' ')
           {
               obj.elements[2] = 'O';
           }
           else if (obj.elements[2] == 'X' && obj.elements[4] == ' ')
           {
               obj.elements[4] = 'O';
           }
           else
           {
               // Level03
               if (obj.elements[7] == 'X' && obj.elements[8] == ' ')
               {
                   obj.elements[8] = 'O';
               }
               else if (obj.elements[8] == 'X' && obj.elements[7] == ' ')
               {
                   obj.elements[7] = 'O';
               }
               else
               {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                      obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
               }
           }
       }
    }
    else if (user_input == 8)
    {
         // Level01
       if (obj.elements[6] == 'X' && obj.elements[8] == ' ')
       {
           obj.elements[8] = 'O';
       }
       else if (obj.elements[8] == 'X' && obj.elements[6] == ' ')
       {

           obj.elements[6] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[1] == 'X' && obj.elements[4] == ' ')
           {
               obj.elements[4] = 'O';
           }
           else if (obj.elements[4] == 'X' && obj.elements[1] == ' ')
           {
               obj.elements[1] = 'O';
           }
           else
           {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                       obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else if (obj.elements[8] == ' ')
                   {
                       obj.elements[8] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
             }
        }
    }
    else if (user_input == 9)
    {
        // Level01
       if (obj.elements[7] == 'X' && obj.elements[6] == ' ')
       {
           obj.elements[6] = 'O';
       }
       else if (obj.elements[6] == 'X' && obj.elements[7] == ' ')
       {
           obj.elements[7] = 'O';
       }
       else
       {
           // Level02
           if (obj.elements[4] == 'X' && obj.elements[0] == ' ')
           {
               obj.elements[0] = 'O';
           }
           else if (obj.elements[0] == 'X' && obj.elements[4] == ' ')
           {
               obj.elements[4] = 'O';
           }
           else
           {
               // Level03
               if (obj.elements[5] == 'X' && obj.elements[2] == ' ')
               {
                   obj.elements[2] = 'O';
               }
               else if (obj.elements[2] == 'X' && obj.elements[5] == ' ')
               {
                   obj.elements[5] = 'O';
               }
               else
               {
                   //Try Corners
                   if (obj.elements[0] == ' ')
                   {
                       obj.elements[0] = 'O';
                   }
                   else if (obj.elements[2] == ' ')
                   {
                       obj.elements[2] = 'O';
                   }
                   else if (obj.elements[6] == ' ')
                   {
                       obj.elements[6] = 'O';
                   }
                   else
                   {

                       // Try Center of Sides
                       if (obj.elements[1] == ' ')
                       {
                           obj.elements[1] = 'O';
                       }
                       else if (obj.elements[3] == ' ')
                       {
                           obj.elements[3] = 'O';
                       }
                       else if (obj.elements[5] == ' ')
                       {
                           obj.elements[5] = 'O';
                       }
                       else if (obj.elements[7] == ' ')
                       {
                           obj.elements[7] = 'O';
                       }
                       else
                       {
                           // Try Center
                           if (obj.elements[4] == ' ')
                           {
                               obj.elements[4] = 'O';
                           }
                       }
                   }
               }
           }
       }
    }
}
