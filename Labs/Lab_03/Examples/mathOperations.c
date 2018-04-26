#include <stdio.h>

int main()
{
    int option, num1, num2;

    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Modulus\n6) Exit\n");
    printf("Enter your option: ");
    scanf("%d", &option);
                
    switch( option )
    {
            case 1:
                 printf("Enter 2 numbers separated by a comma: ");
                 scanf("%d,%d", &num1, &num2);
                 printf("%d+%d=%d\n", num1,num2,num1+num2);
                 break;
            case 2:
                 printf("Enter 2 numbers separated by a comma: ");
                 scanf("%d,%d", &num1, &num2);
                 printf("%d-%d=%d\n", num1,num2,num1-num2);
                 break;
            case 3:
                 printf("Enter 2 numbers separated by a comma: ");
                 scanf("%d,%d", &num1, &num2);
                 printf("%d*%d=%d\n", num1,num2,num1*num2);
                 break;
            case 4:
                 printf("Enter 2 numbers separated by a comma: ");
                 scanf("%d,%d", &num1, &num2);
                 printf("%d/%d=%d\n", num1,num2,num1/num2);
                 break;
            case 5:
                 printf("Enter 2 numbers separated by a comma: ");
                 scanf("%d,%d", &num1, &num2);
                 printf("%d%%%d=%d\n", num1,num2,num1%num2);
                 break;
            case 6:
                 printf("Goodbye!\n");
                 break;
            default:
                 printf("You entered an invalid input\n");
    }

    return 0;
}   
