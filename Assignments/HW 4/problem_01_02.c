/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 01/02  */
/*******************/

#include <stdio.h>

//prototypes functions
int aRemainder(int ,int );
int greaterThan(int, int);
void menu(void);


int main()
{
	//calls functions
	printf("The remainder of 4/5 is %d.\n\n",aRemainder(4,5));
	printf("%d is greater than 5.\n\n",greaterThan(5,7));
	menu();
	return 0;
}

//returns remainder of two ints
int aRemainder(int x, int y)
{
	return (x % y);
	
}

//returns the int with the greater value
int greaterThan(int x, int y)
{
	if(x >= y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

//prints atm menu
void menu(void)
{
	printf("Welcome to the bank.\n");
	printf("What would you like to do?\n\n");
	printf("1) Withdraw\n");
	printf("2) Deposit\n");
	printf("3) Check Balance\n");
	printf("4) Exit\n");
	
}
