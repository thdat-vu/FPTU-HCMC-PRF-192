int s;
//Dang 1: Khong tham so va ko tra ve gia tri
void inChuoi(){
	printf("Welcome to programing1\n");
}
//Dang 2: Khong nhan tham so va tra ve gia tri
int nhapSoNguyen(){
	int x;
	do{
		printf("nhap so nguyen: \n");
		scanf("%d",&x);
		
	}while(x>10);
	return x;
}
//Dang 3: co nhan tham so va co tra ve gia tri
void inBinhPhuong(int n){
	printf("n^2 = %d", n*n);
	return;
	
}
//Dang 4: co nham tham so va tra ve gia tri
int tinhTongCacSoChan(int n){
	int i, s;
	s = 0;
	for (i = 1; i <= n; i++){
		if (i % 2 == 0){
			s += i;
		}
	}//end for
	return s;
}