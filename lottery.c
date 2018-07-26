#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{

int input[4][2];
int i, x;

for (i=0;i<4;i++)
{
    printf("4 digits\n");
    scanf("%d ", &x);
    if (x>9 || x<0 )
    printf("error"); 
    
}
input [i][0] = x;
input [i][1] = rand();

for (i = 0 ; i < 4; i++)
printf("%d" , input [i][0] );

}


        input[4][2] = 'x';

        for (i = 0 ; i < 4 ; i ++ )
        if (input[i][0] == input[i][1])
        printf("exact match\n");
        counthits = counthits+1;