/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 04a        */
/*******************/

#include <stdio.h>

int main()
{
	int n, i, answer = 1;
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	i = n;
	while(i > 0)
	{
		answer *= i;
		i--;
	}
	printf("The factorial of %d is %d", n, answer);
	return 0;
}
