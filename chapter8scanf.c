#include <stdio.h>

int main (void)
{
    //Set up variables 
    
    char firstInitial;
    char lastInitial;
    int age;
    int favourite_number;
    
    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);
    
    printf("What letter does your last name ends with?\n");
    scanf(" %c", &lastInitial);
    
    printf("What's your age?\n");
    scanf(" %d", &age);
    
    printf("What is your favourite number?(Integer only)?\n");
    scanf(" %d", &favourite_number);
    
    printf("\nYou initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
    printf("\nYour favourite number is %d.\n\n", favourite_number);
    
    return 0;
    
}