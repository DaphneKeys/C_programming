#include <stdio.h>

int main (void)
{
    //setting variables
   int amount = 0 ;
   // int wrongVal = 0 ;
   char choice;
   do
   {
    do
     
    {
        printf("Give me an amount. (integer only)\n");
        scanf("%d", &amount);
        printf("Amount is too small.\n");
        printf("Try again..What is new amount?\n");
    } while (amount < 50)   ;
    
    do
     
    { 
        printf("Give me an amount. (integer only)\n");
        printf("Amount is too big.\n");
        printf("Try again..What is the new amount?\n");
        scanf("%d", &amount);
    } while (amount > 50);
    
    do
     
    { 
        printf("This is the right number\n");
        printf("Congratulations!\n");
        printf("Would you like to try again?\n");
        printf("(Y/N)\n");
        scanf("%c", &choice);
    } while(amount == 50)  ;
   
    } while ( choice!= 'N'&& choice!= 'n' );
}

