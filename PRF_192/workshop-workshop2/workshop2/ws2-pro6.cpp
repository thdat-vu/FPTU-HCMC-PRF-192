#include<stdio.h>
char code;
int main(){
	for(code = 0; code <= 255; code++){
    	printf("%c: %d, %o, %x\n", code, code, code, code);
    	//character
    	//hệ 10 có dấu
    	//hệ bát phân có dấu
    	//hệ hex không dấu
    	if(code != 0 && code %20 == 0) getchar();
    //in 1 trang 20 dong` vi the nen moi
    //in xem thu tu chia duoc 20
    //thi tach thanh 1 cot
    //muon hien them thi phai nhan enter.
	}
}
