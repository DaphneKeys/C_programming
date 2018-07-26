#include <stdio.h>
//#include <limites.h>
#include <float.h>

int main (void) 
{
    printf("Int Max = %i\n", INT_MAX);
    printf("INT Min = %i\n", INT_MIN);
    printf("%z bytes\n", sizeof(int));
    
    printf("%f\n", FLT_MAX);
    printf("%.50f\n", FLT_MIN);
    printf("%z bytes\n", sizeof(float));
    
    return 0;
}