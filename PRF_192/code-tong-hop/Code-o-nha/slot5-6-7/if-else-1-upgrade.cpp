#include<stdio.h>
int main(){
	int mark;
	int reward;
	printf("Your mark: ");
	scanf("%d", &mark);
	// OPERATOR ? : THIS IS THE MAGIC!!!!!
	//READY ?????
	printf("Reward: ");
	printf((mark > 8) ? "500000" : "0");// tam th?c di?u ki?n
	//mark > 8 co dung ko ???
	//co thi in "500000"
	//ko thi in "0"
	
	getchar(); getchar();
	return 0;
	
}