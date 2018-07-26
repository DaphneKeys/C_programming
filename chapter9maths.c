#include <stdio.h>

int main (void)
{
    
    //setting variables
    
    float a = 19.0;
    float b = 5.0;
    float floatanswer;
    
    int x = 19;
    int y = 15;
    int intanswer;
    
    //answers
    floatanswer = a / b;
    //printf("What is the answer of %.2f divided by %.2f?\n", a, b);
    //scanf (" %f", &floatanswer);
    printf("%.2f divided by %.2f equals %.2f\n", a, b, floatanswer);
    
    intanswer = x / y;
    printf("%d divided by %d equals %.1f", x, y, floatanswer);
    
    intanswer = a/b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intanswer);
    
    intanswer = x % y;
    printf("%d modulus %d equals %d", x, y, intanswer);
    
    return 0;
}