/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 06         */
/*******************/

#include <stdio.h>

int findMin(int *, int);

int main()
{
	int i;
	int numbers[7] = {1, -11, 33, -17, 0, 6};
	
	for(i = 0; i < 7; i++ )
	{
		printf("The value %d is found in index %d\n", numbers[i], i);
	}
	
	printf("The minimum value is %d.", findMin(numbers,7));
}
int findMin(int *numbers, int size)
{
	int i;
	int minInt = numbers[0];
	
	for(i = 0; i < size; i++)
	{
		if(minInt > numbers[i])
		{
			minInt = numbers[i];
		}
	}
	
	return minInt;
}
