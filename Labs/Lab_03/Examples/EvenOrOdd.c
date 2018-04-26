#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if( number % 2 == 0)
	{
		printf("The number is divisible by 2.\n");
		printf("The number is even\n");
	}     
    else
	{
		printf("The number is not divisible by 2.\n");
        printf("The number is odd\n");
	}
	
	
	// The conditional operator ?:
	
    printf("The conditional operator yields that the number is %s too.\n", (number%2==0)? "even":"odd");
       
    return 0;
}
