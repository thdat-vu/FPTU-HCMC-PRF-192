#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	double a[5];
	int i;
	for (i = 0; i < 5; i++){
		scanf("%lf", &a[i]);
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int j, k;
	for (j = 0; j < 5 - 1 ; j++){
		for(k = 5; k > j; k-- ){
			if (a[k]>a[k-1]){
				float temp = a[k];
				a[k] = a[k -1];
				a[k - 1]= temp;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("%lf ", a[i]);
	}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
