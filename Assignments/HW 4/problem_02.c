/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 02     */
/*******************/

#include <stdio.h>

int main()
{
	//initializes variables
	int n, num = 100;
	
	//prints numbers from 100 to 10 by tens 
	for( n = num; n > 0; n -= 10)
	{
		printf("%d  ", n);
	}
	
	//prints one because its required in prompt
	printf("%d", 1);
	
	return 0;		
}
