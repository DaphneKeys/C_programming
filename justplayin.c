#include <stdio.h>
int main (void)
{
    char c ;
    while ( (c = getchar () ) == 'i' || c == 'd' || c == 't' );
    printf("%c", c);
}