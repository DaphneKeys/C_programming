#include <stdio.h>
int main (void)
{
    long num ; 
    long sum = 0L; 
    int status ; 
    
    printf("Please enter an interger to be summed ");
    printf("(q to quit): ");
    status = scanf("%d", &num);
    while (status == 1) 
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%d", &num);
    }
    printf("Those integers sum to %1d.\n", sum);
    
    return 0 ;
}