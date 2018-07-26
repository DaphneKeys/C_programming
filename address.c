#include <stdio.h>

int main (void)
{
    int x ;//= 10;
    int *p; 
    p = &x;
    
    printf("The value of x: %d\n", x);
    printf("The address of x: %d\n", x);
    printf ("The address of x: %d\n", *p);
    

    return 0 ;
}
