#include<stdio.h>
int n;
int main(){
	int m;
	printf("var. n, add: %u\n", &n);
	printf("Var. m, add: %u\n", &m);
	printf("main code, add: %u\n", &main);
	printf("enter 2 intergers:");
	scanf("%d%d", &n, &m);		//nhớ nha nhớ lỗi thiếu & hoặc thiếu d, hoặc
								//quên mẹ luôn cái &n , &m
	
	printf("Values entered: n = %d, m = %d\n", n, m);
	getchar();
	getchar();
	return 0;
}