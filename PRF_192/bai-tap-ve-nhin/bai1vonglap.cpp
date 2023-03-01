#include<stdio.h>
#include<math.h>    //thư viện math.h để nhập lệnh tính giai thừa
/*
input: n, int tich, int sum = 0
output : sum = 1 + 1*2 + 1*2*3 + 1*2*3..*n
        I want to understand that is sum of 1! + 2! + 3! + n!
verbs:
step1: print out input n
accept n -> int 
step 2: (for int i = 0; i <= n ,  i++)
        tich = i++;
        sum = i * tich;

    print out : sum of n : n;
    
*/
int main(){
    int n, sum = 0;
    printf("Please input n: \n");
    scanf("%d", &n);
    for(int i = 0; i <= n ; i++)
        for(int j = 0; j <= i ; j++)
            sum = sum + sum * j;
    printf("Sum of 1 + 1*2 + 1*2*3 + 1*2*3..*n is : %d", sum);
}
