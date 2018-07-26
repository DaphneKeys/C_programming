
#include <stdio.h> 
#include <curses.h> 
#include <math.h> 
#include <string.h> 
int main (void) {
    
int c = 2;
int n = 5;
long sumofsq(int n); 

    int sum = 0, i; 
for (i = 1; i <= n; i++) 
sum = sum + (i*i); 
return sum; 


printf("%ld ^%d+", sumofsq(n), c); 
printf("Given n = %d\n", n); 
printf("The sum of square for the series %s is %ld \n", formatSeries(n), sumofsq(n)); 

} 


}


