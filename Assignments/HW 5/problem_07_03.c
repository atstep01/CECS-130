/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 03     */
/*******************/

#include <stdio.h>
#include <ctype.h>
#include <time.h>

int TossDie(int *, int);

void main()
{
	int i, dice;
	srand(time(NULL));
	
	printf("Roll up to six die.\nHow many die do you want to roll? ");
	scanf("%d", &dice);
	
	//This prevents the user from rolling more than six dice
	while(dice > 6)
	{
		printf("\nThat is too many die.\n");
		printf("Roll up to six die.\nHow many die do you want to roll? ");
		scanf("%d", &dice);
	}
	//creates an array of dice values. The size of the array is how many dice the player decided to roll.
	int values[dice];
		
	TossDie(values, dice);
	
	//Prints the whole array of dice values with their index numbers.	
	for(i = 0; i < dice; i++)
	{
		printf("The value of die %d is %d\n",i + 1, values[i]);
	}
}

//takes the  values array and assigns a random number 1-6 in every index
int TossDie(int *p, int size)
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		p[i] = (rand() % 6) + 1;
	}
	
	return *p;
}
