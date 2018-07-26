#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose ;
    int intro;
    int darkness;
    int intro2part1 ;
    //int intro2part2;
    //int intro2part3;
    //int intro2part4;
    //int intro2part5;
    //int intro2part6;
    //int lookatbed = 0  ;
    int dennis;
    int bed;
    int choose2;
    //int intro2;
    
    //intro the menu 
    printf("Are you wondering why everything is pitch black here?\n");
    printf("1. Why?\n");
    printf("2. Who cares\n");
    
    do 
    {
        scanf(" %d", &choose);
        switch (choose)
        {
            case (1): // choose1 => intro
            
                
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
              //break;
              //switch (intro)
              
              //case (2):
              
              //printf("It seems you have no complains!\n");
              //printf("Excellent! >:D\n");
              //printf("Since you do not care, we'll play this game pitch black :P\n");
              //printf("HAHAHAHA\n");
              //printf("Dear player,\n");
              //printf("Would you like a hint or to just proceed into the game? ;)\n");
              //printf("1. I would like a hint please\n");
              //printf("2. Just proceed into the game without knowing anything\n");
              //scanf(" %d" , &intro); 
              //break;
              
              if (intro == 1)
              {
              printf("Didn't I told you I wanted to give you a hard time?\n");
              printf("Figure them out yourself! >:D");
              printf("YAHAHAHA!\n");
              printf("It seems you do not know what to do! 8D\n");
              printf("Do u want me to help you look around in this darkness? ;)\n");
              printf("1.Yes\n" );
              printf("2.No\n");
              scanf(" %d", &darkness);
               
              }   if  (intro == 2)
              {
                
              printf("...\n");
              //sleep
              printf("I can see you're quite lost lol\n");
              printf("Very well then,\n");
              printf("Do you want me to help you look around in this darkness? ;)\n");
              printf("1.Yes\n");
              printf("2.No\n");
              scanf(" %d", &darkness);
               
              }   
              
              if (darkness == 1 || darkness == 2)  
              {
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
              }
        }
    } while ((choose < 1) || (choose > 2));

             do
              {
                  scanf(" %d" , &choose2);
                  switch (choose2)
                  {
                      case(1) :
                      
                           printf("A messy bed with a pillow and a blanket\n");
                           printf("1.Look around again\n");
                           printf("2.Look under the pillow\n");
                           printf("3.Look under the blanket\n");
                           scanf(" %d", &intro2part1);
                           //break;
                  } while ((choose2 < 1) || (choose2 > 2))

                           
                           while (intro2part1 == 1 )
                           {
                               printf("1.Look at the bed\n");
                               printf("2.Talk to the bed\n");
                               printf("3.Look at the television\n");
                               printf("4.Talk to the television\n");
                               printf("5.Look at the door\n");
                               printf("6.Talk to the door\n");
                               printf("7.Look at the boy\n");
                               printf("8.Talk to the boy\n");
                               do
                               {
                               scanf(" %d", &dennis);
                           } while (dennis == 1);
                           {
                               printf("A messy bed with a pillow and a blanket\n");
                               printf("1.Look around again\n");
                               printf("2.Look under the pillow\n");
                               printf("3.Look under the blanket\n");
                               do
                               {
                                 
                               scanf(" %d", &bed);
                           } while (dennis == 2);
                           {
                               printf("f");
                           }
                               break;
                           } while (intro2part1 == 2 || bed == 2 )
                           {
                               printf("You found a blue candy\n");
                               printf("1.Look around\n");
                               scanf("%d", &dennis);
                               break;
                           }
                           
                           while (intro2part1 == 3 || bed == 3)
                           {
                               printf("There is nothing\n");
                               printf("1.Look around\n");
                               scanf("%d", &dennis);
                               break;
                           }
                       
                      //case (2) : 
                      
                       //    printf("Unfortunately, the bed did not respond.\n");
                       //    printf("1.Look at the bed \n");
                       //   printf("2.Look at the television\n");
                       //    printf("3.Talk to the television\n");
                        //   printf("4.Look at the door\n");
                        //   printf("5.Talk to the door\n");
                        //   printf("6.Look at the boy\n");
                       //   printf("7.Talk to the boy\n");
                       //   break;
                       //    scanf(" %d", &intro2part2  );
                        //   break;
              
            
         
}
                      
                    //  case (3) :
                      
                    //      printf("Rowdy cowboy show is going on.\n");
                    //      printf("1.Look around\n");
                    //      printf("2.Look at the bed again\n");
                    //      printf("3.Talk to the bed\n");
                    //      printf("4.Talk to the television\n");
                    //      printf("5.Look at the door\n");
                    //      printf("6.Talk to the door\n");
                    //      printf("7.Look at the boy\n");
                    //      printf("8.Talk to the boy\n");
                          //break;
                     //     scanf(" %d", &intro2part3);
                    //      break;
                      
                     // case (4) :
                      
                      //    printf("Unfortunately, the television did not respond.\n");
                     //     printf("1.Look around\n");
                     //     printf("2.Look at the bed again\n");
                     //     printf("3.Talk to the bed\n");
                     //     printf("4.Look at the television\n");
                     //     printf("5.Look at the door\n");
                     //     printf("6.Talk to the door\n");
                     //     printf("7.Look at the boy\n");
                     //     printf("8.Talk to the boy\n");
                          //break;
                     //     scanf(" %d", &intro2part4);
                     //     break;
                      
                     // case (5) :
                      
                     //     printf("It is a locked blue door.\n");
                     //     printf("1.Look around\n");
                     //     printf("2.Look at the bed\n");
                     //     printf("3.Talk to the bed\n");
                     //     printf("4.Look at the television\n");
                      //    printf("5.Talk to the television\n");
                      //    printf("6.Look at the door\n");
                      //    printf("7.Talk to the door\n");
                      //    printf("8.Look at the boy\n");
                     //     printf("9.Talk to the boy\n");
                          //break;
                     //     scanf(" %d", &intro2part5);
                     //     break;
                          
                    //  case (6) : 
                      
                     //     printf("Unfortunately, the door did not respond.\n");
                     //     printf("1.Look at the bed\n");
                     //     printf("2.Talk to the bed\n");
                     //     printf("3.Look at the television\n");
                     //     printf("4.Talk to the television\n");
                     //     printf("5.Look at the door\n");
                     //     printf("6.Talk to the door\n");
                     //     printf("7.Look at the boy\n");
                     //     printf("8.Talk to the boy\n");
                          //break;
                    //      scanf(" %d", &intro2part6);
                    //      break;
                 // }  /  
                 // }while ((choose < 1) || (choose > 2));
                 // }while ((choose2 < 1) || (choose2 > 6));
             // }
              
              
            //  } if (lookaround == 1)
          //   {
           //   printf("1.Look at the bed again\n");
           //   printf("2.Talk to the bed\n");
          //    printf("3.Look at the television\n");
           //   printf("4.Talk to the television\n");
           //   printf("5.Look at the door\n");
           //   printf("6.Talk to the door\n");
           //   printf("7.Look at the boy\n");
            //  printf("8.Talk to the boy\n");
            //  } if (lookatbed == 1)
           //   break;
          //    }  if (darkness == 2)
          //    {
          //    printf("Very well then!\n");
          //    printf("It is a room with a bed, a television,a door and a man\n");
              //printf("Feeling helpless eh? Huehuehue\n ");
              //printf("What are you going to do now? 8D\n");
              //printf("1.Look at the bed\n");
              //printf("2.Talk to the bed\n");
              //printf("3.Look at the television\n");
              //printf("4.Talk to the television\n");
              //printf("5.Look at the door\n");
              //printf("6.Talk to the door\n");
              //printf("7.Look at the boy\n");
              //printf("8.Talk to the boy\n");
              //printf("I suggest,\n");
              //printf("You should just give up :)\n");
              //}
              }
