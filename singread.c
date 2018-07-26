#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int choose ;
    int sing;
    int read;
    
    printf("What do you want to do?\n");
    printf("1.Sing\n");
    printf("2.Read\n");
    
    do 
    {
        scanf(" %d", &choose);
        switch (choose)
        {
            case (1) :
            
            printf("What do you want to sing?\n");
            printf("1.Pop\n");
            printf("2.Lullaby\n");
            scanf("%d", &sing);
            break;
            
            if (sing == 1)
            {
                printf("p.o.p!\n");
            } else if (sing == 2)
            {
                printf("lalala~\n");
            } else if (sing == 1) 
            
            printf("What do you want to do ? \n");
            printf("1.Sing\n");
            printf("2.Read\n");
            scanf("%d", &read);
            break; 
            
            if (read == 2)
            {
                printf("FT\n");
            }
        }while ((sing < 1 )|| (sing > 2));
    } 
}

      }