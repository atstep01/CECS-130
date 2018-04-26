/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 03     */
/*******************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{  
    //randomizes rand()
	srand(time(NULL));
	
	//creates and initiallizes variables
	int questions = 0;
	int i = 0;
	int correct = 0;
	int incorrect = 0;
	
	//asks how many questions the user wants to be asked and stores that input in questions
	printf("How many questions do you want?\n");
	scanf("%d", &questions);
	
	//for each question two random ints are created, the user is asked what the product of those two ints are,
	//if the user inputs the product he is congratulated and the correct counter is incremented by 1
	//if the user doesn't input the product a lose statement is printed and the incorrect counter is incremnented by 1
	for(i = questions; i > 0; i--)
	{
		
		int num1, num2, answer;
		
		num1 = (rand() % 10) + 1;
		num2 = (rand() % 10) + 1;
		
		printf("\nWhat is the product of %d and %d\n", num1, num2);
		scanf("%d", &answer);
		
		if(answer == (num1*num2))
		{
			printf("Congratulations, you are correct!\n");
			correct++;
		}
		else
		{
			printf("I am sorry, you did not get the correct answer.\n");
			incorrect++;
		}
		
		printf("Correct: %d\n", correct);
		printf("Incorrect: %d\n", incorrect);
	}
	return 0;
}
