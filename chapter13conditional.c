#include <stdio.h>

int main (void)
{
    //setting variables
    int numPick;
    printf("pick an integer between 1 and 100 ");
    printf("(The higher the better!)\n");
    scanf(" %d", &numPick);
    
    printf("%d %s divisible by 2.", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
    printf("\n%d %s divisible by 3.", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
    
    return 0;
}