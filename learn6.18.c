#include <stdio.h>
int main (void)
{
    int ROWS = 6;
    int CHARS = 6 ; 
    int row; 
    char ch ; 
    
    for (row = 0 ; row < ROWS ; row++ )
    {
        for (ch = ('4' + row ); ch < ('A' + CHARS) ; ch ++ )
        printf("%c ", ch);
        printf("\n");
    }
    return 0 ;
}