#include <stdio.h>
int main (void)
{
    int n, number , max = 0 , i , secondmax =0 ; 
    printf("How many numbers do you want to give? \n");
    scanf("%d", &n );
    if (n > 0)
    {
    printf("You choose to give %d numbers, give me your lists of %d numbers\n", n, n );
    scanf("%d", &number);

        for (i = 1 ; i < n ; i ++ )    
        scanf("%d %d", &number, &secondmax);
        if ( number > max )  max = number ;
        
        for ( i = 2 ; i < n ; i ++)
        if ( number > secondmax) secondmax = number ;
    
          printf("Your maximum number is %d\n and your 2nd maximum number is %d", max, secondmax);
    }
    
}