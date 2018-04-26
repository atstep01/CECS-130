/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 01     */
/*******************/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//Intitialize variables and randomize rand()
	srand(time(NULL));
	int plnum;
	int rnd;
	char cplnum;
	
	//Set variables
	plnum = 0;
	rnd = (rand() % 10) + 1;
	
	/*
	//Displays values of integers for testing
	printf("%d\n", plnum);
	printf("%d\n", rnd);
	*/
	
	//Interface
	printf("Number guessing game\n");
	printf("\nEnter a digit between 1 to 10: ");
	scanf("%d", &plnum);
	
	//isdigit only returns true with chars between '1' and '9'
	cplnum = (plnum - 1) + '0';
		
	//If input is digit then check to see if input is the same as the random number, if so print win statement, otherwise print lose statement
	//If input is not a digit print not a digit statement.
	if(isdigit(cplnum))
	{
		if(plnum == rnd)
			{
				printf("\nCongratulations, you guessed the right number!");
			}
		else 
			{
				printf("\nI'm sorry you didn't guess the right number. Better luck next time!");
			}
	}
	else
	{
		printf("\nYou did not enter a digit.");
	}
	return 0;
}
