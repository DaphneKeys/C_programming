//Open chapter10counts (same result)
#include <stdio.h>

int main (void)
{
    
    int counter = 0;
    
    counter += 1; //increases counter to 1
    printf("Counter is at %d.\n", counter);
    counter += 1;//increases counter to 2
    printf("Counter is at %d.\n", counter);
    
    printf("Counter is at %d.\n", counter +=1);
    counter += 1; //increases counter to 4
    printf("Counter is at %d.\n", counter);
    printf("Counter is at %d.\n", counter -=1);
    printf("Counter is at %d.\n", counter -=1);
    printf("Counter is at %d.\n", counter -= 1);
    
    return 0;
    
}