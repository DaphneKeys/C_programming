#include "stdio.h"
#include "stdlib.h"
#include <string.h>

long sumofsq(int n) { //Implement this using recursion
int x, y; 
if (n == 0) return 0;
if (n == 1) return 1; 
x = n - 1; y = n * n + sumofsq(x); 
return (y);
} //format series
char* formatSeries(int n) {//Implement this (refer to Eq.1)
int pos = 0; int k;
char *tagstr = (char *) malloc (sizeof(char)*n*n);
for (k=1; k <= n; k++) {
    if (k != n)
    pos += sprintf(&tagstr[pos], "%d^2 +", k);
    if (k == n)
    pos += sprintf(&tagstr[pos], "%d^2", k); }
    //covert char to string
    tagstr[strlen(tagstr)-1] = 12;
    return tagstr; 
}

int main() {
    int n = 9;
    printf("Given n = %d\n" , n); // print given number of n
    printf("The sum of square for the series %s is %ld", formatSeries(n), sumofsq(n));
}
