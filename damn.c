#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int win;
    int num;

    srand(time(NULL));
    win = rand() % (999 - 100 + 1) + 100;

    printf("Here is the winning number: %d\n", win);

    printf("Enter three digit number to win lottery:\n");
    if (scanf("%d", &num) != 1)
        return 1;

    if (num == win)
        printf("STRIKE\n");
    else if (num < 0 || num > 999)
        printf("Your number is out of range - you win nothing\n");
    else
    {
        char win_str[4];
        char try_str[4];
        sprintf(win_str, "%d", win);
        sprintf(try_str, "%d", num);
        int match = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
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
            printf("No digits in %.3d match %3d - LOOSE\n", num, win);
            break;
        case 1:
            printf("One digit of %.3d matches %3d - LOOSE\n", num, win);
            break;
        case 2:
            printf("Two digits of %.3d match %3d - WIN\n", num, win);
            break;
        case 3:
            printf("Three digits of %.3d match %3d - WIN\n", num, win);
            break;
        default:
            printf("The impossible happened (%.3d vs %3d gives %d matches)\n", num, win, match);
            break;
        }
    }
    return 0;
}