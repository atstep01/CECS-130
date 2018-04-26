#include <stdio.h>
#include <stdlib.h>

struct Grades
{
       char name[10];
       float grade;
};

int main()
{
    int countGrades, i;
    struct Grades *myGrades;
    printf("How many grades do you have? ");
    scanf("%d", &countGrades);
    
    myGrades = (struct Grades *) malloc (countGrades*sizeof(struct Grades));
    
    if(myGrades != NULL)
    {
		for( i = 0; i < countGrades; i++)
		{
			printf("Enter catagory: ");
			scanf("%s", &myGrades[i].name);		// This line will generate an error because name is a char array. 								// Ignore for now. We can fix it by using dynamic memory for name too
												// but this will make the exampel too long
			printf("Enter the score: ");
			scanf("%f", &myGrades[i].grade);
		}
		for( i = 0; i < countGrades; i++)
		{
			printf("Catagory: %s\n", myGrades[i].name);
			printf("Score: %f\n", myGrades[i].grade);
		}
    }
    
    free(myGrades);
    return 0;
}
