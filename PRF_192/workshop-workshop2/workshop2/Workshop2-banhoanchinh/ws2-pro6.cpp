#include<stdio.h>
//input : code char;
//output: ASCII table : 0 -> 255.
/*
Begin
  For each code = 0 to 255
   {    Print out (“%c : %d, %o, %X\n”, code, code, code, code);
        If (code !=0 && code %20==0) getchar(); 
   }
End.
*/

int main(){
int code;	//nen de dang int thay vi char
			//vi neu khong de int thi dieu kien for se vo nghia va bam
			//quai khong co diem dung
			//so 0 khac voi ki tu '0'
	for(code = 0; code <= 255; code++){
    	printf("\n%c: %d, %o, %x\n", code, code, code, code);
    	//character
    	//hệ 10 co dau
    	//he bat phan co dau
    	//he hex khong dau
    	if(code != 0 && code % 20 == 0) getchar();
    	//neu khong co getchar() se bi tran bo nho.
    //in 1 trang 20 dong` vi the nen moi
    //in xem thu tu chia duoc 20
    //thi tach thanh 1 cot
    //muon hien them thi phai nhan enter.
	}getchar();
	
}
