#include <stdio.h>
#include <string.h>
#include <ctype.h>

void changeCase( char*);

int main()
{
    char myArray[100];
    char *myPtr;
    
    myPtr = &myArray[0];
    int i = 0;
    
    gets(myArray);
    
    changeCase(myArray);
         
    for( i = 0; i < strlen(myArray); i++)
         printf("%c", *(myPtr+i));
 
    printf("\n");

    return 0;
}

void changeCase( char *myString)
{
     int i = 0;
     for( i = 0; i < strlen(myString); i++)
     {
          switch(tolower(*(myString+i)))
          {
                case 'a':
                case 'e':
                case 'i': 
                case 'o':
                case 'u':
                     *(myString+i) = toupper(*(myString+i));
                     break;
                default:
                     *(myString+i) = tolower(*(myString+i));
                     break;
          }
     }
}               
