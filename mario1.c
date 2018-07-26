#include <stdio.h>
#include <cs50.h>

int main(void)

{
    //declaring my variables
    int height=0;
    int width=1;
    int space=2;
    int hash;
    
    //prompts user for integer until integer is 0 to 23
     
        
    do
    {
        printf(" Welcome to Mario! Please choose a number from 0 to 23 ");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));
    
    do    
    {
        space = GetInt();
    }
    while (int space = 2; (space = height && width); space--;)
    
    //this is the loop that will create the number of rows in the pyramid entered by the user
    for (int width = 1;(width <= height); width++)
   {
       printf("  ");
   }
   for (hash = 1; hash <= (width +1); hash++)
        {
            printf("#");
        }
        
        printf("\n");
  
        return 0;
}


    