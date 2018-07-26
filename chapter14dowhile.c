#include <stdio.h>

int main (void)
{
    float num1, num2 , result;
    char choice ; 
    
    do { 
        
        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);
        
        printf("Enter your second number to multiply: ");
        scanf(" %f", &num2);
        
        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n\n" , num1, num2, result);
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N) : " );
        scanf (" %c", &choice);
    
        //if (choice == 'n')
        //{
        //    choice = 'N';
        //}

        } while ( choice!= 'N'&& choice!= 'n' );
        //if the choice is not 'N', the program continues 
        
        //return 0;
        
}