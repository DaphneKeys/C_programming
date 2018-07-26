#include <stdio.h>

int main (void)
{ 
    char name [25];
    printf("What is your last name?");
    printf("(Please capitalize the first letter!)\n");
    scanf (" %s",name);
    
    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("You must go to room 2432");
        printf("for your tickets.\n");
        
        
    }