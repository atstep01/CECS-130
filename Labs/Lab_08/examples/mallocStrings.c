#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	char *myName = NULL;
	int nameSize;
	int rc = 0;

    printf("How long is your name? ");
    scanf("%d", &nameSize);
	
	myName = (char *)malloc(nameSize*sizeof(char));
	if(myName != NULL)
	{
		getchar();   	// This is important in order to clear the \n left by scanf.
						// If you do not have it it will fill myName in gets
		printf("Please enter your name:\n");
		gets(myName);
		printf("Hello %s\n",myName);
		free(myName);    
	}
	else
	{
		printf("Failed allocating memory\n");
		rc = -1;
	} //end if else

	return rc;
}
