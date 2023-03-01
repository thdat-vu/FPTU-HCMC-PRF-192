#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, j, rows, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

   
   for (i = 1; i <= rows; ++i) {
      for (j = rows; j >= i; --j) {
         printf("*");
      }
      for (space = 1; i <= j; ++space){
      		printf(" ");
		  }
      printf("\n");
   }
         
   







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
