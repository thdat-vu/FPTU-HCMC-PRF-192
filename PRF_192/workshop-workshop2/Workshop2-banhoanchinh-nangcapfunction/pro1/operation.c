/*
operation(int num1, char op, int num2):
swich(op):
	case '+', '-', '*', '/' : 
	result <- num1 / op / num2
	print out: result
	default: 
	print out : op error!
	
*/
void operation(int num1, char op, int num2){
	double result = 0;
	switch (op){
			case '+':	result = num1 + num2;
						printf("= %lf", result);
						break;
			case '-':	result = num1 - num2;
						printf("= %lf", result);
						break;
			case '*':	result = num1 * num2;
						printf("= %lf", result);
						break;
			case '/':	if(num2 == 0){
							printf("Divide by 0");
							
			}else{
							result = num1 / num2;
							printf("= %lf", result);
							
						}
						break;
			//default in case of unsupported such as ^ , %(mod),...
			default: printf("The operator is not supported");
	
	}
}