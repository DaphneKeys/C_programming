#include <stdio.h>
int main (void)
{
    int decision1 =0,decision2=0, decision3=0, decision4=0, decision5=0, decision6=0;
    char name[10];
    printf("Give me your name\n");
    scanf("%s", name);
    printf("You find yourself in a room filled with billboards\n");
    printf("1.Read the billboard\n");
    printf("2.Go to the next room\n");
    scanf("%d", &decision1);
    if(decision1 == 1)
    {
        printf("'Believe in yourself'\n");
        printf("1.Read the next billboard?\n");
        printf("2.Go to the next room\n"); 
        scanf("%d", &decision2);
    } if ( decision1 == 2 || decision2 == 2)
    {
        printf("Hello %s\n", name);
        printf("I have been waiting for you! You've got me worried!\n");
        printf("You're asking who am I?\n");
        printf("It seems you've forgotten\n");
        printf("You must be so confused...poor you...\n");
        printf("Welcome %s! You can ask me questions. I'll try to help you.\n", name);
        printf("1.Where am I\n");
        printf("2.What should I do\n");
        scanf("%d", &decision3);
    } if(decision3 == 1)
    {
        printf("You are now in the world known as emptiness\n"); //nothingness
        printf("Weird name huh? I don't know why it's named like that either\n");
        printf("Our goal is to get out of this place\n"); 
        printf("We've been trying to find ways to get out, I've been waiting for you to awaken for years %s\n", name);
        printf("I will try my best to help you...\n");
        printf("Let's go to the next room\n");
        printf("You find yourself in a graveyard\n");
        printf("%s, becareful. In this world, there are creatures that are without a mind and soul\n", name);
        printf("You've got to defend yourself\n");
        printf("Here's a sword. Kill these creatures to protect yourself\n");
        printf("1.Take the sword\n");
        printf("2.Refuse the sword\n");
        scanf("%d", &decision4);
    } if(decision3 == 2)
    {
        printf("Our goal is to get out of this place\n");
        printf("We've been trying to find ways to get out, I've been waiting for you to awaken for years %s.\n", name);
        printf("I will try my best to help you...\n");
        printf("Let's go to the next room\n");
        printf("You find yourself in a graveyard\n");
        printf("%s, becareful. In this world, there are creatures that are without a mind and soul\n", name);
        printf("You've got to defend yourself\n");
        printf("Here's a sword. Kill these creatures to not get yourself killed\n");
        printf("1.Take the sword\n");
        printf("2.Refuse the sword\n");
        scanf("%d", &decision4);
    }
    if(decision4 == 1)
    {
        printf("Nice choice!\n");
        printf("Now! Slay them with your sword!\n");
        printf("The white creatures are coming closer to you\n");
        printf("What should you do?\n");
        printf("1.Use your sword\n");
        printf("2.Stand still\n");
        scanf("%d", &decision5); //decision5 = getchar()
    } if (decision5 == 1)
    {
        printf("As you slay the creatures, you find a white creature that is bigger than the others\n");
        printf("'Please...I beg you...\n");
        printf("You slay it without hesitation\n");
        printf("You enter the next room\n");
    }
    if(decision4 == 2)
    {
        printf("You don't trust me?\n"); //cancel this?
        printf("Why %s?", name);//cancel this?
        printf("...\n");
        printf("You've played this before already didn't you?\n");//cancel this?
        printf("Guess I'll just disappear then\n");//cancel this? 
        printf("The graveyard turns out to be a beautiful garden\n");
        printf("For some reason, you felt this garden familiar\n"); //this garden...
        printf("You walked through the pathway\n");
        printf("You can smell the fragrance of the flowers\n");
        printf("You spent hours chatting and drinking tea with\n");
        printf("dogs?\n");
        printf("Besides the point, you had a great time!\n");
        printf("But you have to continue your journey\n");
        printf("You wave goodbye with the dogs\n");
        printf("The dogs look at you with sadness in their eyes as you leave\n");
        printf("You find yourself in a room with a treasure chest!\n");
    } if(decision5 == 2)
    {
        printf("What are you doing?!\n");
        printf("The white creatures come closer to you and slowly dissappear\n");
        printf("The graveyard turns out to be a beautiful garden\n");
        printf("For some reason, you felt this garden familiar\n"); 
        printf("You walked through the pathway\n");
        printf("You can smell the fragrance of the flowers\n");
        printf("You spent hours chatting and drinking tea with\n");
        printf("dogs?\n");
        printf("Besides the point, you had a great time!\n");
        printf("But you have to continue your journey\n");
        printf("You wave goodbye with the dogs\n");
        printf("The dogs look at you with sadness in their eyes as you leave\n");
        printf("SLAM!\n");
        printf("As you enter the next room, the door closes itself\n");
        printf("You try to open the door but the door is locked\n");
        printf("It seems everytime you enter a room there is no turning back.\n");
        printf("You find yourself in a room with a treasure chest!\n ");
        printf("KYAAAAA!!!");
        printf("You heard a scream coming from the next room\n");
        printf("What are you going to do?\n");
        printf("1.Open the treasure chest\n");
        printf("2.Enter the next room\n");
        scanf("%d", &decision6);
    }
    if (decision6 == 1)
    {
        printf("You open the treasure chest and found 10 gold\n");
        printf("You enter the next room\n");
        printf("You find a woman lying dead on the floor\n");
        printf("");
    }
    if (decision6 == 2)
    {
        printf("You enter the next room\n");
        printf("You find a man almost killed a woman with a knife\n");
        printf("What are you going to do?\n");
        printf("1.Use your sword");
    }
    if(decision2 == 1)
    {
        printf("'What you see may not be the truth'\n");
        printf("1.Read the next billboard?\n");
        printf("2.Go to the next room\n");
        // find another billboard cancel? 
    }
}
    