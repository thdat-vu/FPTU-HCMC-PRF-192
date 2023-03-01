#include<stdio.h>
int main(){
	int sum = 0;
	int i = 1;
	int n = 3;
	
	for (; i <= n;i++);
	{
		sum += i;
		
	}
	
	printf("\n sum = %d", sum);
	getchar();
	return 0;
	
}