#include <stdio.h>
#define SPACE ' '
int main (void)
{
    char ch;
    
    ch = getchar();
    while (ch != '\n')
    
    {
        if (ch == SPACE)
        putchar (ch + 1);
    }
    
    
    return 0;
}