#include<stdio.h>

int main(){
	double num1, num2;
	char op;
	//2 so la double
	//operator de theo ki tu cua ASCII
	double result = 0;
	printf("number 1, please: ");
	scanf("%lf", &num1);
	fflush(stdin);
	printf("operator, please: ");
	scanf("%c", &op);
	fflush(stdin);
	printf("number 2, please: ");
	scanf("%lf", &num2);
	fflush(stdin);
	
	switch (op){
		case '+': result = num1 + num2;
				  printf("The result is: %f + %f = %f",num1, num2, result);
				  break;
		case '-': result = num1 - num2;
				  printf("The result is: %f - %f = %f",num1, num2, result);
				  break;
		case '*': result = num1 * num2;
				  printf("The result is: %f * %f = %f",num1, num2, result);
				  break;
		case '/': result = num1 / num2;
				  printf("The result is: %f / %f = %f",num1, num2, result);
				  break;
		default:  result = 0;
				  printf("The Op is not supported");
				  break;
	}
	
	getchar();getchar();getchar();
	return 0;
}