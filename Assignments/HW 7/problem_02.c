/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 02     */
/*******************/

#include <stdio.h>
#include <stdlib.h>

void loadMySongsList(char *);

int main(void)
{
	char *filename = "mySongsList.txt";
	
	loadMySongsList(filename);
	
	return 0;
}

void loadMySongsList(char *filename)
{
	FILE *fp;
	char songBuff[132];
	
	fp = fopen(filename, "r");
	
	if(fp != NULL)
	{
		fprintf(stdout, "\n Opened %s successfully.\n", filename);
		
		while(!feof(fp))
		{
			fgets(songBuff, 132, fp);
			printf("\n %s", songBuff);
		}
		
		fclose(fp);
	}
	else
	{
		fprintf(stderr, "\n Failed to open %s.", filename);
	}	
}
