#include<stdio.h>

int main(){
    int num1, num2, t;

    printf("Please input 2 numbers a and b: \n");
    do{
        scanf("%d%d", &num1, &num2);
        //scanf("%d", &num1);
        //fflush(stdin);
        //Scanf("%d", &num2);
        int t = num1; //t la bien ta15m thoi de swap
        num1 = num2;
        num2 = t;
        printf("2 numbers have been swapped!!!\n");
        printf("Number a is : %d now\n", num1);
        printf("Number b is : %d now \n", num2);

    }while (num1 != 0 && num2 != 0);
    getchar();


    return 0;


}