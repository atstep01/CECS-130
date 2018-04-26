#include <stdio.h>

char findMax(char *, int );

int main (int argc, char const *argv[])
{
	int i;
	char cArray[5];
	char cName[] = "Ibrahim Imam";
	
	for(i = 0; i < 5; ++i)           // This loop shows that cArray starts empty
	{
		printf("The initiall value of cArray[%d] is %c \n", i, cArray[i]);
	} // end for
	printf("++++++++++++++++++++++++++++++++++++\n\n");
	
	for(i = 0; i < 12; ++i)          // This shows that cName[] can be initialized and sized at the same time
	{
		printf("Initiall The value of cName[%d] = %c\n", i, cName[i]);
	} // end for
	printf("\n\nThe largest element is %c\n\n", findMax(cName, 13));
	
	for(i = 0; i < 5; ++i)     // populating cArray one element at a time, long way needed for big arrays
	{
		cArray[i] = i+65;
	} // end for
	
	printf("After we intialize\n");
	for(i = 0; i < 5; ++i)
	{
		printf("Initiall The value of cArray[%d] is %c\n", i, cArray[i]);
	} // end for
	
	cArray[0] = 'z';
	cArray[4] = 'q';
	for(i = 0; i < 5; ++i)
	{
		printf("Initiall The value of cArray index %d is %c\n", i, cArray[i]);
	} // end for
	printf("\n\nThe largest element is %c\n\n", findMax(cArray, 5));
	
	return 0;
}

char findMax(char *a, int size)
{
    char maxChar= a[0];    // initialize the maximum to the first character in the array

    for( int i = 1; i < size; ++i )    //Start comparing 
	{
        if( maxChar < a[ i ] )   // if the ith character is larger than the maxChar you must update max character 
		{
			maxChar = a[ i ];
		}
    } 
    return maxChar;
}
