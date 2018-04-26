/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 02     */
/*******************/

#include <stdio.h>
#include <string.h>

void findMin(char *[],int );

int main()
{
	char *strings[] = { "Result" , "dismal" , "fees"};	
	int size = 3;
	
	findMin(strings, size);
	
	return 0;
}

void findMin(char *strings[], int size)
{
	char *min[] = {strings[0]};
	int x = 0;
	
	for(x ; x < size; x++)
	{
		if(strcmp(min[0], strings[x]) > 0)
		{
			strcpy(min[0], strings[x]);
		}
	}
	
	printf("%s", min[0]);
	
}
