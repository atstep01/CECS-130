#include<stdio.h>

int main()
{
	FILE *fp = NULL;
	char tempBuf[81];
	
	fp = fopen("myIncome.txt", "r");
	if(fp != NULL)
	{
	   fprintf(stdout, "File was opened successfully\n");
		while (!feof(fp))
		{
			fgets(tempBuf,80,fp);
			printf("\n I read: %s", tempBuf);
		} // end while
		fclose(fp); 
	}
	else
	{
	    fprintf(stderr,"\nCannot open file - bye.\n");
	} //end if else
	return 0;
}
