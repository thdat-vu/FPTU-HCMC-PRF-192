#include<stdio.h>
void printDivisor(int N)
{
	int i;
	for(i = 1; i <= N/2; i++)
		if 	(N % i == 0) printf("%d, ", i);
}
int main(){
	int i, n;
	printf("\n Input n = ");
	scanf("%d", &n);
	printDivisor(n);
	printf("\n Input n = ");
	scanf("%d", &n);
	printDivisor(n);
	printf("\n Input n = ");
	scanf("%d", &n);
	printDivisor(n);
	getchar();
	getchar();
}