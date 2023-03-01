#include<stdio.h>
#include<ctype.h>
int isPrime(int n){
    int result = 1, i;
	for (i = 2; i * i <= n && result == 1; i++)
	{
		if (n % i == 0)
		{
			result = 0;
		}
	}
	return result;
}
void sumPrime(int n){
    int value = 2;
    int count = 0;
    int sum = 0; 
	while (count < n)
	{
		if (isPrime(value) == 1)
		{
			sum += value;
            printf("%d ", value);
			count++;
		}
		value++;
	}
    printf("Sum = %d", sum);
}
void avg(int n){
    int value = 2;
    int count = 0;
    int sum = 0; 
    sumPrime(sum);
    while (count < n){
        if (isPrime(value) == 1)
		{
			sum += value;
            printf("%d ", value);
			count++;
		}
		value++;
    }
    printf("The average of Primes: %.3f", (double) sum / count);
}

void printLowerCase(char ch1, char ch2){
    char c;
    if(ch1 > ch2){
        char t;
        t = ch1;
        ch1 = ch2;
        ch2 = t;
    }
    
    for(c = ch1; c <= ch2; c++){
	    printf("%c\n", c);
	}
}

int calFact(int n){
    if(n > 0 && n < 100){
        return n * calFact(n - 1);
    }else   return NULL;
}

int main(){
    int n;
    printf("Welcome to Summoner's Rift!\n");
    printf("1. Calculating list of Prime Numbers.\n");
    printf("2. Computing average the given list of Prime Numbers.\n");
    printf("3. Print list of lower case characters.\n");
    printf("4. Calculating fact numbers.\n");
    printf("5. Quit\n");
    printf("So, what would you choose? \n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        int num1;
        printf("Please input a number:\n");
        scanf("%d", &num1);
        sumPrime(num1);
        break;
    
    case 2:
        int num2;
        printf("Please input a number:\n");
        scanf("%d", &num2);
        avg(num2);
        break;
    
    case 3:
        char ch1, ch2;
        printf("Enter 2 characters, please: \n");
        scanf("%c%c",&ch1, &ch2);
        printLowerCase(ch1, ch2);
        break;
    
    case 4:
        printf("Please input a number: \n");
        scanf("%d", &n);
        calFact(n);

        break;
    
    case 5:
        printf("Thanks for using LOL, see you soon!!!");
        break;
    
    default: 
        printf("Please input a number from 1 to 5!");
    }
    getchar();
    
}