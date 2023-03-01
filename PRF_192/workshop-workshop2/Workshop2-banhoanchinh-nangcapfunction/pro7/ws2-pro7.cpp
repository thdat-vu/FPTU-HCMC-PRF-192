#include<stdio.h>
#include"character.c"
int main(){

	char ch1, ch2, c;
	int d;
	printf("Input c1: \n");
	scanf("%c", &ch1);
	fflush(stdin);
	printf("Input c2: \n");
	scanf("%c", &ch2);
	//neu lo ki tu 1 ma dung sau ki tu 2 
	// thi doi cho tui no lai. t la bien trung gian
	//de doi cho
	characterPrint(ch1, ch2);
	getchar();
	
	return 0;
}