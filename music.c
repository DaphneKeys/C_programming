#include <stdio.h>
#define MAX 30

int main (void)
{
    int count = MAX + 1 ;
    
    while (--count > 0 ) { 
        printf("You have listened %d musics \n", count);
    }
    return 0 ;
}