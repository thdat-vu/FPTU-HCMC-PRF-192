#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// *****
//  ****
//   ***
//    **
//     *

int main() {
  	system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, j, row;
	//rowdieukien so hang
	scanf("%d", &row);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	//vong for dieu khien so hang
	for(i=1; i <= row; i++){
		//vong for dieu khien khoang trang
		for (j = 1; j <= i; j++){
			printf(" ");
		}
		//vong for dieu khien dau *
		for (j = i; j <= row; j++){
			printf("*");
		}
		
		printf("\n");
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
