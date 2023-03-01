#include<stdio.h>
//calculating 4 basic operation
//input: num1, op, num2
//output: result = num1 +-*/ num2
int main(){
	double num1, num2;
	char op;
	double result = 0;
	
	printf("Please give me the problem: \n");
	scanf("%lf%c%lf", &num1, &op, &num2);
	switch (op){
			case '+':	result = num1 + num2;
						printf("%lf + %lf = %lf", num1, num2, result);
						break;
			case '-':	result = num1 - num2;
						printf("%lf - %lf = %lf", num1, num2, result);
						break;
			case '*':	result = num1 * num2;
						printf("%lf * %lf = %lf", num1, num2, result);
						break;
			case '/':	if(num2 == 0){
							printf("Divide by 0");
							
			}else{
							result = num1 / num2;
							printf("%lf / %lf = %lf", num1, num2, result);
							
						}
						break;
			//default in case of unsupported such as ^ , %(mod),...
			default: printf("The operator is not supported");
							break;
	}
	getchar();
}