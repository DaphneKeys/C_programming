#include <stdio.h>

// precondition: num >= 0 
int factorial_recursive(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial_recursive(num - 1 );
}

// precondition num >= 0 
int factorial_iterative(int num) {
    int i, fact = 1;
    for (i=num; i > 1; i--){
        fact *= i; 
    }
    return fact; 
}

void print_chars(int num) {
    char ch, enter;
    printf("Enter character: ");
    scanf("%c", &ch);
    scanf("%c", &enter);
    if (num > 0) {
        num--;
        print_chars(num);
    }
    printf("%c\n", ch);
}

int main (void) {
    int value, fact;
    char enter;
    
    printf("Enter the number to find the factorial of: ");
    scanf("%d", &value);
    scanf("%c", &enter);
    fact = factorial_recursive(value);
    printf("%d! = %d\n", value, fact);
    fact = 0;
    fact = factorial_iterative(value);
    printf("%d! = %d\n", value, fact);
    
    print_chars(4);
}