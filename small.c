#include <stdio.h>

void main()
{
   int w, x;
   char y; 
   x = getchar();
   for (w = 0; w <= 9; w++)
   {    
        if (x == 0)
        {
            putchar(y);
            x = 1;
            y = 'X';
        }
        else  
        {
            putchar(y);
            x = 0;
            y = ' ';
        }
   }
   printf("\n");
}