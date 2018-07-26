#include <stdio.h>

int main (void) {
    char conversion_type; 
    int number;
    
    printf("Convert to hexadecimal (h), octal (o), or binary (b) ? ");
    scanf("%c", &conversion_type);
    
    printf("What number would you like to convert? ");
    scanf("%d", &number);
    
    if (conversion_type== 'h') {
        printf("The base 16 of %d = %d = %x\n", number);
    }
}