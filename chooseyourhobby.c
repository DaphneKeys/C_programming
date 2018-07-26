#include <stdio.h>
#include <string.h>

int main (void)
{
    char hobby;
    char tryagain;
    char Cooking = 1;
    char cookbest[30];
    char Drawing = 2;
    char drawbest[30];
    
    do{
        printf("What is your hobby?\n");
        printf("%d.Cooking\n" , Cooking);
        printf("%d.Drawing\n" , Drawing);
        printf("3.Reading\n");
        scanf("%c" , &hobby);
        
        if (scanf(hobby == 1))
        {
        printf("What do you cook best?\n");
        scanf("%s" , &cookbest[30]);
            
        }
        
        else if (scanf(Drawing == 2))
        {
        printf("What can you draw best?\n");
        scanf("%s" , &drawbest[30]);
            
        }
        
        
        printf("Would you like to try again?\n");
        printf("1.Yes\n");
        printf("2.No\n");
        scanf("%c" , &tryagain); //Why is it not %d since 2 is a number? 
    
    } while (tryagain!= '2' ); //If tryagain is not 2, the program continues
}