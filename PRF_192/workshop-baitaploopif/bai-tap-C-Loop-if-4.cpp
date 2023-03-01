#include <stdio.h>
/*
Nouns:
Noun :
Input: n , count , x, y
Output: sum 
Verb :
	1. print out : Input n, x
	2. accept n , x -> int
	3. s = 0
	stop = 1;
	count = 0;
	4. for(i = 1; i<= n && stop == 1 ; i++)
	{
		if(i % 2 == 0 ){
		s += i;
		count++;
		if(count == x){
		stop = 0;
		} //end if
	}//end if
}//end for
*/
int main() {
	int n,number, x, stop, count, sum;
	//number: xet cac so tu 1 den n
	//x la so chan
	//stop la bien co de dung neu da tinh du x 
	//count: de dem bao nhieu da tinh tong
	//sum: tong x so chan
	
	//ep nguoi dung phai nhap dung (n > 10, x > 0, x phai < n).
	do{
		printf("Input n: \n");
		scanf("%d", &n);
		printf("Enter x: \n");
		// x duoc dung de tinh tong x so chan dau tien tu 1 den n
		scanf("%d", &x);
	}while((n < 10) || (x <= 0 || x > n));
	//gan gia tri cho nay
	sum = 0;
	count = 0;
	stop = 1;
	printf("Even number(s) from 1 to %d is: ", n);
	for(number = 1; (number <= n) && (stop == 1) ; number++){
		//neu la so chan thi count tang 1.
		if(number % 2 == 0){
			printf("%5d", number);
			sum += number;
			count++;//neu la so chan nho tang count len 1
			if(count == x){
				stop = 0;
			}
		}
	}
	printf("\n Sum of %d even number(s) from 1 to %d is %d", x, n, sum);
	getchar();
}
