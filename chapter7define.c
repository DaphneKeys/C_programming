#include <stdio.h>
#include <string.h>
#include "firstheaderfile.h"

int main (void)
{
    //setting variables
    int age;
    //char childname [11] = "Thomas";
    //char childname = "Christopher";
    //char childname = "Benjamin";
    
    printf("\n%s have %d kids.\n", FAMILY, KIDS);
    
    //strcpy(childdname, "Thomas");
    age = 11;
    printf("The oldest, %s, is %d.\n", oldest, age);
    
    //strcpy(childname, "Christopher");
    age = 6;
    printf("The middle boy, %s, is %d.\n",middle, age);
    
    age = 3;
    //strcpy(childname, "Benjamin");
    printf("The youngest, %s, is %d.\n", youngest, age);
    
    return 0;
}