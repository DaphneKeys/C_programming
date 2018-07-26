#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum { MAXROW = 1, MAXCOL = 4 }; 

int main (void)

{
     // Variables for storing user input in 2D array
     int i;
     int j;
     int arr[MAXROW][MAXCOL]; //this is the 2D array
     //Variables for random computer generated numbers
     int x = 0;
     int y = 0;
     char array[MAXROW][MAXCOL]; 
////////
int input1=0;
int input2=0;
int comp1=0;
int comp2=0;
       int match1 = arr[input1][input2];
       int match2 = array[comp1][comp2];

    //print computer generated numbers

    srand(time(NULL));

    for (x = 0; x < MAXROW; x++)
    {
        for (y = 0; y < MAXCOL; y++)
        {
            array[x][y] = rand() % 9;
            printf("Computer generated numbers \n");
            printf("%d \n", array[x][y]);
            
        }
        
    }
     //From this line everything works. Need to limit number to 9. Use for loop, maybe. 
     //Taking inputs from user
     for (i = 0; i< MAXROW; i++)
     {
         //1 row at a time
         for(j=0; j<MAXCOL; j++)
         {
             //All columns of given ROW 
             //Change print statement later. 
             printf("Enter value for arr[%d][%d]", i , j);
             scanf("%d", &arr[i][j]);
         }
     }
     //Print values of array
     for (i=0; i<MAXROW; i++)
     {
         for(j=0; j<MAXCOL; j++)
         {
             //All columns
             printf("%d\t", arr[i][j]);
         }
     }
     // if all computer generated numbers == user input, print STRIKE. 
     //arr[i][j] => user input ; array[x][y] => computer generated numbers
     //if statement not working.  compare integers, 
      
     {
     //if(arr[0][0] == array[0][0] || arr[0][0] == array[0][1] || arr[0][0] == array[0][2] || arr[0][0] == array[0][3] 
     //|| arr[0][1] == array[0][0] || arr[0][1] == array[0][1] || arr[0][1] == array[0][2] || arr[0][1] == array[0][3] 
     //|| arr[0][2] == array[0][0] || arr[0][2] == array[0][1] || arr[0][2] == array[0][2] || arr[0][2] == array[0][3]
     //|| arr[0][3] == array[0][0] || arr[0][3] == array[0][1] || arr[0][3] == array[0][2] || arr[0][3] == array[0][3])
      
    // for (input2=0; input2<3; input2++)
     //  for (comp2=0 ; comp2<3 ; comp2++)
     {
       if (match1 == match2)
       printf("\nSTRIKE!");
     }
     {
         int match = match1 == match2 ;
         if (match <= 3) 
         printf("Win");
         //int match = (arr[input1][input2] == array[comp1][comp2]);
         //for (input2=0; input2<3; input2++)
         //for (comp2=0 ; comp2<3 ; comp2++)
         //if (match<= 3) match++;
         //printf("Win"); 
}
}
}

     //if arr[i][j] => user input is >= 2 that is equals to array[x][y] => computer generated numbers 
     //{
     //arr[i][j] == 2
     //if (arr[i][j] >= array[x][y] ) 
     //{
     //printf("\nWin");
     //} else printf("Loose\n");


