#include<stdio.h>
int main(){
	int n;
	long long s = 0;
	printf("nhap n:\n");
	scanf("%d", &n);
	for (int i = 1; i <= n ; i++){
		s = s + i;
		i++;
		
	}
	printf("s = %ld", s);
	getchar();
	return 0;
}