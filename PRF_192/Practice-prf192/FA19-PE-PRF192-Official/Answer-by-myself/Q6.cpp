#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char S[80] ="con coc trong hang con coc nhay ra, coc chet";
	char subStr[21] = "coc";
	char repStr[21] = "bo";
	char temp[100];
	puts(S);
	int subL = strlen (subStr);
	int repL = strlen (repStr);
	char* ptr = strstr(S, subStr);
	int i;
	while (ptr != NULL){			//while subStr exists
		strcpy (ptr, ptr + subL);	//Shift subStr up
		if (repL > 0){
			strcpy (temp, ptr);		//prepare space for repStr
			strcpy (ptr + repL, temp);
			//copy characters in repStr to source
			for (i = 0; i < repL; i++){
				*(ptr + i) = repStr[i];
				
			}
		}
		ptr = strstr (S, subStr);
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
