#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum { MAXROW = 20, MAXCOL = 30 };

int main(void)
{
    int x = 0;
    int y = 0;
    char array[MAXROW][MAXCOL];

    srand(time(NULL));

    for (x = 0; x < MAXROW; x++)
    {
        for (y = 0; y < MAXCOL; y++)
        {
            array[x][y] = rand() % 26 + 'A';
            printf("%c ", array[x][y]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Scan columns:\n");
    for (int row = 0; row < MAXROW - 1; row++)
    {
        for (int col = 0; col < MAXCOL; col++)
        {
            if (array[row][col] == array[row+1][col])
                printf("a[%2d][%2d] = a[%2d][%2d] = %c\n", row, col, row+1, col, array[row][col]);
        }
    }

    printf("Scan rows:\n");
    for (int col = 0; col < MAXCOL - 1; col++)
    {
        for (int row = 0; row < MAXROW; row++)
        {
            if (array[row][col] == array[row][col+1])
                printf("a[%2d][%2d] = a[%2d][%2d] = %c\n", row, col, row, col+1, array[row][col]);
        }
    }

    return(0);
}