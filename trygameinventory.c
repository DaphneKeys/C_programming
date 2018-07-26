#include <stdio.h>
#include <string.h>
#include "trygamesheader.h"

int main (void)
{
    int items = 0;
    //char inventory = 0;
    char yes[11];
    //char Rope;
    
    items = items + 1;
    printf("You have %d items in your inventory\n", items);
    printf("Do you want to check your inventory? Yes or No?\n");
    scanf (" %s\n", yes);
    
    //Not working. How to reply the user
    printf("%s\n", RAME);
    
    //inventory = inventory + 1;
    //printf("You have %d items in your %c\n");
    //inventory = inventory + 1;
    //printf("You have %d items in your %c\n");
    //inventory = inventory + 1;
    //printf("You have %d items in your %c\n");
    
    
    
return 0;
}

if