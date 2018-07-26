#include <stdio.h>
int main (void)
{
    int x = 100;
    
    x = getchar()
    
    putchar("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal %#o; hex = %#x\n", x, x, x);
    
    return 0;
}