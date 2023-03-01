#include<stdio.h>
#include<conio.h>

int main (){
	char c = 'A';
	int i = 1; 
	long l = 1000;
	float f = 0.5f;
	double d = 12.809;
	printf("var c: at adrr: %u, value =%c, size %d\n", &c, c, sizeof(c));
	printf("var i: at adrr: %u, value =%d, size %d\n", &i, i, sizeof(i));
	printf("var l: at adrr: %u, value =%ld, size %d\n", &l, l, sizeof(l));
	printf("var f: at adrr: %u, value =%f, size %d\n", &f, f, sizeof(f));
	printf("var d: at adrr: %u, value =%lf, size %d\n", &d, d, sizeof(d));
	getch();
	//						so_nguyen_ko_dau	data_types	%decimal
	return 0;
}