#include <stdio.h>
/*
Noun: 
	Input: n
	Output: 12 months in a year.
Verb:
	Begin
	print out: input a number from 1 to 12.
	accept: n -> int
	if n < 1 || n > 12 then input again.
	else
	switch(n): case 1 -> 12 : Jan -> Dec.
	print out: month.
	End
*/

int main () {
	int n;
		printf("Please input a number from 1 to 12: \n");
		scanf("%d", &n);
	while(n < 1 || n > 12){
		printf("Please input again: from 1 to 12!\n");
		scanf("%d", &n);
	}
		switch (n) {
			case 1: printf("Month: January");
					break;
			case 2: printf("Month: Febnuary");
					break;
			case 3: printf("Month: March");
					break;
			case 4: printf("Month: April");
					break;
			case 5: printf("Month: May");
					break;
			case 6: printf("Month: June");
					break;
			case 7: printf("Month: July");
					break;
			case 8: printf("Month: August");
					break;
			case 9: printf("Month: September");
					break;
			case 10: printf("Month: October");
					break;
			case 11: printf("Month: November");
					break;
			case 12: printf("Month: Decmeber");
					break;
			
		}
	
	getchar();
}
