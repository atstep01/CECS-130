/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 03         */
/*******************/

#include <stdio.h>

int main()
{
	int x,y;
	
	printf("Enter two integers seperated by a comma: ");
	scanf("%d,%d", &x, &y);
	
	if(x > 0)
	{
		if(y > 0)
		{
			printf("\nThe point (%d,%d) is in the first quadrant.\n", x, y);
		}
		else
		{
			printf("\nThe point (%d,%d) is in the fourth quadrant.\n", x, y);
		}
	}
	else
	{
		if(y > 0)
		{
			printf("\nThe point (%d,%d) is in the second quadrant.\n", x, y);
		}
		else
		{
			printf("\nThe point (%d,%d) is in the third quadrant.\n", x, y);
		}
	}
	return 0;
}
