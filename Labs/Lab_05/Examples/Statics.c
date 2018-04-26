#include <stdio.h>

void addThem(void);

const int testConst = 11;
	
int main (int argc, char const *argv[])
{
	int i;

	
	printf("\tStatic storage class example\n");
	printf("Enter 5 numbers you would like to sum.\n");
	
	for(i = 0; i < 5; ++i)
	{
		addThem();
	}
	return 0;
}

void addThem()
{
	static int sum;
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	sum += num;
	printf("The testConst is %d\n",testConst);
	printf("The total so far is %d\n",sum);
}
