/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Problem 05     */
/*******************/

#include <stdio.h>

int main()

{
	float rate, price, cost, commission;
	
	printf("What is the commission rate? ");
	scanf("%f",&rate);
	
	printf("What is the sales price of the product? ");
	scanf("%f",&price);
	
	printf("What is the cost of the product? ");
	scanf("%f",&cost);
	
	commission = rate * (price - cost);
	
	printf("The commission on this sale is $%.2f",commission);
	
	return 0;
}
