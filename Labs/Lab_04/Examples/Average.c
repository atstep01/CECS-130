#include <stdio.h>

int main()
{
    float num=0, avg=0, cnt=0;
    
    do 
    {
         printf("Enter a number: ");
         scanf("%f", &num);
         if(num!= 999)
         {
                  avg += num;
                  cnt++;
         }
    }while(num!=999);
    avg /= cnt;
    printf("The average is %.2f\n", avg);
    return 0;
}    

