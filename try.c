#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose = 0 ;
    int sing = 0 ; 
    int read;
    int pop;
    int jazz;
    int FT;
    printf("What do you want to do?\n");
    printf("1.Music\n");
    printf("2.Read\n");
    
    do
    {
        printf("Enter your choice\n");
        scanf(" %i", &choose);
        switch (choose)
        {
            case (1) : 
            {
                printf("1.Pop\n");
                printf("2.Jazz\n");
                scanf("%d", &sing);
                
                 case (2) :
            {
                printf("1.Fairy tales\n");
                printf("2.Adventure\n");
                printf("Please enter your choice\n");
                scanf(" %d", &read);
                
                if (sing==1)
                {
                    printf("P.O.P\n");
                    printf("Do you like pop music?\n");
                    printf("1.Yes\n");
                    printf("2.No\n");
                    scanf("%d", &pop);
                    
                    if (pop==1)
                    {
                        printf("I see you like pop music\n");
                    }
                    if (pop ==2)
                    {
                        printf("I see you hate pop music\n");
                    }
                    break;
                } else if (sing==2)
                {
                    printf("J.A.Z.Z\n");
                    printf("Do you like jazz music?\n");
                    printf("1.Yes\n");
                    printf("2.No\n");
                    scanf("%d", &jazz);
                    
                    if (jazz==1)
                    {
                        printf("I see you like jazz music\n");
                    }
                    if (jazz==2)
                    {
                        printf("I see you dont like jazz music\n");
                    }
                    break;
                    
                }
            }
            //case (2) :
            //{
            //    printf("1.Fairy tales\n");
            //    printf("2.Adventure\n");
             //   printf("Please enter your choice\n");
             //   scanf(" %d", &read);
                
                if (read==1)
                {
                    printf("F.T\n");
                    printf("Do you like F.T?\n");
                    printf("1.Yes\n");
                    printf("2.No\n");
                    scanf("%d", &FT);
                    
                    if (FT == 1)
                    {
                    printf("You like FT");
                    }
                    if (FT == 2)
                    {
                        printf("You hate FT");
                    }
                    break;
                    
                } else if (read==2)
                {
                    printf("A");
                    printf("Do you like A?\n");
                    printf("1.Yes\n");
                    printf("2.No\n");
                    break;
                }
            }
        }  
    } while ((choose < 1) || (choose > 2));
}