#include <stdio.h>
#define ROWS 6 
#define CHARS 10 
int main (void)
{
    int row;
    char ch; 
    
    for (row = 1 ; row < ROWS ; row ++ )
    {
        for (ch = 'A'; ch = ('G' + CHARS) ; ch++)
        printf("%c", ch );
        printf("\n");
        
    }
    
    return 0 ;
}