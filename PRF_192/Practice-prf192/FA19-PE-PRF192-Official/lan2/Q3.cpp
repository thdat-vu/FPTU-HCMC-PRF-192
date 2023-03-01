#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a[5];
	int i;
	for (i = 0 ; i < 5; i++){
		scanf("%f", &a[i]);
	}
	
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int j, k;
	for (k = 0 ; k < 5; k++){
		for ( j = 5 - 1 ; j > k; j--){
			if (a[j] > a[j - 1]){
				float temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	
	for (i = 0 ; i < 5; i++){
		printf("%f ", a[i]);
	}




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
