#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  	system("cls");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[7];
	int i;
	for (i = 0; i < 7; i++){
		scanf("%d", &a[i]);
	}
	
	
	
	
	
	
	
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	
	
	int k;
	for (k = 0; k < 7; k++){
		int count=0;
		while (a[k]>0){
			a[k]/=10;
			count++;
			if (count == 2){
				printf("%d ", a[k]);
			}
		}
	}
	
	
	
	
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}


