/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 02     */
/*******************/

#include <stdio.h>

int main()

{
	int a, b, x, y;
	
	printf("Enter a value for a: ");
	scanf("%d",&a);
	
	printf("Enter a value for b: ");
	scanf("%d",&b);
	
	printf("Enter a value for x: ");
	scanf("%d",&x);
	
	printf("Enter a value for y: ");
	scanf("%d",&y);
	
	int answer = (a-b)*(x-y);
	
	printf("%d", answer);
	
	return 0;
}
