#include<stdio.h>
#include<stdlib.h>
//ham chon menu
int menu(){
	printf("\n****Arithmetic Program****\n");
	printf("1.\tAdd\n");
	printf("2.\tSubtract\n");
	printf("3.\tMultiply\n");
	printf("4.\tDivide\n");
	printf("5.\tQuit\n");
	printf("Please select an item <1-5>:");
	int choice;
	scanf("%d", &choice);
	return choice;
}
int choiceExit(){
	printf("\nContinue? (y/n)");
	char choice;
	scanf("%c", &choice);
	return choice;
}

//ham main()
int main(){
	int choice;
	int num1;
	int num2;
	int f = 1;
	do{	
	
		choice = menu();
		switch(choice){
			case 1:
				printf("\nEnter the first number: ");
				scanf("%d", &num1);
				fflush(stdin);
				printf("\nEnter the second number: ");
				scanf("%d", &num2);
				fflush(stdin);
				printf("\nThe result of %d + %d is : %d", num1, num2, num1 + num2);
				break;
			case 2:
				printf("\nEnter the first number: ");
				scanf("%d", &num1);
				fflush(stdin);
				printf("\nEnter the seconde number: ");
				scanf("%d", &num2);
				printf("\nThe result of %d - %d is : %d", num1, num2, num1 - num2);
				break;
			case 3: 
				printf("\nEnter the first number: ");
				scanf("%d", &num1);
				fflush(stdin);
				printf("\nEnter the second number: ");
				scanf("%d", &num2);
				printf("\nThe result of %d * %d is : %d", num1, num2, num1 * num2);
				break;
			case 4: 
				printf("\nEnter the first number: ");
				scanf("%d", &num1);
				fflush(stdin);
				printf("\nEnter the second number: ");
				scanf("%d", &num2);
				if(num2 != 0){
					printf("\nThe result of %d / %d is : %d", num1, num2, num1 / num2);
				}else{
					printf("\nDivided by zero.");
				}
				break;
			case 5:
				if(choiceExit() == 'y'|'Y'){
				f = 0;
				printf("\nGoodbye!");
				} 
				break;
			default:
				printf("\nInput 1 to 5, press 5 to exit!");
				f = 1;
		}
	}while(choice > 0 && choice < 5 && f == 1);
	getchar();
	return 0;
}
