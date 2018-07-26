#include <stdio.h>
int main (void)
{
    int n = 1 ; 
    
    while ( n < 9 )
    {
        printf("n = %d \n" , n );
        n ++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");
    
    return 0 ; 
    
}