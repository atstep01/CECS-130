#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myIntCount, *myInts, i;
    
    printf("What do you want to count to? ");
    scanf("%d", &myIntCount); 
    
    myInts = (int *) malloc(myIntCount*sizeof(int));    //This is how an array actually created behind the scenes
    
    if( myInts != NULL)
    {
        for( i = 0; i<myIntCount; i++)
        {
             myInts[i] = i+1;
        }
        
        for(i = 0; i < myIntCount; i++)
        {
              printf("myInts[%2d] = %2d\n", i, myInts[i]);
        }  	
		free(myInts);   
    }

    return 0;
}
