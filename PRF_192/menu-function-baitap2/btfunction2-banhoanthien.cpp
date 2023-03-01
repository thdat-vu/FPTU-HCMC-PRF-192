#include<stdio.h>
#include"PrimeNumber.c"
#include"CharacterCase.c"
#include"Fact.c"
int main(){
    char n;
    printf("Welcome to Summoner's Rift!\n");
    printf("1. Calculating list of Prime Numbers.\n");
    printf("2. Computing average the given list of Prime Numbers.\n");
    printf("3. Print list of lower case characters.\n");
    printf("4. Calculating fact numbers.\n");
    printf("5. Quit\n");
    printf("So, what would you choose? \n");
    scanf("%d", &n);
    fflush(stdin);

		switch (n){
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
        printf("\nEnter the first characters, please: \n");
        scanf("%c",&ch1);
        fflush(stdin);
        printf("\nEnter the first characters, please: \n");
        scanf("%c",&ch2);
        printLowerCase(ch1, ch2);
        break;
    
    case 4:
        printf("\nPlease input a number: \n");
        int f;
        scanf("%d", &f);
        calFact(f);
        break;
    
    case 5:
        printf("\nThanks for using LOL, see you soon!!!");
        break;
    
    default: 
        printf("Please input a number from 1 to 5!");
    }

    
    getchar();
    
}