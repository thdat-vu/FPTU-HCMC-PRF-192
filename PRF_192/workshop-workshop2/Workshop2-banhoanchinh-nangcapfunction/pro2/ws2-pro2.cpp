#include<stdio.h>
#include"taxCal.c"
//input: income, number of dependent, 
//output : tax-free income, taxable income, income tax.

int main(){
    long long income;
    int n;//n = dependent people.
    printf("Your income of this year: \n");
    scanf("%f",&income);
    printf("Number of dependent: \n");
    scanf("%d", &n);
    taxCal(income, n);
    getchar();
    getchar();

}