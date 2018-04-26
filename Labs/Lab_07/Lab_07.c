/*******************/
/* Austin Stephens */
/* CECS-130-01     */
/*  Lab 07         */
/*******************/

#include <stdio.h>


struct city
{
	char name[20];
	long int population;
	double surfaceArea;
};

void density(struct city* ) ;

int main()
{
	int i = 0;
	struct city one = {"Paradis",200000, 75000.00};
	struct city two = {"Springfield",230000, 82000.00};
	struct city three = {"Main",13400, 42000.00};
	struct city c[3] = {one, two, three};
	
	for(i=0; i < 3; i++)
	{
		
	printf("%-10s\t%d\t%.2f\n",c[i].name, c[i].population, c[i].surfaceArea);
	
	}
	
	density(c);
	
	return 0;
}

void density(struct city* c)
{
	int i = 0;
	for(i=0; i < 3; i++)
	{
		
	printf("%-10s\t %.2f\tperson per square miles.\n",c[i].name, c[i].population / c[i].surfaceArea);
	
	}
}
