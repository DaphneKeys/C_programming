#include <stdio.h>
 
int main (void)
{
    int number =0  , sum , count ;
    float num ; 
    char ch ; 
    while (number < 6)
    {
        printf ("Your number is too small. \n");
        scanf("%d" , &number);
    }
    
    while (ch != '$')
    {
        count ++ ; 
        scanf ("%c", &ch);
    }
    while (scanf("%f ", &num) == 1)
    sum = sum + num ;
}