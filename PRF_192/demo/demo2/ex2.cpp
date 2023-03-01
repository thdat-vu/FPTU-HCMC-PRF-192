#include<stdio.h>
int main(){
	int n;
	char c;
	printf("Enter an interger: \n");
	scanf("%d",&n);
	printf("Enter a character: \n");
	fflush(stdin);	
	scanf("%c",&c);
	printf("interger: %d, character: %c", n, c);
	fflush(stdin);
	getchar();
	return 0;
	
}