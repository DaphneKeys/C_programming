#include <stdio.h>

int main (void)
{
    int ctr = 0;
    
    printf("Counter is at %d.\n", ctr++);
    printf("Counter is at %d.\n", ctr++);
    printf("Counter is at %d.\n", ctr++);
    printf("Counter is at %d.\n", ctr++);
    printf("Counter is at %d.\n", ctr++);
    
    printf("Counter is at %d.\n", ctr--);
    printf("Counter is at %d.\n", ctr--);
    printf("Counter is at %d.\n", ctr--);
    printf("Counter is at %d.\n", ctr--);
    
    return 0;
}