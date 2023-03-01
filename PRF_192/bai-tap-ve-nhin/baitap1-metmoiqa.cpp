/*
nouns: 
input : n -> int;
fact = 1, sum = 0 -> long;
output: 
sum of 1 + 1*2 + 1*2*3 + 1*2*3..*n
or we can understand that is the sum of 1 + 2! + 3!+...+ n! 
n! = n(n-1)!
verb:
step 1:
print out : input a number
accept n;
step 2:
if ( n = 0 ?)
True:   print out The sum is 1!
elif: 
    loop for : 
    start : i = 1;
    end : i <= n;
    step : i++;
    calculating: 
    fact -> fact * i;        (n+1)! = n * i++
    sum -> sum + fact;       sum(n+1) = sum (n) + (n+1)!
    print out : Sum =...

    --------------------
    test case:
    n = 0;
    n = 9;
*/
#include<stdio.h>

main(){
    int n;
    long fact = 1, sum = 0;
    //step 1
    printf("Please input a number : \n");
    scanf("%d",&n);
    //step 2
    if(n = 0)
        printf("The sum is 1");
    else
    {
        for(long i = 1; i <= n; i++)
        {
            fact = fact * i;    //(n+1)! = n * i++
            sum += fact;        //sum(n+1) = sum (n) + (n+1)!
        }
        printf("The sum is: %ld", sum);
    }
    getchar();
    return 0;

}