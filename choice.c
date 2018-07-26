#include <stdio.h>

int main(void)
{
    char choice;
    
    printf("Type your choice, either A,B or C\n");
    scanf("%c", &choice);
    if (choice == 'A')
        printf("Your choice was A\n");
    else if (choice == 'B')
        printf("Your choice was B\n");
    else if (choice == 'C')
        printf("Your choice was C\n");
    else 
        printf("You did not choose A, B or C\n");
        printf("Press [Enter] to exit\n");
        scanf("\n");
        return 0;
}