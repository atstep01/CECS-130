/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 03     */
/*******************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char *book1 = "War of the Worlds - H.G. Wells";
	char *book2 = "1984 - George Orwell";
	
	char *filename = "myBooksList.txt";
	fp = fopen(filename, "w");
	
	if(fp != NULL)
	{
		fprintf(stdout, "\n%s was opened successfully\n", filename);
		fprintf(fp, "%s\n", book1);
		fprintf(fp, "%s\n", book2);
		fclose(fp);
	}
	else
	{
		fprintf(stderr,"\nCannot open %s", filename);
	}
	return 0;
}
