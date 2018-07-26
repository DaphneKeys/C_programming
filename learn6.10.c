#include <stdio.h>
int main (void)
{
    const int NUMBER = 22; 
    int count = 0 ;
    
    while (count <= NUMBER) 
    {
        printf("Be my Valantine! %d \n", count++ );
        //count ++ ; 
    }
    return 0 ;
}