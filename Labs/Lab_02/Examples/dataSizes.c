#include <stdio.h>

int main()
{
    /* Variable Declaration */
    int intgr;
    short int shrtInt;
    long int longInt;
    
    char chr;
    float flt;
    double dbl;
    
    /* Print Results to the User */
    printf("Ints are %lu bytes\nShort Ints are %lu bytes\nLong Ints are %lu bytes\n", sizeof(intgr), sizeof(shrtInt), sizeof(longInt));
    printf("\nChars are %lu bytes\nFloats are %lu bytes\nDoubles are %lu bytes\n\n", sizeof(chr), sizeof(flt), sizeof(dbl));

    return 0;
}
