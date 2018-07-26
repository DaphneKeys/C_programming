#include <stdio.h>
#include "testinggame.h"
#include <unistd.h>
int choose1 = 1 ;//Why?
int choose2 = 2 ;//Who cares
int hint = 1 ;//hint
int a = 1;
int a1 = 1;
int messybed1 = 1;
int pillow1 = 2 ;
int bluecandy = 1  ;
int lastlook = 1;
int leftdoor = 1;
int wait = 1;
int waitseconds = 1;
int waitthird = 1;
int middledoor = 2;
int rightdoor = 3;
int standstill = 4;
int middledoorlook = 1;
int giveup = 1;
int main (void)
{
    printf("Are you wondering why everything is pitch black here?\n");
    printf("1. Why?\n");
    printf("%d. Who cares\n", choose2);
   // if (scanf(" %d" , &choose1)
   //printf("Nyahaha! Are you scared now?\n");
   //printf("Do not fear!\n");
  //  printf("To let you imagine!\n");
   // sleep (1);
   // printf("To create! :D\n");
   // sleep (1);
   //might not need printf("To give you a hard time!\n");
   // sleep (1);
  //  printf("HAHAHA!\n");
   // sleep (1);}
     if (scanf(" %d", &choose2))
    printf("It seems you have no complains!\n");
    printf("Excellent! >:D\n");
    printf("Since you do not care, we'll play this game pitch black :P\n");
    printf("HAHAHAHA\n");
    //printf("It seems he's running away.\n");
    //printf("What are you going to do unknown player?\n");
    //printf("1.Look around\n");
    //printf("2.Do absolutely nothing\n"); 
    printf("Greetings unknown player! Welcome to the game!\n");
    //
    // printf("It seems he's running away.\n");
    //printf("What are you going to do?\n");
    //printf("1.Look around\n");
    //printf("2.Do absolutely nothing\n");
    if (scanf(" %d", &lastlook))
    printf("You are in a room with three doors\n");
    printf("You have only one chance\n");
    printf("1.Left door\n" );
    printf("2.Middle door\n" );
    printf("3.Right door\n" );
    printf("4.Stand still\n" );
    sleep (1);
    printf("Dear player,\n");
    sleep (1);
    printf("Would you like a hint or to just proceed into the game? ;)\n");
    sleep (1);
    printf("%d. I would like a hint please\n" , hint);
    printf("2. Just proceed into the game without knowing anything\n");
    if (scanf(" %d", &hint))
    printf("Didn't I told you I wanted to give you a hard time?\n");
    sleep (1);
    printf("Figure them out yourself! >:D");
    sleep (1);
    printf("YAHAHAHA!\n");
    sleep (6);
    printf("It seems you do not know what to do! 8D\n");
    sleep (1);
    printf("Do you want me to help you look around in this darkness? ;)\n");
    sleep (1);
    printf("%d.Yes\n", a );
    printf("2.No\n");
    if (scanf(" %d", &a))
    printf("Very well then!\n");
    sleep (1);
    //while printf("1.Look around again");
    printf("It is a room with a bed, a television,a door and a man\n");
    sleep (1);
    printf("Feeling helpless eh? Huehuehue\n ");
    sleep (1);
    printf("What are you going to do now? 8D\n");
    sleep (1);
    printf("1.Look at the bed\n");
    printf("2.Talk to the bed\n");
    printf("3.Look at the television\n");
    printf("4.Talk to the television\n");
    printf("5.Look at the door\n");
    printf("6.Talk to the door\n");
    printf("7.Look at the boy\n");
    printf("8.Talk to the boy\n");
    printf("I suggest,\n");
    sleep (1);
    printf("You should just give up :)\n");
    sleep (1);
    if(scanf("%d", &a1))
    printf("A messy bed with a pillow and a blanket\n");
    printf("1.Look around again\n");
    printf("2.Look at the pillow\n");
    printf("3.Talk to the pillow\n");
    printf("4.Look at the blanket\n");
    printf("5.Talk to the blanket\n");
    while (scanf("%d",&messybed1))
    printf("It is a room with a bed, a television,a door and a man\n");
    if (scanf("%d", &pillow1))
    printf("You found a blue candy under the pillow\n");
    printf("Would you like to take the blue candy?\n");
    printf("1.Yes\n");
    printf("2.No\n");
    if (scanf("%d", &bluecandy))
    printf("Blue candy is added in your inventory\n"); //remember to include an inventory header file
    printf("A messy bed with a pillow and a blanket\n");
    printf("1.Look around again\n");
    printf("2.Look at the pillow\n");
    printf("3.Talk to the pillow\n");
    printf("4.Look at the blanket\n");
    printf("5.Talk to the blanket\n");
    
    
    //who cares (opening)
    //if (scanf(" %d", &choose2))
    //printf("It seems you have no complains!");
    //printf("Excellent! >:D");
    //printf("Since you do not care, we'll play this game pitch black :P");
    //printf("HAHAHAHA");
    printf("It seems he's running away.\n");
    printf("What are you going to do unknown player?\n");
    printf("1.Look around\n");
    printf("2.Do absolutely nothing\n");
    if (scanf(" %d", &lastlook))
    printf("You are in a room with three doors\n");
    printf("You have only one chance\n");
    printf("1.Left door\n" );
    printf("2.Middle door\n" );
    printf("3.Right door\n" );
    printf("4.Stand still\n" );
    //you can only do one argument //f(scanf(" %d", &leftdoor))
    //printf("Without a doubt, you tried to open the left door\n");
    //printf("Unfortunately, the door is locked\n");
    //printf("1.Wait\n");
    //printf("2.Inventory\n");
    if (scanf(" %d", &middledoor))
    printf("Without a doubt, you open the middle door\n");
    printf("When you open the door , you find yourself in...\n");
    sleep (10);
    printf("*Everything went silent.*\n");
    printf("1.Look around\n");
    scanf(" %d", &middledoorlook);
    printf("You cannot see\n");
    printf("You are now back in the beginning\n");
    printf("But this time without any details to help you\n");
    printf("What you see is an absolute darkness, pitch black\n");
    printf("1.give up\n");
    printf("2.don't give up\n");
    if (scanf(" %d", &giveup))
    printf("You are desperate to seek light\n");
    printf("but you cannot see\n");
    printf("No matter how hard you try, all you can see is an absolute darkness\n");
    printf("You died in despair\n");
    if(scanf(" %d", &wait))
    printf("You stood still for a few seconds\n");
    printf("It seems you are feeling helpless now\n");
    printf("1.Wait\n");
    scanf(" %d", &waitseconds);
    printf("You can feel a murderous aura behind you\n");
    printf("1.Wait\n");
    scanf (" %d", &waitthird);
    printf("You are stabbed behind in the back\n");
    printf("You tried to see the person that stabbed you in the back\n");
    printf("But you can't see\n");
    printf("You died\n");
    
}
printf("You are determined\n");
printf("You close your eyes despite of the absolute darkness\n");
printf("You see light\n");
sleep(20)
printf("Hey! There's a person!");
printf("Is he alive?");