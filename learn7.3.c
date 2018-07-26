#include <stdio.h>
#include <ctype.h>
int main (void)
{
 int ch;
 
 ch = getchar() ;
 while ((ch = getchar()) != '\n')
 {
  if (isalpha(ch))
      putchar(ch + 1);
   else 
      putchar(ch)
 }
 putchar(ch);
 
 return 0;
}