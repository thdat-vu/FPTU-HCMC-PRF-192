#include <stdio.h>
/*
Noun: 
	Input: i, num1m, num2, count -> int
	Output: Print out: count odd number from x to y.
Verb:
	Begin
	accept num1, num2 
	if (num1 > num2) || (num1 <= 0 || num2 <= 0) then Input num1, num2 again.
	count <- 0
	for(i = num1; i <= num2;i++){
		if(i mod 2 == 1){
			print out: i
			count = count + 1
		}//end for
	}
	print out: (count) number(s) from x to y.
	End

*/
int main() {
	int i, num1, num2, count;
	//i(index) la cac so tu x den y
	//num1 la so thu nhat
	//num2 la so thu hai
	//count la bien de dem cac so le tu x den y
	//ep nguoi dung nhap dung.
	//do-while
	do{
		printf("Please input x and y, y must be greater than x!!!\n");
		scanf("%d%d", &num1, &num2);
	}while((num1 > num2) || (num1 <= 0 || num2 <= 0));
	//Day la nhung dk sai, neu con nhap sai cu nhap lai
	count = 0;
	printf("The list of odd number(s) from %d to %d: ", num1, num2);
	for(i = num1; i <= num2;i++){
		//neu la so le tang count len 1.
		if(i % 2 == 1){
			printf("%d ", i);
			count++;
		}
	}
	printf("\nThere are/is %d odd number(s)", count);
	getchar();
}
