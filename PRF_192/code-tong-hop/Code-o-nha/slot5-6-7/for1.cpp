#include<stdio.h>
int main(){
char code;
for (code = 0; code < 256; code++){
	printf("%c , %3d, %o, %3X\n", code, code, code, code);
	
	getchar();
	
	
}
}