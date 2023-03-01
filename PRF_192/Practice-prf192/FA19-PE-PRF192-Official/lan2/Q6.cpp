#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char string[100];
	char subStr[5];
	char repStr[5];
	
	gets(string);
	fflush(stdin);
	gets(subStr);
	int k;
	for(int k=strlen(subStr)-1;k>=0;k--)  //strlen tr? v? d? dài c?a chu?i
    {
        strcpy(subStr, repStr);
    }
	
	
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	puts(string);
  	puts(subStr);
	int subL = strlen (subStr);
	int repL = strlen (repStr);
	char temp[100];
	char* ptr = strstr(string, subStr);
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
		ptr = strstr (string, subStr);
	}
	
	puts(string);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
