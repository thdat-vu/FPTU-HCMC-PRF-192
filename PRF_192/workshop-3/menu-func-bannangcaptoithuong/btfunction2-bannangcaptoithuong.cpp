#include<stdio.h>
#include<stdlib.h>
#include"PrimeNumber.c"
#include"CharacterCase.c"
#include"Fact.c"
#include"Menu.c"
/*
Menu.c
Start
do{
	accept choice:
	case (choice): 1 to 4: Function 1 -> 4
	5 : Quit.
}until choice == 5.
End
*/
int main(){
	int choice;
	do{
		choice = menu();
		switch (choice){
		    case 1:
		        int num1;
		        printf("\nPlease input a number:\n");
		        scanf("%d", &num1);
		        sumPrime(num1);
		        break;
		    case 2:
		        int num2;
		        printf("\nPlease input a number:\n");
		        scanf("%d", &num2);
		        avg(num2);
		        break;
		    case 3:
		       	char ch1, ch2;
				printf("Input 2 characters, please: ");
				fflush(stdin);
				scanf("%c%c", &ch1,&ch2);
				printLowerCase(ch1,ch2);
				fflush(stdin);
				break;
		    case 4:
		        printf("\nPlease input a number from 0 to 100: \n");
		        int fact;
		        scanf("%d", &fact);
		        printFact(fact);
		        break;
		    case 5:
		        printf("\nThanks for using My Math, see you soon!!!\n");
		        break;
		    default: 
		        printf("Please input a number from 1 to 5!");
		}
	}while(choice != 5);
	system("pause");
}