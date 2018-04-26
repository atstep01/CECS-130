/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 03     */
/*******************/

#include <stdio.h>
#include <ctype.h>
#include <time.h>

int main()
{
	//Initialize variables and seed rand()
	int die1 = 0;
	int die2 = 0;
	srand(time(NULL));
	
	//Randomize the die values
	die1 = (rand() % 6) + 1;
	die2 = (rand() % 6) + 1;
	
	
	//Displays value of dice.
	printf("Die 1: %d\n", die1);
	printf("Die 2: %d\n", die2);
	
	
	//If sum of the two dice equals 7 or 11 then print win statement, if not print lose statement.
	if( die1 + die2 == 7 || die1 + die2 == 11)
	{
		printf("Congratulations, the sum of the dice is %d, you win!", die1 + die2);
	}
	else 
	{
		printf("I'm sorry, the sum of the dice is %d, you lose.", die1 + die2);
	}
	return 0;
}
