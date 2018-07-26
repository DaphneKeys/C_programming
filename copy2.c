#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
     int input[4][2];
     int i, x , counthits = 0;

    input [i][0] = x;
    input [i][1] = rand();
    for (i = 0 ; i < 4; i++)
    {
    printf("computer generated number : %d" , input [i][0] );
    }
    for (i = 0 ; i < 4 ; i++)
    {
    printf("Enter an integer value between 0 to 9 : ");
    if (scanf("%d", &input[i][0]) != 1)
    return 1;
    while (input[i][0] < 0 || input[i][0] > 9) 
    {
    		printf("Invalid input. Integer should be between 0 and 9 only. Try again.");
    		printf("Enter an integer value between 0 to 9 : ");
    		scanf(" %d" , &input[i][0]);
    }
    
        input[4][2] = 'x';

        for (i = 0 ; i < 4 ; i ++ )
        {
        if (input[i][0] == input[i][1])
        {
        printf("exact match\n");
        counthits = counthits+1;
        
        }
        if (input[i][0] == input[i][1])
        printf("1 digit match");
        if (input[i][0] == input[i][1])
        printf("2 digit match");
        if (input[i][0] == input[i][1])
        printf("3 digit match");
    }
}