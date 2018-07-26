#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose1 = 0;
    int intro = 0 ;
    int intro2 = 0 ;
    int lookatbed = 0;
    //int hint;
    //int yes;
    
    
    printf("Are you wondering why everything is pitch black here?\n");
    printf("1. Why?\n");
    printf("2. Who cares\n");
    
    do 
    {
        scanf(" %d", &choose1);
        switch (choose1)
        {
            case (1):
            
                 
              printf("Nyahaha! Are you scared now?\n");
              printf("Do not fear!\n");
              printf("To let you imagine!\n");
              printf("To create! :D\n");
              printf("To give you a hard time!\n");
              printf("HAHAHA!\n");
              printf("Dear player,\n");
              printf("Would you like a hint or to just proceed into the game? ;)\n");
              printf("1. I would like a hint please\n");
              printf("2. Just proceed into the game without knowing anything\n");
              scanf(" %d" , &intro);
              switch (intro)
              
              case (1) : //intro
              
              printf("Didn't I told you I wanted to give you a hard time?\n");
              printf("Figure them out yourself! >:D");
              printf("YAHAHAHA!\n");
              printf("It seems you do not know what to do! 8D\n");
              printf("Do u want me to help you look around in this darkness? ;)\n");
              printf("1.Yes\n" );
              printf("2.No\n");
              break; 
              
             
              case (2) : //intro
              printf("It seems you have no complains!\n");
              printf("Excellent! >:D\n");
              printf("Since you do not care, we'll play this game pitch black :P\n");
              printf("HAHAHAHA\n");
              printf("It seems you do not know what to do! 8D\n");
              printf("Do u want me to help you look around in this darkness? ;)\n");
              printf("1.Yes\n" );
              printf("2.No\n");
              break;
              switch (intro2)
            
              do
              {
                  scanf("%d" , &intro2);
                  switch (intro2)
              {
              case (1) : 
              
              printf("Very well then!\n");
              printf("It is a room with a bed, a television,a door and a man\n");
              printf("Feeling helpless eh? Huehuehue\n ");
              printf("What are you going to do now? 8D\n");
              printf("1.Look at the bed\n");
              printf("2.Talk to the bed\n");
              printf("3.Look at the television\n");
              printf("4.Talk to the television\n");
              printf("5.Look at the door\n");
              printf("6.Talk to the door\n");
              printf("7.Look at the boy\n");
              printf("8.Talk to the boy\n");
              printf("I suggest,\n");
              printf("You should just give up :)\n");
              switch (lookatbed)
              
              case (1) :
              
                  printf("A messy bed with a pillow and a blanket\n");
                  printf("1.Look around again\n");
                  printf("2.Look at the pillow\n");
                  printf("3.Talk to the pillow\n");
                  printf("4.Look at the blanket\n");
                  printf("5.Talk to the blanket\n");
              
    
              
               
            
        }
        
    }
     
    
        
            
        
        
        while ((choose1 < 1) || (choose1 > 2));
        
        return 0 ;
        }


}
}
}