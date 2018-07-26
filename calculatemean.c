#include <stdio.h>
#include <math.h>
 
int main(void)
{
    float  i, n;
    float average, sum = 0;
 
    printf("Enter the value of N \n");
    scanf("%f", &n);
    printf("Enter %f real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    
    printf("Average of all elements = %.2f\n", average);
  
}