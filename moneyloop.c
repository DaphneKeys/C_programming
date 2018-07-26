#include <stdio.h>
#define ROWS 4 
#define CHAR 7 

int main (void)
{
    int row; 
    char ch ; 
    
    for ( row = 1 ; row <= ROWS ; row++)
    {
        for(ch = 1; ch <= CHAR ; ch++)
        printf("$");
        printf("\n");
        
    }
    return 0 ;
}
