#include <stdio.h>   

int main(void)
{
   const float pi = 3.14;     /* Assumed value for p */
   double      circleArea, circleRadius;
   
   circleRadius = 5.0; 
   
   // Demo the "const definition"
   // Uncomment the next line to show the compilers action whe it tries to reassign a value to pi
   
   // pi = 3.145; 
   
   circleArea = pi*circleRadius*circleRadius;
   
   printf("If the circle has radius = %6.2f, then it's area will be %8.2f\n", circleRadius, circleArea);

   return 0;
}
