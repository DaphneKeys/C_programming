#include<stdio.h>
int main (void)
{
int hotdogs = 0;
{
printf("Would you like to buy a hotdog?\n");
printf("[1] Yes\n");
printf("[2] No\n");
scanf("%d", &hotdogs);
if (hotdogs == 1) 
printf("Here you go!\n");
if (hotdogs == 2)
printf("You're a cheapskate aren't you?\n");
printf("Everyone loves my hotdogs!\n");
while (scanf("%d", &hotdogs) == 1)
printf("You really love my hotdogs!\n");
}
}