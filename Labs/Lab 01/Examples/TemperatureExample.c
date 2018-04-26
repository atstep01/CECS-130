#include <stdio.h>


int main()
{
      int fahr, celsius;
	  
	  fahr = 32;
      
      celsius = 5*(fahr-32)/9;
      printf("Fahrenheit = %3d \t is %3d Celsius\n", fahr, celsius);   
   
	  fahr = 220;
      celsius = 5*(fahr-32)/9;
      printf("Fahrenheit = %3d \t is %3d Celsius\n", fahr, celsius);   

      // system("pause");    // Explain that some IDEs may need to pause the terminal window
	  return 0;
}       
