/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 01     */
/*******************/

#include <stdio.h>
#include <stdlib.h>


struct Employee
{
	char id[9];
	float salary;
};

int main(void)
{
	int EmployeesCount = 3;
	int i = 0;
	struct Employee *myEmployees;
	
	myEmployees = (struct Employee *) malloc(EmployeesCount*sizeof(struct Employee));
	
	if(myEmployees != NULL)
	{
		for(i ; i < EmployeesCount ; i++)
		{
			printf("Employee ID: ");
			scanf("%s", &myEmployees[i].id);
			
			printf("Employee Salary: ");
			scanf("%f", &myEmployees[i].salary);
		}
		
		printf("\nBefore salary increase.\n");
		for(i = 0; i < EmployeesCount; i++)
		{
			printf("%s\t$%.2f\n", myEmployees[i].id, myEmployees[i].salary);
		}
		
		for(i = 0; i < EmployeesCount; i++)
		{
			myEmployees[i].salary *= 1.1;
		}
		
		printf("\nAfter salary increase.\n");
		for(i = 0; i < EmployeesCount; i++)
		{
			printf("%s\t$%.2f\n", myEmployees[i].id, myEmployees[i].salary);
		}
		
	}
	else
	{
		printf("Memory allocation failed.");
	}
	
	free(myEmployees);
	return 0;
}
