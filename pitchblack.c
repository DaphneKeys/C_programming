#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose2, intro2part1, dennis, bed;
 
              
                  printf("1.Look at the bed\n");
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
                  } //while ((choose2 < 1) || (choose2 > 2))

                          do 
                          {
                           } while (intro2part1 == 1 );
                           {
                               printf("1.Look at the bed\n");
                               printf("2.Talk to the bed\n");
                               printf("3.Look at the television\n");
                               printf("4.Talk to the television\n");
                               printf("5.Look at the door\n");
                               printf("6.Talk to the door\n");
                               printf("7.Look at the boy\n");
                               printf("8.Talk to the boy\n");
                               scanf(" %d", &dennis);
                            while (dennis == 1 && dennis == 1 )
                           {
                               printf("A messy bed with a pillow and a blanket\n");
                               printf("1.Look around again\n");
                               printf("2.Look under the pillow\n");
                               printf("3.Look under the blanket\n");
                               do
                               {
                                 
                               scanf(" %d", &bed);
                            while (dennis == 2);
                           {
                               printf("f");
                           }
                               break;
                            while (intro2part1 == 2 || bed == 2 )
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
                           }
               } while ((choose2 < 1) || (choose2 > 1));
}