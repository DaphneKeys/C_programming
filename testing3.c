#include <stdio.h>
#include <string.h>

int main (void)
{

  char  cup1;
  char  cup2;
  char  cup3;
  
  printf("Choose a cup! Either cup1,cup2 or cup3\n");
  scanf("%c", &cup1);
  if (cup1 == 'T')
        printf("Tea\n");
  scanf("%c", &cup2);
  if (cup2 == 'C')
        printf("Coffee\n");
  scanf("%c", &cup3);
  if (cup3 == 'W')
        printf("Water\n");
    //else
        //printf("You did not choose A, B or C\n");
    //printf("Press [Enter] to exit\n");
    scanf("\n");
    return 0;
}