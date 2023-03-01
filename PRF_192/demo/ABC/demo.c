#include<stdio.h>
#include"mycode.c"
main(){
	int n, s, x;
	inChuoi();
	n = nhapSoNguyen();
	inBinhPhuong(n);
	s = tinhTongCacSoChan(n);
	printf("s = %d", s);
	getchar();
}