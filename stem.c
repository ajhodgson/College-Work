/*
	Author: Alan Hodgson	
	Date: 10/31/2014
	Instructor: Dr. Thompson
	Purpose: Lab10B.c - Stemming words for a search engine.
		 Deals with endings: 's', 'sses', and 'ed'.
*/
#include <stdio.h>
#include <string.h>

int main ()
{
	char word[30];
	int len;

	/* Input string */	
	printf("\nEnter a word to stem: ");
	scanf("%s", word);
	printf("Initial word: %s\n", word);

	/* Length of string */
	len = strlen(word);

	/* Stemming Algorithm */
        /* For 'sses' ending */
        if(word[len-4] == 's' && word[len-3] == 's' && word[len-2] == 'e' && word[len-1] == 's')
        {
                word[len-2] = '\0';
        }


	/* For 's' ending */
	else if(word[len-1] == 's')
	{
		word[len-1] = '\0';
	}

	/* For 'ed' ending */
	else if(word[len-2] == 'e' && word[len-1] == 'd')
	{
		word[len-2] = '\0';
	}

	/* Prints resulting string */
	printf("Stemmed word: %s\n\n", word);
	
	return 0;
}
