#include <stdio.h>
#include <cs50.h>
void cough(int n);
void say(string s, int n);
int main (void)
{
    
    cough(3);

}
void cough(int n)
{
    say("cough", n);
}
void say(string s, int n)
{
    for (int i = 0 ; i < n ; i++)
    {
    printf("%s\n", s);
    }
}
