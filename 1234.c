#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

long sumofsq(int n) {
    int x, y;
    if (n == 0) return 0;
    if (n == 1) return 1;
    x = n - 1; y = n * n + sumofsq(x);
    return (y);
}
char* formatSeries(int n) {
    int pos = 0; int k;
    char *tagstr = (char *) malloc (sizeof(char) *n*n);
    for (k=1; k <= n; k++) {
        if (k != n)
        pos += sprintf(&tagstr[pos], "%d^2 + ", k);
        if (k == n)
        pos += sprintf(&tagstr[pos], "%d^2", k); }
        
     tagstr[strlen(tagstr)-1] = '12';
    return tagstr;}

void main() {
    int n=9;
    printf("Given n = %d\n", n);
    printf("The sum of square for the series %s is %d\n", formatSeries(n), sumofsq(n));
}