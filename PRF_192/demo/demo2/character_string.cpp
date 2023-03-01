#include<stdio.h>
int main(){
	char c1 = 'A';
	char c2 = 65;
	char c3 = 0x41;
	char c4 = 0101;
	printf("%c\n", c1);
	printf("%c\n", c2);
	printf("%c\n", c3);
	printf("%c\n", c4);
	printf("%c%%t, %c%%t, %c%%t, %c\n", c1, c2, c3, c4);
	getchar();
	return 0;
	
}