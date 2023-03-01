/*
isPrime(int n){
	Input: result <- 1, i -> int
	Output: result(1or0)
	for (i = 2; i * i <= n && result == 1; i <- 1)
	{
		if (n % i == 0)
		{
			result <- 0;
		}
	}//end for
}
sumPrime(int n){
int value <- 2;
    int count <- 0;	
    int sum <- 0; 
	while (count < n)
	{
		if (isPrime(value) == 1) then
		{
			sum <- sum + value
            printf("%d ", value)
			count <- count + 1
		}//end if
		value <- value + 1
	}//end while
    printout sum.
}
avg(int n){
    int value <- 2,count <- 0;
    int sum <- 0;
    while (count < n){
        if (isPrime(value) == 1) then
		{
			sum <- sum + value;
			count <- count + 1.
		}//end if
		value <- value + 1;
    }//end while
	print out avg.

*/


int isPrime(int n){
    int result = 1, i;
	for (i = 2; i * i <= n && result == 1; i++)
	//trong phạm vi từ 2 đến căn(n) và vẫn còn là số nguyên tố
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
    int count = 0;	//tăng lên 1 nếu nó là số nguyên tố
    int sum = 0; 
	while (count < n)
	{
		if (isPrime(value) == 1)
		{
			sum += value;
            printf("%d ", value);	//in ra để xem có phải là dãy đó đúng ý ko
			count++;
		}
		value++;
	}
    printf("\nSum = %d",sum);
}
void avg(int n){
    int value = 2, count = 0;
    int sum = 0;
   while (count < n){
        if (isPrime(value) == 1)
		{
			sum += value;
			count++;
		}
		value++;
    }
//	sumPrime(n);
    printf("\nThe average of first %d prime number(s) is: %.3f", count, (float) sum / count);
}