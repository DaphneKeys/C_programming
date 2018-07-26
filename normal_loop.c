#include <stdio.h> 
int main (void) 
{
    while (getchar() != 'y')
    {
        printf("Do you like one piece?\n");
        while (getchar() != '\n')
        continue; 
    }
     printf(" I knew you like it!! \n");
     
     return 0 ; 
}