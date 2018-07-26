#include <stdio.h>

int main (void)
{
    //set up an array for the last name and then get it from the user
    
    char name [25];
    printf("What is your last name? ");
    printf("(Please capitalize the first letter!)\n");
    scanf(" %s", name);
    //String array dont need the &
    if ((name[0] = 'P') && (name [0] = 'S') || 
    ((name[0] = 's') && (name[0] = 'p')
    {
        printf("You must go to room 2432 ");
        printf("for  your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }
    
    return 0;
}