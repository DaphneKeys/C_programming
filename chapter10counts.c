#include <stdio.h>

int main (void)
{
    int counter = 10;
    
    counter = counter + 1; //increase counter to 11
    printf("Counter is at %d.\n", counter);
    
    counter = counter + 1; //increase counter to 12
    printf("Counter is at %d.\n", counter);
    
    counter = counter + 1; //increase counter to 13
    printf("Counter is at %d.\n", counter);
    
    counter = counter + 1; //increase counter to 14
    printf("Counter is at %d.\n", counter);
    
    counter = counter + 1;//increase counter to 15
    printf("Counter is at %d.\n", counter);
    
    counter = counter - 1;//decrease counter to 14
    printf("Counter is at %d.\n", counter);
    
    counter = counter - 1;//decrease counter to 13
    printf("Counter is at %d.\n", counter);
    
    counter = counter - 1;//decrease counter to 12
    printf("Counter is at %d.\n", counter);
    
    counter = counter - 1;//decrease counter to 11
    printf("Counter is at %d.\n", counter);
    
//Open chapter10count2.c (same result)
}