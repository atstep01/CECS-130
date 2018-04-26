/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 02     */
/*******************/

#include <stdio.h>

int main()
{
	int i = 0;
	float gpa[30];
	int choice;
	float avg = 0.0;
	float sum = 0.0;
	
	//enters  up to 30 values into the array
	for (i; i < 30; i++)
	{
		printf("Enter a GPA: ");
		scanf("%f", &gpa[i]);
		
		//asks the user everytime a gpa is enter if he wants to stop and calculate the average.
		printf("Enter (1) to calculate the average GPA.\nEnter (2) another GPA.\nWhat do you want to do? ");
		scanf("%d", &choice);
		
		sum += gpa[i];
		
		//if he chooses to calculate the average the loop is exited,		
		if(choice == 1)
		{
			break;
		}	
	}
	
	//calculate average.
	avg = sum/(i+1);
	
	printf("The average GPA of the class is %.2f",avg);
	
	return 0;
}
