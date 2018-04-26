/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 01     */
/*******************/

#include <stdio.h>

int main()
{
	int i = 0;
	int a[10];
	
	//stores ten user input integers into the array.
	for(i; i < 10; i++)
	{
		printf("Enter an integer: ");
		scanf("%d", &a[i]);
	}
	
	//menu, nonfunctioning.
	printf("\nWhat would you like to do with the array?\n");
	printf("1) Print the array in ascending order.\n");
	printf("2) Print the array in descending order.\n");
	return 0;	
}
