#include <stdio.h>
#include <cs50.h>

void print_number(int number); 
void isee(int n );  //just reminding the computer that i promise i will use this
void hello(int dontknow);
void print_number2(int number2);
void say(int dontknow, string s );

int main (void)
{
    

    int number = get_int(); 
    print_number(number);
    
    
    int number2 = get_int();
    print_number2(number2);
    
}

void print_number(int number) //print 1st number 
{
    printf("x = %d\n", number);
}


void print_number2(int number2) //print 2nd number 
{
    printf("y = %d\n", number2);
}




