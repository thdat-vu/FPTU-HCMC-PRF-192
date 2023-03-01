/*
	taxCal(long long income, int n){
	tf <- 12*(pa + n*pd)
	print out tf
	ti <- income - tf
	(ti <= 0) ? ti = 0 : ti;
	<= 5.000.000 :5%
	From 5.000.001 to 10.000.000 : 10%
	From 10.000.001 to 18.000.000 : 15%
	> 18.000.000 : 20%
	print out: tf, ti, incomeTax 
}
*/

void taxCal(long long income, int n){
	long long tf, ti, incomeTax;
	int pa = 9000000, pd = 3600000;
	tf = 12 * (pa + (n * pd));
    printf("Tax-free income: %ld\n", tf);
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
        incomeTax = 5000000 * 0.05 + (ti - 5000000)* 0.1;
    }else if (ti > 10000000 && ti <= 18000000){
        ti = ti;
        incomeTax = 5000000 * 0.05 + 5000000 * 0.1 + (ti - 10000000) * 0.15;
    }else{
        ti = ti;
        incomeTax = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + (ti - 18000000) * 0.2;
    }
    printf("Tax-free income: %ld\n", tf);
    printf("Taxable income: %ld\n", ti);
    printf("Income tax: %ld\n", incomeTax);
}