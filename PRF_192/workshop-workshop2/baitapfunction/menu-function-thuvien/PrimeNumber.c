#include<stdio.h>
int isPrime(int n)//hàm có đầu vào có đầu ra
{//ý tưởng của isPrime:
//result đc tạo ra để giữ kết quả true, false: 1 là True, 0 là False
//số nguyên tố bắt đầu từ 2, cho i chạy từ 2 trở đi và nếu i^2
//chạy từ khoảng 2 -> n và là số nguyên tố cuối cùng thì dừng
//với i tăng 1 đơn vị mỗi vòng lặp
//trong for nếu số n này chia hết đc cho i thì i rõ ràng ko phải số nguyên tố
//trả về 0;
//hàm trả về từ 2 đến n là các result 1 1 0 1 1 ...
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
//ý tưởng của in_số_nguyên_tố:
//tạo 1 biến cờ là count cho là 0.
//tạo biến value -> 2 để nhét vô hàm isPrime(value) vì số nguyên
//tố bắt đầu từ số 2 mà.
//while(count mà vẫn còn bé hơn n){
//nếu hàm isPrime(value) mà == 1; thì in nó ra; count cộng thêm 1;
//}value cộng lên thêm 1;
//
void print_n_Primes(int n)//hàm có đầu vào nhưng ko có đầu ra
{
	int count = 0;
	int value = 2;
	while (count < n)
	{
		if (isPrime(value) == 1)
		{
			printf("%d ", value);
			count++;
		}
		value++;
	}
	
}
//hàm main
int main(){
	int n;
	printf("Input number of primes: ");
	scanf("%d", &n);
	print_n_Primes(n);
	getchar();
	getchar();
	return 0;
}