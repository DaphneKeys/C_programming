#include <stdio.h>

int main (void)

{
    //Setting variables
    //int plannets =8
    //The first and third if else Statement
    int friends = 4;//6;
    int beatles = 4;
    int baseball = 5;
    int football = 11;
    int avengers = 6;
    //The second if else statement
    int potterBooks = 7;
    int starWars = 8;
    int months =6;//12;
    //The third if else statement
    int basketball =5;
    
    
    if ((friends + beatles >= baseball) &&
    (friends + avengers >= football))
    {
        printf("The case of Friends and the Beatles");
        printf("could make a baseball team,\n");
        printf("AND the case of Friends plus the Avengers");
        printf("could make a football team.\n");
    }
    else
    {
        printf("Either the Friends cannot make a ");
        printf("baseball team with the Fab Four, \n");
        printf("OR you could see one Star Wars movie a month,\n");
        printf("Avengers (or both!)\n");
    }
    
    if ((starWars <= months) || (potterBooks <= months))
    {
        printf("\nYou could read one Harry Potter book a month,\n");
        printf("and finish them all in less than a year,\n");
        printf("OR you could see one Star Wars movie a month,\n");
        printf("and finish them all in less than a year.\n");
    }
    
    if (!(baseball + basketball > football))
    {
        printf("Neither can happen--too many books or movies,\n");
        printf("Not enough time!\n\n");
    }
    else
    {
        printf("\nThere are more baseball and basketball players\n");
        printf("combined than football players.");
    }
    
    return 0;
    
    
}