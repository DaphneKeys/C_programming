#include <stdio.h> 
int main (void)
{
    int n , max, number, i;
    scanf("%d", &n);
    if (n > 0)
    {
        scanf("%d" , &number);
        max = number; 
        for ( i = 3 ; i < n ; i++ ) 
        
        scanf("%d" , &number);
        if(number > max) max = number ;
        printf("MAX = %d \n", max);
        
    }
}