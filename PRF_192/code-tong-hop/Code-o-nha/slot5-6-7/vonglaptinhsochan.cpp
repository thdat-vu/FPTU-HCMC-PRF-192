#include<stdio.h>

int main(){
	int num1, num2, sum;
	printf("Hay nhap so a va b: \n");
	scanf("%d%d", &num1, &num2);
	sum = 0;
	for (int i = num1; i <= num2; i++){
		if( i % 2 == 0){
			sum += i;
		}
	}	
	
	/*
	int i = a ;
	while(i <= b){
		s += i;
		i++;
	}
	
	 */
	printf("Tong cac so chan tu %d den %d la : %d", num1, num2, sum);
	getchar();
	
}