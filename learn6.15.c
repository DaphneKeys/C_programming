#include <stdio.h>
int main (void)
{
    const int secret_code = 13;
    int code_entered ;
    do 
    {
    printf("To enter the triskaidekaphobia theraphy club , \n");
    printf("please enter the secret code :"); 
    scanf("%d" , &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured! \n");
    
    return 0 ;
}