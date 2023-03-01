//compute sum of even numbers
//hàm có đầu vào nhưng không trả về
void tinhTongSoChan(int a, int b){
	int count, sum, i;			
	if(a > b){
		swap(a, b);
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
	printf("The average of even number from %d to %d is: %.2f", a, b, ave);
}