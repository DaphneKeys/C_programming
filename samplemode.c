#include <stdio.h>
int maximum(int n1,int n2,int n3)
{
int max=0;

    if(n1 >= n2)
    {
        if(n1 >= n3)
        {
            if(n1 <= n2)
            max = n1;
            else
            max = n2;
        }
    }
    else 
    {
        {
        if(n2>=n3)
        max = n2 ;
        else
        max = n3;
        }
    }
return max;
} 

int main()
{
    int n1, n2, n3,max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    max = maximum(n1,n2,n3);
    printf("%d is the maximum number\n", max);
}
