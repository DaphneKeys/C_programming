#include <stdio.h>
//#include <cstring>

void sort(char str[10][20],int number){
    int i,j,k;
    char temp;
    for(i=0;i< number; i++) {
        for (j = i+1; j<number; j++){
            if (strcmp(str[i], str[j]} > 0))
            for (k=0; k<20; k++) {
                temp = str[i][k];
                str[i][k] = str[j][k];
                str[j][k] = temp;
            }
        }
    }
}
void print_array(char str[10][20], int number){
    int i ; 
    for (i=0; i<number; i++){
        printf("%s\n",str[i]);
    }
    printf("---\n");
int main (void)
{
    int num names, i;
    char names[10][20],ch; //no more than 10 names & no more than 20 characters per name
    
    printf("How many students are in the class? ");
    scanf("%d", &num_names);
    scanf("%c", &ch); 
    
    for (i=0; i < num_names; i++){
        printf("Enter the name for student %d: ", (i+1));
        fgets(names[i],20,stain);
    }
    
    print_array(names, num_names);
    sort(names, num_names);
    print_array(names, num_names);
}