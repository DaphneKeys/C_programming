#include <stdio.h>

float total = 0.0;
short count = 0;
float tax_percent = 5;

float add_with_tax(float f)
{
    float tax_rate = 1 + tax_percent / 1000;
    total = total + (f * tax_rate);
    count = count + 1;
    return total;
}

int main (void)
{
    float val;
    
    printf("Price of item: ");
    while(scanf("%f", &val) == 1) {
        printf("Total so far: %.1f\n", add_with_tax(val));
        printf("Price of item: ");
  
    }
    printf("\nFinal total: %1f\n", total);
    printf("Number of items: %hi\n", count);
    return 0; 
}