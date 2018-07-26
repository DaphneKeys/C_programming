#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum { MAXROW = 1, MAXCOL = 4 };

int main(void)
{
    int x = 0;
    int y = 0;
    char array[MAXROW][MAXCOL]; //user input
    int storeinput[a][b];

//print random numbers

    srand(time(NULL));

    for (x = 0; x < MAXROW; x++)
    {
        for (y = 0; y < MAXCOL; y++)
        {
            array[x][y] = rand() % 9;
            printf("Computer generated numbers \n");
            printf("%d \n", array[x][y]);
            
        }
        
    }
   