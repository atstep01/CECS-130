/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 01     */
/*******************/

#include <stdio.h>

int main()
{	// Declare/ Inititialize everything
	int *iPtr, iNumber = 1;
	char *cPtr, cCharacter = 'a';
	float *fFloat, fNumber = 1.11;
	
	iPtr = NULL;
	cPtr = NULL;
	fFloat = NULL;
	
	//Assign the memory  adresses of the vairables to the pointers.
	iPtr = &iNumber;
	cPtr = &cCharacter;
	fFloat = &fNumber;
	
	//print statements
	printf("The values of the nonpointer variables\niNumber %d\ncCharacter %c\nfNumber %.2f\n\n", iNumber, cCharacter, fNumber);
	
	printf("The values of the pointer variables\niPtr %p\ncPtr %p\nfFloat %p\n\n", iPtr, cPtr, fFloat);
	
	printf("The addresses of the nonpointer variables\niNumber %p\ncCharacter %p\nfNumber %p\n\n", &iNumber, &cCharacter, &fNumber);
	
	printf("The addresses of the pointer variables\niPtr %p\ncPtr %p\nfFloat %p", &iPtr, &cPtr, &fFloat);
	
	return 0;
}
