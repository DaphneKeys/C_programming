#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{

	int userguess1; 
	int userguess2;
	int userguess3; 
	int userguess4; 
	int computerguess1;
	int computerguess2;
	int computerguess3;
	int computerguess4; 
	
	srand ( time(NULL) );
    computerguess1 = rand() % 9 ;
    computerguess2 = rand() % 9 ;
    computerguess3 = rand() % 9 ;
    computerguess4 = rand() % 9 ;
    
    
	
    printf("Computer generated numbers : %d %d %d %d \n", computerguess1, computerguess2, computerguess3, computerguess4); 
	scanf("%d %d %d %d", &userguess1 , &userguess2, &userguess3 , &userguess4);
    {
   // if ( userguess1 || userguess2 || userguess3 || userguess4 == computerguess1 || computerguess2 || computerguess3 || computerguess4)
	//printf("STRIKE\n");
    

    
        char win_str[4];
        char try_str[4];
        sprintf(win_str, "%d %d %d %d ", computerguess1 , computerguess2 , computerguess3 , computerguess4 );
        sprintf(try_str, "%d %d %d %d", userguess1 , userguess2, userguess3 , userguess4);
        int match = 0;
        
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (win_str[i] == try_str[j])
                {
                    try_str[j] = 'x';
                    match++;
                 
                    break;
                }
            }
        }

        switch (match)
        {
        case 0:
            printf("No digits in %d %d %d %d match %d %d %d %d - LOOSE\n", userguess1 , userguess2, userguess3 , userguess4, computerguess1 , computerguess2 , computerguess3 , computerguess4 );
            break;
        case 1:
            printf("One digit of %d %d %d %d matches %d %d %d %d - LOOSE\n", userguess1 , userguess2, userguess3 , userguess4, computerguess1 , computerguess2 , computerguess3 , computerguess4 );
            break;
        case 2:
            printf("Two digits of %d %d %d %d match %d %d %d %d - WIN\n", userguess1 , userguess2, userguess3 , userguess4, computerguess1 , computerguess2 , computerguess3 , computerguess4 );
            break;
        case 3:
            printf("Three digits of %d %d %d %d match %d %d %d %d- WIN\n", userguess1 , userguess2, userguess3 , userguess4, computerguess1 , computerguess2 , computerguess3 , computerguess4 );
            break;
        //default:
          //  printf("The impossible happened (%d %d %d %d vs %d %d %d %d gives %d %d %d %d matches)\n", userguess1 , userguess2, userguess3 , userguess4, computerguess1 , computerguess2 , computerguess3 , computerguess4 , match1, match2, match3, match4);
            break;
        }
    
    return 0;
}
	
    }




    