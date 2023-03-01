//Ham thay the 
#include<stdio.h>
#include<string.h>
char* replaceAll (char* source, char* subStr, char* repStr){
	int subL = strlen (subStr);
	int repL = strlen (repStr);
	char temp[100];
	char* ptr = strstr(source, subStr);
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
		ptr = strstr (source, subStr);
	}
	return source;
}	

int main(){
	char S[80] ="con bo trong hang con coc nhay ra, coc chet";
	char subStr[21] = "bo";
	char repStr[21] = "kien";
	puts(S);
	replaceAll(S, subStr, repStr);
	puts(S);
	getchar();
	getchar();
	return 0;
}
