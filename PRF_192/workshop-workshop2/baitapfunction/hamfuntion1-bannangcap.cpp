#include<stdio.h>
/*
Nouns:
Input: num1	-> int , num2 -> int 
Output: Average of the sum from a to b;
Verbs:
Begin.
func kiemTra(n -> int){
	return (n % 2 == 0);
}
func tongSoChan( a, b -> int)
Begin
	for i = a to b, step i <- i+1;
		if (a > b) then swap (a, b)
		if(kiemTra(i) == 1){
				count <- count + 1;
				sum <- sum + i;
			}
		ave <-(double) sum /count.
		print out ave; 
		
End.	
End.
*/

//thật ra làm theo đề ko có gì sai
//nhưng nếu NGƯỜI DÙNG NHẬP SỐ THỨ 1 LỚN HƠN SỐ THỨ 2 THÌ SAO ???
//GIẢI PHÁP LÀ THỬ TẠO RA 1 HÀM SWAP XEM.

//swap function
//hàm không đầu vào cũng chẳng có trả ra
void swap(int &a, int &b)	//phải nghiên cứu thêm chứ giáo trình trên lớp ko đủ đâu
							//hàm(&b) trong () gọi là tham chiếu
							//là 1 thứ còn mạnh hơn cả pointers. Chỉ có CPP trở lên(như python3) mới có trò này
{  int t = a ;	//tạo biến mồi t(t nghĩa là tạm thời) là chỗ nhét tạm giá trị a
   a = b;
   b = t;
}

//check an integer if it is even or odd
//hàm không đầu vào nhưng trả về.
int kiemTra(int n){
//	int value;
//	value = (n % 2 == 0 ? 1 : 0);
//	return value;
//	return value;
//	return value;
	return (n % 2 == 0);
}
//compute sum of even numbers
//hàm có đầu vào nhưng không trả về
void tinhTongSoChan(int a, int b){
	int count, sum, i;			
	if(a > b){
		swap(a, b);
//		a = a + b;	// ex: a = 7 b = 5, từ từ niệm
//		b = a - b;
//		a = a - b;	
	}
	sum = 0;
	count = 0;
	for( i = a; i <= b; i++){
		if(kiemTra(i) == 1){
			count++;
			sum += i;
		}
	}
	double ave =(double)sum / count;	//đặt biến này là ave nghĩa là average
	printf("The average of even numbers from %d to %d is: %.2f", a, b, ave);
}
//main function
int main(){
	int num1, num2;
	printf("Please input 2 integers: ");
	scanf("%d%d", &num1, &num2);
	tinhTongSoChan(num1, num2);
	getchar();
	getchar();
	return 0;
}
