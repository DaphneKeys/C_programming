#include <stdio.h>

int main (void)
{
    float latitude; 
    float longitude;
    char info[80];
    int started = 0; // Set to 0 , which means false. 
    
    puts("data = [");
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) {
        if (started)
        printf(",\n");
        else 
        started = 1;
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
    return 0;
    }
