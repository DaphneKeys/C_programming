#include <cs50.h>
#include <stdio.h>
#include <string.h>

void main (void)
{

    printf("What is your name? ");
    string beyonce = get_string();
    printf("Hello %s! It is very nice to meet you!\n", beyonce);
    //printf("Your name have a length of %z\n" , strlen(beyonce));
}