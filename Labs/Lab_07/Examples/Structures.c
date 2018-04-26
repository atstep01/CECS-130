#include <stdio.h>

struct Student_Grade
{
       char assignmentName[20];
       float grade;
};

int main()
{
    struct Student_Grade myGrade[5];
    struct Student_Grade *myGradePtr;
    int i;
    float avgGrade = 0;
    
    myGradePtr = &myGrade[0];
    
    for( i=0; i<5; i++)
    {
         printf("Enter the name of the assignment: ");
         scanf("%s", &(myGradePtr+i)->assignmentName);   // This line may generate a warning. Ignore for now.
         printf("Enter the grade: ");
         scanf("%f", &(myGradePtr+i)->grade);
         avgGrade += (myGradePtr+i)->grade;
    }
    
    for( i=0; i<5; i++)
    {
         printf("%s:\t%.1f%%\n", (myGradePtr+i)->assignmentName, (myGradePtr+i)->grade);
    }
    
    printf("Avg:\t%.1f\n", avgGrade/5);

    return 0;
}
