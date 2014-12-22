/* 
   Author: Alan Hodgson (alanhodgson@my.unt.edu)
   Date: 10/7/2014
   Instructor: Dr. Thompson
   Purpose: Homework #3
*/
#include <stdio.h>
#define TAX_RATE .0825
#define SHIPPING_COST 25.00
#define DISCOUNT .10

int main(void)
{
   /* Initialize variables */
   float officeChair, fileCab, desk, bookcase, subtotal, total;
   float subtot1, subtot2, subtot3, subtot4;
   int orderInput; 

   /* Initial Display */
   printf("\nCSCE 1030.001\n");
   printf("Homework #3\n");
   printf("Alan Hodgson\n");
   printf("ajh0213\n");
   printf("alanhodgson@my.unt.edu\n\n");

   /* Declare purchase items */
   officeChair = 59.99;
   fileCab = 29.99;
   desk = 99.99;
   bookcase = 44.99;

   /* Welcome message */
   printf("Welcome to the online office store!!\n\n");

   /* goto statment for menu */   
   menu:
   
   /* Menu used for each FOR loop */
   printf("1:\tOffice Chairs\t$59.99 each\n");
   printf("2:\tFile Cabinets\t$29.99 each\n");
   printf("3:\tDesks        \t$99.99 each\n");
   printf("4:\tBookcases    \t$44.99 each\n");
   printf("5:\tCheckout\n");

   /* Ask for user input */
   printf("Enter the number of the product you wish to purchase: ");
   scanf("%d", &orderInput);
   
   /* IF statement for valid input */
   if(orderInput > 0 && orderInput  < 6)
   {  
      /* Switch statement for menu */ 
      switch(orderInput)
      {
         case 1:
         {
            /* declare new input and iteration */
            int p = 0, i;
            printf("Enter the number of Office Chairs to purchase: ");
            scanf("%d", &p);

            /* for loop to add number of office chairs */
            for(i = 0; i < p; i++)
            {
               subtotal += officeChair;
               subtot1 += officeChair;
            }

            /* Prints current subtotal for the order */
            printf("Current subtotal: %.02f\n\n", subtotal);

            /* back to menu */
            goto menu;
         }    
         case 2:
         {
            /* declare new input and iteration */
            int p = 0, i;
            printf("Enter the number of File Cabinets to purchase: ");
            scanf("%d", &p);

            /* for loop to add number of file cabinets */
            for(i = 0; i < p; i++)
            {
               subtotal += fileCab;
               subtot2 += fileCab;
            }

            /* Prints current subtotal for the order */
            printf("Current subtotal: %.02f\n\n", subtotal);

            /* back to menu */
            goto menu;
         }
         case 3:
         {
            /* declare new input and iteration */
            int p = 0, i;
            printf("Enter the number of Desks to purchase: ");
            scanf("%d", &p);

            /* for loop to add number of file cabinets */
            for(i = 0; i < p; i++)
            {
               subtotal += desk;
               subtot3 += desk;
            }

            /* Prints current subtotal for the order */      
            printf("Current subtotal: %.02f\n\n", subtotal);

            /* back to menu */
            goto menu;
         }

         case 4:
         {
            /* declare new input and iteration */
            int p = 0, i;
            printf("Enter the number of Bookcases to purchase: ");
            scanf("%d", &p);

            /* for loop to add number of file cabinets */
            for(i = 0; i < p; i++)
            {
               subtotal += bookcase;
               subtot4 += bookcase;
            }

            /* Prints current subtotal for the order */
            printf("Current subtotal: %.02f\n\n", subtotal);
            
            /* back to menu */
            goto menu;
         }

         default:
         {
            printf("\n**************************************\n");
            break;
         }
      }
   }           
   else
   {
      /* for invalid menu options, returns to menu */
      printf("\nInvalid Input! Returning to the menu\n\n");
      goto menu;
   }
   
   /* Checkout area - each items subtotal and grand subtotal */      
   printf("\nThank you for purchasing from the online store!!\n");
   printf("\nSubtotal for Office Chairs: %.02f", subtot1);
   printf("\nSubtotal for File Cabinets: %.02f", subtot2);
   printf("\nSubtotal for Desks: %.02f", subtot3);
   printf("\nSubtotal for Bookcases: %.02f\n", subtot4);
   printf("\nGrand Subtotal is: $%.02f\n", subtotal);
   
   /* IF statement for discount */
   if(subtotal > 500)
   {
      printf("Discount Added: - 10%%\n");
      subtotal -= (subtotal*DISCOUNT);
   }

   else
   {
      subtotal = subtotal;
   }

   /* Print grand total */
   total = subtotal+(subtotal*TAX_RATE)+SHIPPING_COST;
   printf("Tax rate: + 8.25%%\n");
   printf("Shipping cost: + $25\n");
   printf("\nGRAND TOTAL(tax and shipping included): $%.02f\n\n", total); 
   printf("\n**************************************\n");
   /* Exit program */
   return 0;
}
