#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose = 0 ;
    int sing[20] = 0 ; 
    //int read;
    
    printf("What do you want to do?\n");
    printf("1.Sing\n");
    printf("2.Read\n");
    
    do 
    {
        printf("Enter your choice: ");
        scanf(" %d", &choose);
        switch (choose)
        {
            case (1) : printf("You prefer apple. Why?\n");
            getchar(sing[20])
            break;
            
            case (2) : printf("You prefer orange. Why?\n");
            break;
            
            default: printf("\n%d is not a valid choice.\n", choose);
            printf("Try again.\n");
            break;
        }
    } while ((choose < 1) || (choose > 2));
}  
}