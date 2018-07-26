#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int win1 , win2, win3, win4;
    int num1 , num2 , num3, num4;

    srand(time(NULL));
    win1 = rand() % 9;
    win2 = rand() % 9;
    win3 = rand() % 9; 
    win4 = rand() % 9; 

    printf("1st winning number = %d\n", win1);
    printf("2nd winning number = %d\n", win2);
    printf("3rd winning number = %d\n", win3);
    printf("4th winning number = %d\n", win4);
    
   

    printf("Enter an integer value between 0 to 9 : ");
    if (scanf("%d", &num1) != 1)
    return 1;
    while (num1 < 0 || num1 > 9) 
    {
    		printf("Invalid input. Integer should be between 0 and 9 only. Try again.");
    		printf("Enter an integer value between 0 to 9 : ");
    		scanf(" %d" , &num1);
    }
    
        
        
    printf("Enter an integer value between 0 to 9 : ");
    if (scanf("%d", &num2) != 1)
    return 1;
    while (num2 < 0 || num2 > 9) 
    {
    		printf("Invalid input. Integer should be between 0 and 9 only. Try again.");
    		printf("Enter an integer value between 0 to 9 : ");
    		scanf(" %d" , &num2);
    }
        
        
    printf("Enter an integer value between 0 to 9 : ");
    if (scanf("%d", &num3) != 1)
    return 1;
    while (num3 < 0 || num3 > 9) 
    {
    		printf("Invalid input. Integer should be between 0 and 9 only. Try again.");
    		printf("Enter an integer value between 0 to 9 : ");
    		scanf(" %d" , &num3);
    }
        
        
    printf("Enter an integer value between 0 to 9 : ");
    if (scanf("%d", &num4) != 1)
    return 1;
    while (num4 < 0 || num4 > 9) 
    {
    		printf("Invalid input. Integer should be between 0 and 9 only. Try again.");
    		printf("Enter an integer value between 0 to 9 : ");
    		scanf(" %d" , &num4);
    }
        
        

    if ((num1 == win1) && (num2 == win2) && (num3 == win3) && (num4 == win4))
        printf("For exact match you get $100,000\n");
    else
    {
        char win1_str[4];
        char win2_str[4];
        char win3_str[4];
        char win4_str[4];
        char try1_str[4];
        char try2_str[4];
        char try3_str[4];
        char try4_str[4];
        sprintf(win1_str, "%d", win1);
        sprintf(win2_str, "%d", win2);
        sprintf(win3_str, "%d", win3);
        sprintf(win4_str, "%d", win4);
        sprintf(try1_str, "%d", num1);
        sprintf(try2_str, "%d", num2);
        sprintf(try3_str, "%d", num3);
        sprintf(try4_str, "%d", num4);
        
        int match = 0;

        for (int a1 = 0, b1 = 0 , c1 = 0 , d1 = 0 ; a1 < 1 && b1 < 2 && c1 < 3 && d1 < 4 ; a1++ , b1++ , c1++ , d1++) 
        {
            for (int a2 = 0, b2 = 0 , c2 = 0 , d2 = 0 ; a2 < 1 && b2 < 2 && c2 < 3 && d2 < 4 ; a2++ , b2++ , c2++ , d2++) 
            {
            if ((win1_str[a1] == try1_str[a2]) && (win1_str[b1] == try1_str[b2]) && (win1_str[c1] == try1_str[c2]) && (win1_str[d1] == try1_str[d2]) && 
            (win2_str[a1] == try2_str[a2]) && (win2_str[b1] == try2_str[b2]) && (win2_str[c1] == try2_str[c2]) && (win2_str[d1] == try2_str[d2]) &&  
            (win3_str[a1] == try3_str[a2]) && (win3_str[b1] == try3_str[b2])&& (win3_str[c1] == try3_str[c2])&& (win3_str[d1] == try3_str[d2])&& 
            (win4_str[a1] == try4_str[a2]) && (win4_str[b1] == try4_str[b2]) && (win4_str[c1] == try4_str[c2])&& (win4_str[d1] == try4_str[d2]))
                {
                    try1_str[a1] = 'x';
                    try2_str[b2] = 'x';
                    try3_str[c2] = 'x';
                    try4_str[d2] = 'x';
                    match++;
                    break;
                }
            }
        }

        switch (match)
        {
        case 0:
            printf("No digits in %3d %3d %3d %3d match %3d %3d %3d %3d- you win nothing\n", num1 , num2 , num3 , num4, win1 , win2 , win3 , win4);
            break;
        case 1:
            printf("One digit of %3d %3d %3d %3d matches %3d %3d %3d %3d- you win $10,000\n", num1 , num2 , num3 , num4, win1 , win2 , win3 , win4);
            break;
        case 2:
            printf("Two digits of %3d %3d %3d %3d match %3d %3d %3d %3d - you win $20,000\n", num1 , num2 , num3 , num4, win1 , win2 , win3 , win4);
            break;
        case 3:
            printf("Three digits of %3d %3d %3d %3d match %3d %3d %3d %3d - you win $50,000\n", num1 , num2 , num3 , num4, win1 , win2 , win3 , win4);
            break;

        }
    }
    return 0;
}