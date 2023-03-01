#include<stdio.h>
int countdigits (long long n){
	int count=0;
	while (n>0){
		n/=10;
		count++;
	} return count;
}
int sum (long long n){
	int s=0;
	int x;
	while (n>0){
		x = n % 10;
		n/=10;
		s+=x;
	} return s;
}

int main(){
	long long n;
	do{
		printf("***********Counting the digits of a number Program**********");
		printf("\nPlease enter numbers: ");
		scanf("%lld", &n);
		
	} while (n<10);
	printf("\n%lld has %d digits", n, countdigits(n));
	printf("\nSum of digits in n: %d", sum(n));
	return 0;		
}
