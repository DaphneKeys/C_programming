//Learn how to use if 
//Open Chapter11ifelse to learn if...else statement.

#include <stdio.h>
#define CURRENTYEAR 2013
int main (void)
{
    
    int yearBorn, age;
    
    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);
    
    if (yearBorn > CURRENTYEAR)
  {
    printf("Really? You haven't been born yet?\n");
    printf("Want to try again with a different year?\n");
    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);
  }
  age = CURRENTYEAR - yearBorn;
  
  printf("\nSo this year you will turn %d on your birthday!\n", age);
  
  if ((yearBorn % 4) == 0)
  {
      printf("\nYou were born in a Leap Year--cool!\n");
  }
      return 0;
    
}

