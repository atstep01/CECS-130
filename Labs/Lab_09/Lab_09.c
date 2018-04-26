/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 09         */
/*******************/

#include <stdio.h>
#include <stdlib.h>

void loadMyIncome(char *);

int main(void)
{
	char *filename = "myIncome.txt";
	
	loadMyIncome(filename);
	
	return 0;
}

void loadMyIncome(char *filename)
{
	FILE *fp;
	char myLine[80];
	
	fp = fopen(filename, "r");
	
	if(fp != NULL)
	{
		fprintf(stdout, "\n Opened %s successfully.\n", filename);
		
		while(!feof(fp))
		{
			fscanf(fp,"%s", myLine);
			printf("\n %s", myLine);
		}
		
		fclose(fp);
	}
	else
	{
		fprintf(stderr, "\n Failed to open %s.", filename);
	}	
}
