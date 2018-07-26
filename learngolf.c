#include <stdio.h>
int main (void)
{
    int jane, tarzan, cheeta;
    
    cheeta = tarzan = jane = 68;
    printf("      cheeta    tarzan     jane\n");
    printf("First round score %d %8d %8d\n", cheeta,tarzan,jane);
    
    return 0 ;
}