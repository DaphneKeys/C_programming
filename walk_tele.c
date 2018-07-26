#include <stdio.h>
#define w 'walk'
#define t 'teleport'
int main (void)
{
    int walk_teleport = 0;
    printf("1.Walk\n");
    printf("2.Teleport\n");
    scanf("%d", &walk_teleport);
    if(walk_teleport == 1)
    printf("You choose to %s!\n", w);
    if (walk_teleport == 2)
    printf("You choose to %s!\n",t);
}
    
    
}