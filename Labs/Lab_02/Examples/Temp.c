#include <stdio.h>


int main()
{
      int fahr, celsius;
	  
	  printf("Please enter the temperature in Fahrenheit: ");
	  scanf("%d", &fahr);
      
      celsius = 5*(fahr-32)/9;
      printf("Fahrenheit = %3d \t is %3d Celsius\n", fahr, celsius);   

	  return 0;
}       
