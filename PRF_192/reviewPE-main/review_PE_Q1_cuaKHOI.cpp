#include <stdio.h>

int getUserChoice (){
	int choice;
	printf("\n1. Add");
	printf("\n2. Subtract");
	printf("\n3. Multiply");
	printf("\n4. Divide");
	printf("\n5. Quit");
	printf("\nChoose: ");
	scanf("%d%*c",&choice);
	return choice;
}

int main(){
	int userChoice;
	int num1,num2;
	double result;
	char choose;
	int flag=1;
	printf("****Arithmetics Program*****");
	printf("\n\n\n");
	do{
		userChoice= getUserChoice();
		switch (userChoice){
			case 1:		printf("Enter the first number: ");
						scanf("%d",&num1);
						printf("Enter the second number: ");
						scanf("%d",&num2);
						result= num1+num2;
						printf("The result of %d + %d is %lf",num1,num2,result);
						printf("\nContinue? (y/n)");
						fflush(stdin);
						scanf("%c",&choose);
						if (choose!='y') flag=0;
						break;
			case 2:		printf("Enter the first number: ");
						scanf("%d",&num1);
						printf("Enter the second number: ");
						scanf("%d",&num2);
						result= num1-num2;
						printf("The result of %d - %d is %lf",num1,num2,result);
						printf("\nContinue? (y/n)");
						fflush(stdin);
						scanf("%c",&choose);
						if (choose!='y') flag=0;
						break;
			case 3:		printf("Enter the first number: ");
						scanf("%d",&num1);
						printf("Enter the second number: ");
						scanf("%d",&num2);
						result=num1*num2;
						printf("The result of %d * %d is %lf",num1,num2,result);
						printf("\nContinue? (y/n)");
						fflush(stdin);
						scanf("%c",&choose);
						if (choose!='y') flag=0;
						break;
			case 4:		printf("Enter the first number: ");
						scanf("%d",&num1);
						printf("Enter the second number: ");
						scanf("%d",&num2);
						if (num2==0){
							printf("Divide by 0");
						}else{
							result= (double)num1/(double)num2;
							printf("The result of %d / %d is %lf",num1,num2,result);
						}
						printf("\nContinue? (y/n)");
						fflush(stdin);
						scanf("%c",&choose);
						if (choose!='y') flag=0;
						break;
			case 5:		printf("Bye Bye");
						break;
		}
	}while (userChoice>0 && userChoice<5 && flag==1);
	return 0;
}
