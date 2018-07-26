#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer value: ");
    scanf("%d", &n);

    originalInteger = n;

    // reversed integer is sto/red in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d and its reverse are the same.\n", originalInteger);
    else
        printf("%d is its reverse are NOT the same.\n", originalInteger);
    
    return 0;
}