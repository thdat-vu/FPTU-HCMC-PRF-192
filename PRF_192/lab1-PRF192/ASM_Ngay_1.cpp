//Lab1

//input: chiều dài, chiều rộng hình chữ nhật
//output: diện tích và chu vi hình chữ nhật
//import thư viện
#include<stdio.h>		//standard input/output
#include<conio.h>		//console input/output

//bắt đầu vào chương trình từ hàm main:

int main(){
	//khai báo các biến và kiểu dữ liệu của các biến cần thiết: 
	//chiều dài, chiều rộng, 
	//chu vi, diện tích.
	float chieuDai, chieuRong, chuVi = 0, dienTich = 0;
	
	//cần đảm bảo chiều dài chiều rộng luôn > 0 mới tính.
	//giải pháp em chọn là dùm lệnh if: chỉ cần 1 trong 2 giá trị < 0 thì
	//kết thúc chương trình ngay.
	printf("Day la phan mem tinh toan chu vi, dien tich hinh chu nhat.\n");
	printf("Xin nhap du lieu tu ban phim\n");
	//bắt đầu nhập chiều dài hình chữ nhật
	printf("Chieu dai = "); //dòng này không đè lệnh"%d, chieuDai" vì lúc này ta chưa nhập 
							//giá trị cho biến chieuDai thì biến sẽ on-off ngẫu nhiên giá trị
							//trong thanh RAM. Máy đọc không đúng giá trị người dùng yêu cầu.
	
	scanf("%f", &chieuDai); //nhập giá trị cho chieuDai và máy đang đọc giá trị chieuDai
							//ở địa chỉ của chieuDai trên thanh RAM.
	
	printf("Chieu rong = "); //dòng này không đè lệnh"%d, chieuRong" vì lúc này ta chưa nhập 
							//giá trị cho biến chieuDai thì biến sẽ on-off ngẫu nhiên giá trị
							//trong thanh RAM. Máy đọc không đúng giá trị người dùng yêu cầu.
	
	scanf("%f", &chieuRong); //nhập giá trị cho chieuRong và máy đang đọc giá trị chieuDai
							//ở địa chỉ của chieuRong trên thanh RAM.
							
	if(chieuDai > 0 && chieuRong > 0){  //Nếu và chỉ nếu chiều dài, chiều rộng là giá trị dương.
		printf("-----------Beep boop boop beep------------\n");
		printf("        Thong tin hinh chu nhat: \n");
	
	//công thức tính chu vi diện tích:
		chuVi = (chieuDai + chieuRong) * 2;
		dienTich = chieuDai * chieuRong;
	//phần này chỉ mới là phần máy đọc
	
	//xuất giá trị ra màn hình cho người dùng đọc được chu vi diện tích
		printf("Chu vi = %0.2f\n", chuVi);			//in ra giá trị của chu vi kiểu só thực 2 đơn vị phần thập phân
		printf("Dien tich = %0.2f\n", dienTich);	//in ra giá trị của diện tích kiểu số thực 2 đơn vị phần thập phân 
	}
	else{
		printf("Chieu dai hoac chieu rong ban nhap la so am.\n");
		printf("Vui long khoi dong lai chuong trinh va nhap lai gia tri dung\n");
	}
	
	printf("Cam on ban vi da su dung phan mem.\n");
	printf("Tai khoan momo ung ho nha phat trien: 077########82");
	getch();
	
}
