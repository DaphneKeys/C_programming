#include <stdio.h>
 int main (void)
 {
int x = 4;
int *address_of_x = &x;
printf("The address of x is %p\n", &x);

printf("%p store %d\n", &x , *address_of_x);
 }