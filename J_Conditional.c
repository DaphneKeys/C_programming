#include <stdio.h>

int main (void) {
    float value1, value2; 
    char operation;
    
    printf("Enter number 1: ");
    scanf("%f", &value1);
    printf("Enter number 2: ");
    scanf("%f", &value2);
    
    printf("%.1f %.1f\n", value1, value2);
    
    printf("[+] Addition\n");
    printf("[-] Subtraction\n");
    printf("[x] Multiplication\n");
    printf("[/] Division\n");
    printf("[%%]Modulus\n");
    printf("Which operation would you like to perform? ");
    scanf("%c", &operation); // read \n
    scanf("%c", &operation);
    
    //printf("%c\n", operation);
    
    switch(operation) {
        case '+' :
        printf("%.1f + %.1f = %.1f\n", value1, value2, (value1 + value2));
        break;
        case '-' :
        printf("%1f - %1f = %1f\n", value1, value2, (value1 - value2));
        break;
        case 'x' :
        printf("%1f x %1f = %1f\n", value1, value2, (value1 * value2));
        break;
        case '/' :
        printf("%1f / %1f = %1f\n", value1, value2, (value1 / value2));
        break;
        case '%' :
        printf("%1f %% %1f = %d\n", value1, value2, ((int)value1 % (int)value2));
        break;
        default:
        printf("You didn't enter a valid operation.\n");
    }
}