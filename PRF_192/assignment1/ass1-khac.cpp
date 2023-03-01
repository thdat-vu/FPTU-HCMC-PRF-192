#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void demDonVi(char* str, int number){
	printf("The number %d has %d digit(s)", number, strlen(str)); 
}
int convertDigit(str[]){
	int atoi(str);
	return str;
}

int sumOfDigit(char str[]){
	
	int i = 0,sum = 0;
//	while (str[i] != '\0'){
//		sum += str[i];
//		i++;
//	}
	
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
//	if (strlen(str) < 10 ){
//		printf("Input valid! Number must be more than 10 digit!")
//	}
	demDonVi(str, number);
	printf("\n%d", sumOfDigit(str));
}
