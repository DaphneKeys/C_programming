#include <stdio.h>
int main (void)
{
    int step ,fargo =0 , n = 0 ;
    
    while (n++ < 100)
    printf(" %d %d\n" , n , 2 * n + 1 );
    
    while (fargo < 1000 )
    {
        fargo = fargo + step ; 
        step = 2 * step ; 
    }
}