#include<stdio.h>
//input: income, number of dependent, 
//output : tax-free income, taxable income, income tax.

int main(){
    float income, tf, ti, incomeTax;
    float pa = 9000000;
    float pd = 3600000;
    int n;//n = dependent people.


    printf("Your income of this year: \n");
    scanf("%f",&income);
    printf("Number of dependent: \n");
    scanf("%d", &n);
    tf = 12 * (pa + (n * pd));
    printf("Tax-free income: %f\n", tf);

    ti = income - tf;
    //(ti <= 0) ? ti = 0 : ti;
    //if-else

    if(ti <= 0){
        ti = 0;
        incomeTax = 0;
    }else if (ti >0 && ti <= 5000000) {
        ti = ti;
        incomeTax = ti * 0.05;
    }else if (ti > 5000000 && ti <= 10000000){
        ti = ti;
        incomeTax = 5000000 * 0.05 + (ti - 5000000)*0.1;
    }else if (ti > 10000000
     && ti <= 18000000){
        ti = ti;
        incomeTax = 5000000 * 0.05 + 5000000 * 0.1 + (ti - 10000000)*0.15;
    }else{
        ti = ti;
        incomeTax = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2;
    }
    

    printf("Tax-free income: %f\n", tf);
    printf("Taxable income: %f\n", ti);
    printf("Income tax: %f\n", incomeTax);
    getchar();
    getchar();

}