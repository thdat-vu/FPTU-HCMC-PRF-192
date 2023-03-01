#include<ctype.h>
/*
isCharacter(char c){
	result = 0
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')){
		result = 1;
	}//end if
	return <- result
}
returnLowercase(char c){
	if (c >= 'A' && c <= 'Z') then {
		c <- tolower(c)
	}
	return <- c
}
swap (char &pc1, char &pc2){
	t <- pc1
	pc1 <- pc2
	pc2 <- t
}

printLowerCase (char c1, char c2){
	if (isCharacter(c1) == 1 && isCharacter(c2) == 1){
		c1 <- returnLowercase(c1)
		c2 <- returnLowercase(c2)
		if (c1 > c2) {
			swap(&c1, &c2)
		}//end if
		for (c = c1; c <= c2; c++){
			print out c
		}//end for
	}//end if
}
*/
int isCharacter(char c){
	int result = 0;
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')){
		result = 1;
	} 
	return result;
}

//Function in chu cai ra dang chu thuong
char returnLowercase(char c){
	if (c >= 'A' && c <= 'Z') {
		c = tolower(c);
	}
	return c;
}

//Function hoan doi gia tri cua 2 bien a, b
void swap (char *pc1, char *pc2){
	int t = *pc1;
	*pc1 = *pc2;
	*pc2 = t;
}
// Function 3
void printLowerCase (char c1, char c2){
	char c;
	if (isCharacter(c1) == 1 && isCharacter(c2) == 1){
		c1 = returnLowercase(c1);
		c2 = returnLowercase(c2);
		if (c1>c2) {
			swap(&c1, &c2);
		}
		for (c = c1; c <= c2; c++){
			printf("%c \n",c);
		}
	}	
}