#include <stdio.h>

int main()
{

    int i, j, k;
    int oldI, oldJ, oldK;
    
    printf("Enter three integr values separated by commas: ");
    scanf("%d,%d,%d", &i, &j, &k);
    
    oldI = i;
    oldJ = j;
    oldK = k;
    
    printf("i++\n");
    i++;
    printf("i = %d\n", i);
    i = oldI;
    printf("++i\n");
    ++i;
    printf("i = %d\n", i);
    
    i= oldI;
    
    printf("j*=++i\n");
    j*=++i;
    printf("i = %d, j = %d\n", i, j);
    i = oldI;
    j = oldJ;
    printf("j*=i++\n");
    j*=i++;
    printf("i = %d, j = %d\n", i, j);
    
    i = oldI;
    j = oldJ;
    k = oldK;
    
    printf("k-=j+3;\n");
    k-=j+3;
    printf("j = %d, k = %d\n", j, k);
    
    i = oldI;
    j = oldJ;
    k = oldK;
    
    printf("i %%= j*k%%i;\n");
    i %= j*k%i;
    printf("i = %d, j = %d, k = %d\n", i, j, k);

    return 0;
}
