#include <stdio.h>
#define PAGES '#'
#define PAGES2 "###"
#define PAGES3 "#####"
#define PAGES4 "#######"
int main (void)
{
    
    printf("%4c\n", PAGES);
    printf("%5s\n", PAGES2);
    printf("%6s\n", PAGES3);
    printf("%s\n", PAGES4);
    
    return 0 ;
}