#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void digitCount(int n){
	char str[100];
	itoa(n, str, 10);
	printf("The number %s has %d digit(s).", str ,strlen(str));
}

int SumOfDigit(int n){
	printf("%d", n);
	int sum = 0;
	int remain;
	while(n > 0){
		remain = n % 10;
		n /= 10;
		sum += remain; 
	}
	return sum;
}


int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	digitCount(n);
	printf("Sum of all digit(s): %d", SumOfDigit(n));
}
