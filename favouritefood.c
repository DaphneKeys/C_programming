#include <stdio.h>
#include <string.h>
//#define praise "Your taste of food is really special! I like that!"
 
int main(void)
{
     char food [40] ;
     //char numfood = 's';
     char lastletter = 'a';
     
     printf("Give me the name of your favourite food!\n");
     scanf("%s", food);
     //gets(mystr);
     //scanf("%s", &numfood);
     //if (scanf("%s", &numfood)){
     //printf("\nLast char: %c\n",food[(strlen(food)-1)]);
     
     lastletter = food[(strlen(food)-1)];
     printf("lol %c.\n", lastletter);
     if (lastletter == 's'){
          printf("Your favourite food are %s.\n", food);
     }else{
          printf("Your favourite food is %s.\n", food);   
     }     

     //printf("Your favourite food are %s.\n", food);
     
     //printf("Your favourite food %s %s. %s\n",(numfood == s) ? ("are") : ("is") ,food, praise;
     //else 
     //printf("Your favourite food is  %s.\n", food);
     //}
     //printf("By the way, just for your information,");
     //printf("your favourite food,%s have %zd letters and have occupied ", food, strlen(food));
    // printf("%zd of my memory cell!!!\n", sizeof food);
    // printf("My praise given to you has %zd letters", strlen(praise));
    // printf("and my praise have occupied %zd of my memory cell", sizeof praise);
     
}