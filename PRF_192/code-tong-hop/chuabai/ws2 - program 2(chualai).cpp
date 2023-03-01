#include <stdio.h>
int main(){
	int pa = 9000000, pd = 3600000;
	int n,tf,ti,income;
	float incomeTax;
	printf("Number of dependents =");
	scanf("%d", &n);
	printf("Your income this year=");
	scanf("%d", &income);
	tf= 12*(pa+n*pd);
	ti= income - tf;
	printf("Tax-free income: %d\n", tf);
	if (ti<=0){
		incomeTax=0;
	}
	else if (ti<=5000000){
		incomeTax= 0.05 *ti;
	}
	else if (ti<=10000000){
		incomeTax= 0.1 *ti;
	}
	else if (ti<=18000000){
		incomeTax= 0.15 *ti;
	}
	else{
		incomeTax= 0.2 * ti;
	}
	printf("Taxable income: %d\n", ti);
	printf("Income tax: %f\n", incomeTax);
	getchar();
}
	
					
				
				
	
	
	
	
