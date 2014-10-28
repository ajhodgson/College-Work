/*
	Author: Alan Hodgson
	Date: 10/17/2014
	Instructor: Dr. Thompson
	Purpose: The purpose is to use funtions to find the factorial for a user input
	and print the results.
*/
#include <stdio.h>

int factorial(int result);

void output(int result);

int main(void)
{
	int result;
	int n;
	
	/* Input */
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	/* To factorial function */
	result = factorial(n);
	
	/* To output function */
	output(result);
	return 0;
}

int factorial(int n)
{
	int result = 1;
	int i;

	/* Computing factorial */
	for(i = 1; i <= n; i++)
	{
		result *= i;
	}

	return(result);
}

void output(int result)
{
	/* Prints the result */
	printf("Factorial  = %d\n", result);
	return;
}
