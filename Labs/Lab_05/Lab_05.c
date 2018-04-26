/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 05         */
/*******************/

#include <stdio.h>

void adder (void);
void subtractor(void);

static int tot;

int main()
{
	tot = 0;
	int i;
	
	for(i = 4; i > 0; i--)
	{
		adder();
		subtractor();
	}
	
	return 0;
}

void adder(void)
{
	int x = 0;
	printf("Enter a number you want to add: ");
	scanf("%d", &x);
	
	tot += x;
	
	printf("The total is %d\n", tot);
}

void subtractor(void)
{
	int x = 0;
	
	printf("Enter a number you want to subtract: ");
	scanf("%d", &x);
	
	tot -= x;
	
	printf("The total is %d\n", tot);
}
