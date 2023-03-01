#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void demDonVi(char* str, int number){
	printf("The number %d has %d digit(s)", number, strlen(str)); 
}
char* convertDigit(char* str){
	int i = 0;
	while(str[i] != '\0'){
		str[i] = (int)(str[i]);
		i++;
	}
	return str;
}

int sumOfDigit(char str[]){
	convertDigit(str);
	int i = 0,sum = 0;
	while (str[i] != '\0'){
		sum += str[i];
		i++;
	}
	return sum;
}

int main(){
	int number;
	char str[100];
	printf("******** Counting the digits of a number Program **********\n");
	printf("Please enter a numbers\n");
	scanf("%d",&number);
	itoa(number, str, 10);	
	puts(str);
	demDonVi(str, number);
	printf("\n%d", sumOfDigit(str));
}
