#include <stdio.h>
#define salestax .07
int main (void)
{
    //setting variables
    
    int numberoftires;
    float tireprice, beforetax, netsales;
    
    printf("How many tires did you purchase?");
    scanf(" %d", &numberoftires);
    printf("What was the cost per tire (enter in $XX.XX format)? ");
    scanf (" %f", &tireprice);
    
    beforetax = tireprice * numberoftires;
    netsales = beforetax + (beforetax * salestax);
    
    printf("You spent %.2f on your tires\n", netsales);
    
    return 0;
}