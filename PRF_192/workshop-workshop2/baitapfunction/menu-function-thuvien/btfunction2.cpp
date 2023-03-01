#include<stdio.h>

int main(){
    int n;
    printf("Please input a number from 1 to 5");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        sumPrime();
        break;
    
    case 2:
        avg();
        break;
    
    case 3:
        printLowerCase();
        break;
    
    case 4:
        calFact();
        break;
    
    case 5:
        printf*=("Thanks for using LOL, see you soon!!!");
        break;
    
    default: printf("please input a number from 1 to 5");
        break;
    }
}