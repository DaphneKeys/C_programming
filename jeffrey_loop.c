#include <stdio.h>

int main(void) {
    double principal;
    double interest_rate; 
    int i;
    
    printf("Please enter the initial principal: ");
    scanf("%lf", &principal);
    
    printf("Please enter the interest rate: ");
    scanf("%lf", &interest_rate);
    
    printf("Year\tPrincipal\n");
    
    //for(i=0; i < 11; i++) {
    i = 0;
    //while (i < 11) {
    do {
        printf("%d\t%.2lf\n", i, principal);
        principal = principal + principal * interest_rate; 
        principal += principal * interest_rate; 
        i++;
    } while (i < 11);
}