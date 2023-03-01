#include<stdio.h>
//calculate the gcd of two integers
int gcd(int value1, int value2)
{
	while (value1 != value2)
	{
		if (value1 > value2)
		{
			value1 -= value2;
		}else value2 -= value1;
	}
	return value1;
}

//calculate the LCM of 2 integers
int lcm(int value1, int value2)
{
	return (value1 * value2)/gcd(value1, value2);
}

int main(){
	int m, n, L, G;
	do	//Ý tưởng của khối lệnh do-while này là:
		//cứ thực thi trước chuyện đọc 2 số đi, nếu 1 trong 2 là âm hoặc 0 thì 
		//thực hiện lại vòng lặp thay vì if-else cực mình thì làm cái này
		//làm nhọc người dùng chơi.
	{
		printf("Input 2 positives integer: ");
		scanf("%d%d", &m, &n);
		
	}
	while (m <= 0 || n <= 0);
	G = gcd(m, n);
	L = lcm(m, n);
	printf("GCD: %d, LCM: %d\n", G, L);
	getchar();
	getchar();
	
}