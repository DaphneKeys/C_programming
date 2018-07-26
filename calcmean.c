#include <stdio.h>

float mean(float num1,float num2, float num3, float num4, float num5)
{
float x;
x = (num1+num2+num3+num4+num5)/5;
return x;
} 

int main (void)

{
float x, num1, num2, num3, num4, num5;

printf("Please enter your 1st float number\n");
scanf("%f", &num1);
printf("2nd float number?\n");
scanf("%f", &num2);
printf("3rd float number?\n");
scanf("%f", &num3);
printf("4th float number?\n");
scanf("%f", &num4);
printf("5th float number?\n");
scanf("%f", &num5);

x = mean (num1,num2,num3,num4,num5);

printf("Your mean is %f\n", x);
}
