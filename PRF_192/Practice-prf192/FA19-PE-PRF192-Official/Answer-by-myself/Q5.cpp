#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int *a;
	int i;
	a = (int*)calloc(10, sizeof(int));
	for (i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int j, sum = 0;
    for (i = 0; i < 10; i++){
    	if(a[i] % 2 == 0)
        sum += pow(a[i], 2);
    }
    printf("%d", sum);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
