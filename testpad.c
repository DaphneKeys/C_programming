#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose1 ;
    int intro;
    //int intro2 = 0 ;
    //int lookatbed = 0;
    //int hint;
    //int yes;
    
    //intro the menu 
    printf("Are you wondering why everything is pitch black here?\n");
    printf("1. Why?\n");
    printf("2. Who cares\n");
    
    do 
    {
        scanf(" %d", &choose1);
        switch (choose1)
        {
            case (1): // choose1 => intro
            
                
              printf("Nyahaha! Are you scared now?\n");
              printf("Do not fear!\n");
              printf("To let you imagine!\n");
              printf("To create! :D\n");
              printf("To give you a hard time!\n");
              printf("Dear player,\n");
              printf("Would you like a hint or to just proceed into the game? ;)\n");
              printf("1. I would like a hint please\n");
              printf("2. Just proceed into the game without knowing anything\n");
              scanf(" %d" , &intro); 
              switch (intro)
              
              case (2) : //choose1 => intro
              printf("It seems you have no complains!\n");
              printf("Excellent! >:D\n");
              printf("Since you do not care, we'll play this game pitch black :P\n");
              printf("HAHAHAHA\n");
              printf("Would you like a hint or to just proceed into the game? ;)\n");
              printf("1. I would like a hint please\n");
              printf("2. Just proceed into the game without knowing anything\n");
              scanf(" %d" , &intro);
               
              if (intro == 1)
              {
              printf("Didn't I told you I wanted to give you a hard time?\n");
              printf("Figure them out yourself! >:D");
              printf("YAHAHAHA!\n");
              printf("It seems you do not know what to do! 8D\n");
              printf("Do u want me to help you look around in this darkness? ;)\n");
              printf("1.Yes\n" );
              printf("2.No\n");
              break; 
              }  else if  (intro == 2)
              {
                
              printf("...\n");
              //sleep
              printf("I can see you're quite lost lol\n");
              printf("Very well then,\n");
              printf("Do you want me to help you look around in this darkness? ;)\n");
              printf("1.Yes\n");
              printf("2.No\n");
              break;
        }
        }     
              
              }while ((choose1 < 1) || (choose1 > 2));
    }
