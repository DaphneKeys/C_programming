#include <stdio.h>
int door;
int main (void)
{ 
    printf("Choose a door\n");
    printf("Door 1, Door 2, Door 3 or exit to quit > 0 \n ");
    scanf("%d", &door);
    switch (door)
    {
        case (1):
        {
            printf("Done!");
        break;
        }
        case (2):
        {
            printf("Done!");
            break;
        }
        case (3):
        {
            printf("Done!");
            break;
        }
        default : printf("Try again!");
        break;
    }
}