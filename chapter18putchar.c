#include <stdio.h>
#include <string.h>

int main (void)
{
    int i;
    char msg[] = "C is fun\n";
    
    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]);
    }
    //putchar('\n');
    
    return 0;
}