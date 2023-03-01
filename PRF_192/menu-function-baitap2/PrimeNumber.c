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
    printf("\nSum = %d", sum);
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