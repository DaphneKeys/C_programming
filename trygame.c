#include <stdio.h>

int main (void)

{
    //setting up variables
    char LOOK ;
    char HINT ;
    //char LOOK BED;
    printf ("Hello! Welcome to the game\n");
    printf ("Try typing LOOK!\n");
    scanf("%c", &LOOK);
    if (scanf(" %c\n", &LOOK))
{
        if (LOOK)
    {
    printf("It is a room with a bed, a television, a door and a boy\n");
    }
}
    if (scanf(" %c\n", &HINT))
{
        if (HINT)
        
        {
        printf("Now, try typing HINT \n");
        }
        if (scanf(" %c\n", &HINT))
        
    {
        printf("I cannot understand every command that you type, because I like seeing you having a hard time guessing.\n");
        printf("You can start out by LOOK or LOOK AROUND. You can LOOK at specific objects too.\n");
        printf("You can pick things up by typing TAKE. Type simple.\n");
        printf("Type evidence and there will be a list of evidence you have. The same goes to profile. There will be a list of people you have met.\n");
        printf("If you want to show evidence, type show evidence. Talk (name) is to speak to the person that excists in the room to find clues.\n");
        printf("Sometimes when you talk to a specific person to find clues, they wont tell you so you have to question them. At time like this, you will have to Question (name).\n");
        printf("When you question, you have to show evidence to make them speak up.\n\n\n");
}
}
}

