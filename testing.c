#include <stdio.h>

int main (void)

{
    //Setting up variables
    char LOOK ;
    char HINT ;
    char BED;
    printf ("Hello!Welcome to the game\n");  
    printf ("Try typing LOOK!\n");
    scanf("%c", &LOOK);
//first if
    if  (scanf(" %c\n", &LOOK))
{
         if (LOOK)
    {
    printf ("It is a room with a bed,a television,a door and a boy\n");
    }
}

//second if
  if (scanf(" %c\n", &HINT))
{ 
     if (HINT)
 
    {
    printf ("Now, try typing HINT \n");
    } 
     if (scanf(" %c\n", &HINT))
  {   
    printf("I cannot understand every command that you type,because I like seeing you having a hard time guessing.\n");
    
  }   
} 

{
    printf ("It is a room with a bed,a television,a door and a boy\n");  
}
    if (scanf("%c", &BED))

    if  (scanf(" %c\n", &BED))
{
         if (BED)
    {
    //printf ("It is a room with a bed,a television,a door and a boy\n");
    printf ("A messy bed with a pillow and a blanket\n");
    }
}
}