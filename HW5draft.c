/*
======================================================
 
   Author: Alan Hodgson (alanhodgson@my.unt.edu)
   Date: 10/29/2014
   Instructor: Dr. Thompson
   Purpose: Homework #5

======================================================
*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 200

/* Defined Functions */
void required();
double menu();
double r_data();
double get_data();
void avgGrade();
char letterGrade();
void avgAssign();


/*
   Function: main
   Parameters: void
   Return: integer, probably 0 to terminate program
   Purpose: Main function, required for all C programs.
*/
int main(void)
{
   required();
   menu();

}

/* 
   Function: required
   Parameters: none
   Return: void
   Purpose: Prints the required class information
*/
void required()
{
   printf("\n\n---------------------------------------------");
   printf("\n\tCSCE 1030.001\n");
   printf("\tHomework #5\n");
   printf("\tAlan Hodgson\n");
   printf("\tajh0213\n");
   printf("\talanhodgson@my.unt.edu\n");
   printf("---------------------------------------------\n\n");
}

/*
   Function: menu
   Parameters: none
   Return: float, the value of the subtotal
   Purpose: To print out the menu and return the subtotal to the main function
*/
float menu()
{
   int input
   
   /* Menu for database action */
   printf("Please enter what information you want out of the database:\n");
   printf("1:\tStudent Grade Data\n");
   printf("2:\tStudent Grade Average\n");
   printf("3:\tClass Average for an Assignment");
   printf("4:\tExit\n");

   /* Ask for user input */
   printf("\n>  ");
   scanf("%d", &input);
   
   /* IF statement for valid integer input */
   if(input > 0 && input  < 5)
   {  
      /* Switch statement for menu options */ 
      switch(input)
      {
	 /* Student Grade Data */
         case 1:
         {
	    printf("\nStudent EUID: \n");
	    scanf("");

	    printf("EUID: %.02f\n");
	    printf("Homework: %.02f\n");
	    printf("Exam #1: %.02f\n");
         
         }

	 /* Student Grade Average */    
         case 2:
         {
            printf("\nStudent EUID: ");
            scanf("");
	    
	    printf("EUID: %d\n");
	    printf("Grade Average: %.02f\n");
	    printf("Letter Grade: %c\n");

         }

	 /* Class Average for an Assignment */
         case 3:
         {
	    char assignInput;
	    int i = 0;

            printf("\nEnter the Assignment: ");
	    scanf("%s", assignInput);

	    if(assignInput != "homework" || assignInput != "exam 1" || assignInput != "exam 2")
	    {
	       printf("Sorry, invalid input!");
	       menu();
	    }
	    else
	    {
	       break;
	    }

	    avgAssign();
	    printf("%s: %.02f", assignInput[1]);

         }

	 /* Exit */
         default:
	 {
	    printf("Are you sure you want to exit (y/n)? ");
	    scanf("%c", &exit);

	    if(exit == y)
	    {
	       return 0;
            }
	    else
	    {
               menu();
            }
	 }
      }
   }           
   else
   {
      /* for invalid menu options, returns to menu */
      printf("\n***Invalid Input! Ending Program!***\n\n");
      return 0;
   }
}

/*
   Function: r_data
   Parameters: 
   Return: 
   Purpose: 
*/
double r_data()
{


}

/*
   Function: get_data
   Parameters: 
   Return: 
   Purpose: 
*/   
double get_data()
{


}

/*
   Function: avgGrade
   Parameters: 
   Return: 
   Purpose: 
*/
void avgGrade()
{

   
}

/*
   Function: letterGrade
   Parameters: 
   Return: 
   Purpose:
*/
char letterGrade()
{


}

/*
   Function: avgAssign
   Parameters: 
   Return: 
   Purpose:
*/

void avgAssign()
{


}
