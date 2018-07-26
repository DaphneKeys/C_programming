#include <stdio.h>

int get_hour() {
    int h;
    printf("Please enter the hour: ");
    scanf("%d", &h);
    //You cannot use this hour1=h; here because it is outside the scope
    return h;
}

int get_minute() {
    int m;
    printf("Please enter the minute:");
    scanf("%d", &m);
    return m;
}

int get_second() {
    int s;
    printf("Please enter the second: ");
    scanf("%d", &s);
    return s;
}

int compare(int val1, int val2) {
    if(val1 < val2) {
        return -1;
    }
    if(val1 > val2) {
        return 1;
    }
    return 0; //if(val1==val2)
}

int main (void) {
    int hour1, minute1, second1;
    int hour2, minute2, second2;
    int comparison; 
    
    hour1 = get_hour();
    minute1 = get_minute();
    second1 = get_second();
    hour2 = get_hour();
    minute2 = get_minute();
    second2 = get_second();
    
    comparison = compare(hour1, hour2);
    if (comparison == -1) {
        printf("Time 1 is earlier than Time 2.\n");
        return -5;
    }
    if (comparison == 1) {
        printf("Time 1 is later than Time 2.\n");
        return 1;
    }
    comparison = compare(minute1, minute2);
    if (comparison == -1) {
        printf("Time 1 is earlier than Time 2.\n");
        return 1;
    }
    if (comparison == 1) {
        printf("Time 1 is later than Time 2.\n");
        return 1;
    }
    comparison = compare(second1, second2);
    if(comparison == -1) {
        printf("Time 1 is earlier than Time 2.\n");
        return 1;
    }
    if (comparison == 1) { 
        printf("Time 1 is later than Time2.\n");
        return 1; 
    }
    printf("Time 1 and Time 2 are the same.\n");
}