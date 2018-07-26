#include <stdio.h>

int main (void)
{
    
    //setting variables
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;
    
    //student 88 on first and third test
    grade1 = grade3 = 88;
    
    grade2 = 79;
    
    printf("What did you get on the fourth test");
    printf("(An inteer between 0 and 100)?");
    scanf(" %d", &grade4); // remember & only don't go with string
    
    averageGrade = (grade1+grade2+grade3+grade4)/4;
    
    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95-averageGrade) / 95);
    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade in the class (95)\n");
    printf("You are %.1f percent behind", percentDiff);
    printf("that grade!\n");
    
    return 0;   
}