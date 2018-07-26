#include <stdio.h>

int main (void)

{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;
    
    printf("how much does a pizza cost in your area?");
    printf("enter as $XX.X)\n");
    scanf (" $%f", &cost);
    
    printf("What is your favourite one-word pizza topping?\n");
    printf(" %s", topping);
    
    printf("How many slices of %s pizza?", topping);
    printf("can you eat in one sitting?\n");
    scanf(" %d", &slices);
    
    printf("What is today's date (enter it in XX/XX/XX format).\n");
    scanf(" %d/%d/%d", &month, &day, &year);
    
    printf("\n\nWhy not treat yourself to dinner to %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n",cost); //%.2f , 2f 2 decimal places , . to make 2 decimal places work 
    
    return (0);
}