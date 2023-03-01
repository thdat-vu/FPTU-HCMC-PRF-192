#include<stdio.h>
//check an integer if it is even or odd
//hàm không đầu vào nhưng trả về.
int kiemTra(int n){
	int value;
	(n % 2 == 0) ? value = 1 : value = 0;
	return value;
}
//compute sum of even numbers
//hàm có đầu vào nhưng không trả về
void tinhTongSoChan(int a, int b){
	printf("Please input 2 integers: ");
	scanf("%d%d", &a, &b);
	int count = 0, sum = 0;			
	for(int i = a; i <= b; i++){
		//ý tưởng: từ a đến b nếu tra ra i là số chẵn thì cộng nó vào sum
		//sau đó cộng thêm 1 số hạng (count)
		//đến cuối cùng lấy tổng số chia số hạng (sum/count)
		if(kiemTra(i) == 1){
			count++;
			sum += i;
		}
	}
	double ave = sum / count;	//đặt biến này là ave nghĩa là average
	printf("The sum of even number from %d to %d is: %.lf", a, b, ave);
}
//main function
int main(){
	int num1, num2;
	tinhTongSoChan(num1, num2);
	getchar();
	getchar();
	return 0;
}
