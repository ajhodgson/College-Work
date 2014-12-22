/*
   Author: Alan Hodgson (alanhodgson@my.unt.edu)
   Date: 10/10/2014
   Instructor: Dr.Thompson
   Purpose: The purpose of this program is to take a users input and square it
   by adding the input over and over. This can be done in two different ways
   in this program: for-loop or do-while-loop.  
*/
#include <stdio.h>

int main()
{
   int n, i, sum = 0, input;
   
   /* Input to take square */
   printf("\nInteger to square: ");
   scanf("%d", &n);   
   
   /* Loop menu */
   printf("1\tFOR-LOOP\n");
   printf("2\tDO-WHILE-LOOP\n");
   printf("\nChoose a loop: ");
   scanf("%d", &input);
   
   /* Switch statement for loops */
   switch(input)
   {
      /* FOR-LOOP */
      case 1:
      {
         for(i = 0; i < n; i++)
         {
            sum += n;
         } 
         break;
      }

      /* DO-WHILE-LOOP */
      case 2:
      {
         i = 0;

         do
         {
            sum += n;
            i++;
         }while(i < n);
         break;
      }
      /* Used for invalid menu options */
      default:
         printf("Invalid Input\n");
         return 0;
         break;
   }

   /* Final answer */
   printf("\nInteger squared: %d\n\n", sum);

   return 0;
}

