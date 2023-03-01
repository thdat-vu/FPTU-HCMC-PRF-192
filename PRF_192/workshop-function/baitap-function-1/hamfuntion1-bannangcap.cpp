#include<stdio.h>
#include"swap.c"
#include"EvenCheck.c"
#include"AvgEven.c"
/*
Nouns:
Input: num1	-> int , num2 -> int 
Output: Average of the sum from a to b;
Verbs:
Begin.
func kiemTra(n -> int){
	return (n % 2 == 0);
}
func tongSoChan( a, b -> int)
Begin
	for i = a to b, step i <- i+1;
		if (a > b) then swap (a, b)
		if(kiemTra(i) == 1){
				count <- count + 1;
				sum <- sum + i;
			}
		ave <-(double) sum /count.
		print out ave; 
		
End.	
End.
*/

//main function
int main(){
	int num1, num2;
	printf("Please input 2 integers: ");
	scanf("%d%d", &num1, &num2);
	tinhTongSoChan(num1, num2);
	getchar();
	getchar();
	return 0;
}
