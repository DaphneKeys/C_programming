#include <stdio.h>

int main (void)

{
    //setting variables 
    //char i; 
    char inner ; 
    char outer ;
    
    //Another program
    //for (i = 1; i < 18; i += 3)
    //{
    //    printf("%d ", i); 
    //}
    
    for (outer = 1; outer <= 2; outer ++ )
    {
        for (inner = 1; inner <= 5;  inner ++)
        {
            printf("%d ", inner );
        }
        printf("\n");
    }
}
    //Another  program 
    //int employees ;
    //char i ;
    //int cDown;
    
    //{
    //    printf("How many employees in the organization?");
    //    scanf(" %d", &employees);
        
   //     for (i=1; i <= employees; i++)
    //    {
     //       for (cDown = 10 ; cDown > 0 ; cDown --)
     //       {
      //          printf("%d.\n", cDown);
     //       }
     //       printf("Blast off!\n");
     //   }
    //}
 //}