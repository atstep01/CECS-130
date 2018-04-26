/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 08         */
/*******************/

#include <stdio.h>
#include <stdlib.h>

struct Test
{
	int testNum;
	float score;
};

int main(void)
{
	int tests, i;
	struct Test *myTests;
	
	printf("How many tests have you had? ");
	scanf("%d", &tests);
	
	myTests = (struct Test *) malloc(tests*sizeof(struct Test));
	
	if(myTests != NULL)
	{
		for(i = 0; i < tests; i++)
		{
			printf("Enter Test Number: ");
			scanf("%d", &myTests[i].testNum);
			
			printf("Enter your score: ");
			scanf("%f", &myTests[i].score);
		}
		for(i = 0; i < tests; i++)
		{
			printf("Score for test %d = %.2f\n", myTests[i].testNum, myTests[i].score);
		}
	}
	free(myTests);
	return 0;
}
