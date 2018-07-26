#include <stdio.h>
long sumofsq(int n){
    int x, y; 
    
    if (n==0) return 0;
    if (n==1) return 1;
    
    x = n - 1;
    y = n * n + sumofsq(x);
    return (y);
    
}

char* formatSeries(int n) {
//Implement this (refer to Eq.1)
char *tagstr = (char *) malloc(sizeof(char) *n*n);
    int pos = 0; 
    int k;
    for(k=1; k<=n ; k++)
    {
        pos += sprintf(&tagstr[pos] , "%d^2+ ", b);
    }
    tagstr[strlen(tagstr)-3]='\0';
    return tagstr; 
}
void main(){
int n=6;
printf(" Given n = %d\n", n);
printf(" The sum of square for the series %s is %d\n", formatSeries(n), sumofsq(n));
}
