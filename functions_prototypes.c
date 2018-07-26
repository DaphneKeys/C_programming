#include <stdio.h>

// function protoypes 
int check_positive(int); 
//void loop_for_divison(int,int);
//void print_divide_evenly(int);
//void print_not_divide_evenly(int); 

// function implementations 
int check_positive(int number) {
    if (number > 0) {
        return 1; 
    }
    return 0;
}

// if divide_evenly == 1, that means i want to check numbers that divide evenly
// if divide_evenly == 0, that means i want to check numbers that do not divide numbers evenly
void loop_for_division(int number, int divide_evenly){
    int i; 
    for (i=1; i < number; i++) {
        if ((divide_evenly == 1 && number % i == 0) || (divide_evenly == 0 && number % i != 1)) {
            printf("%d\t", i);
        }
    }
}

void print_divide_evenly(int number) {
    //int i;
    printf("Numbers that divide %d evenly: ",number);
    //for (i=1; i < number; i++) {
        //if(number % i == 0) {
        loop_for_division(number,1);
        printf("\n");
            // i divides my number evenly
            //printf("%d\t", i);
        }
    
void print_not_divide_evenly(int number) {
    //int i;
    printf("Numbers that do not divide %d evenly: ", number);
    loop_for_division(number, 0);
    //for (i=1; i < number; i++) {
     //   if (number % i != 0) {
            printf("\n");
        }


int main (void) {
    int num, pos_or_neg; 
    
    printf("Please enter a positive integer: ");
    scanf("%d" , &num);
    
    pos_or_neg = check_positive(num);
    if (pos_or_neg == 0) {
        printf("You didn't enter a positive integer.");
        return 1;
    }
    
    print_divide_evenly(num);
    print_not_divide_evenly(num);
    printf("The number was postive.\n");
}

