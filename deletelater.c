#include <stdio.h>
#define GAMENAME "PITCHBLACK"
#define CREATOR "DAPHNE"
#define WIDTH 40

void starbar(void);

int main (void)
{
    starbar();
    printf("%s\n", GAMENAME);
    printf("%s\n", CREATOR);
    starbar();
    
    return 0 ;
}

void starbar (void)
{
    int count;
    
    for(count = 1; count <= WIDTH ; count++)
    putchar('*');
    putchar('\n');
}