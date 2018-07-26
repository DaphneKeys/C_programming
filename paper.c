#include <stdio.h>
int main (void)
{
    //setting variable
    int number1 = 1 ;
    printf("You found a blue candy under the pillow \n");
    printf("Would you like to take the blue candy?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    (scanf("%d", &number1)) ? (printf("Blue candy is added in your inventory")) : (printf("Candies are for kids."));
}