#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *outFile;
    char *filename = "myIncome.txt";
     
    outFile = fopen( filename, "w");
    
    if( outFile == NULL)
	{
		printf("%s could not be opened\n", filename);
	}
    else
    {
        printf("%s opened successfully\n", filename);
		fputs("January Income = $2000",outFile);
		fputs("\n",outFile);
		fputs("February Income = $4000",outFile);
        fclose(outFile);
    }
    return 0;
}
