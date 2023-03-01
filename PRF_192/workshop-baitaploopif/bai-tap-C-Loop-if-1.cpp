#include <stdio.h>
/*
Nouns: 
	Input: n, i , sum -> int.
	Output: sum of eve number(s) from 1 to n.
Verbs:
	Begin
	sum <- 0;
	print out: input a number < 10.
	if number < 10 then input again!
	accept number -> int.
	for loop: from i = 1 -> i <= n, step: i = i + 1{
	if i mod 2 == 0 then sum = sum + i.
	}//end for
	print out: sum.
	End.
*/
int main() {
	int n,i, sum;
	sum= 0;
	printf("Input an integer less than 10: \n");
	scanf("%d", &n);
	while (n > 10) {
		printf("Please input again: less than 10!!!\n");
		scanf("%d", &n);
	}
	for (i = 1;i <= n;i++) {
		if (i % 2 == 0) {
		sum += i;
		}
	}
	printf("Sum of even number(s) from 1 to %d is: %d ", n, sum);
	getchar();
}
