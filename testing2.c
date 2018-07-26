#include <stdio.h>

int main (void)

{

char BED;
    printf ("It is a room with a bed,a television,a door and a boy\n");  
    scanf("%c", &BED);
//first if
    if  (scanf(" %c\n", &BED))
{
         if (BED)
    {
    //printf ("It is a room with a bed,a television,a door and a boy\n");
    printf ("A messy bed with a pillow and a blanket\n");
    }
}
}