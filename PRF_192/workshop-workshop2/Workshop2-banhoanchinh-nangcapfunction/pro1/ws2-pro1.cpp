#include<stdio.h>
#include"operation.c"
//calculating 4 basic operation
//input: num1, op, num2
//output: result = num1 +-*/ num2
/*
Nouns: double num1, num2
char  op
double result

Verbs: scanf( “%lf%c%lf”, &num1, &op, &num2)
switch (op)
              {    case ‘+’ : result = num1 + num2;
                                    print out result;
                                    break;
                   case ‘-’ : result = num1 - num2;
                                    print out result;
                                    break;
                   case ‘*’ : result = num1 * num2;
                                    print out result;
                                    break;
                    case ‘/’ : if ( num2==0)
                                        print out “Divide by 0 “
                                    else
                                     { result = num1 / num2;
                                           print out result;
                                     }
                                    break;
                    default: print out “Op is not supported”
                }

*/

int main(){
	double num1, num2;
	char op;
	printf("Please give me the problem: \n");
	scanf("%lf%c%lf", &num1, &op, &num2);
	operation(num1, op, num2);
	getchar();
}