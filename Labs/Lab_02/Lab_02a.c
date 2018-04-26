#include <stdio.h>

int main()
{
	int mi, yd;
	
	printf("Enter a distance in miles: ");
	scanf("%d", &mi);
	
	yd = (mi * 1760);
	
	printf("%d miles is equal to %d yards", mi, yd);
	
	return 0;
}
