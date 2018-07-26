#include <stdio.h>
int main (void)
{
    int ten = 10;
    int two = 2;
    
    printf(" Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - ten);
    printf("Doing wrong:");
    printf("%d minus %d is %d\n", ten);
    
    return 0;
}