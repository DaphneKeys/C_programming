#include <stdio.h>

int main (void)
{
    int amount = 0;
    int WrongVal = 0;
    while (amount < 25)
    {
        printf("Amount too small.\n");
        WrongVal--;
        printf("Try again\n");
        scanf("%d", &amount);
    }
}