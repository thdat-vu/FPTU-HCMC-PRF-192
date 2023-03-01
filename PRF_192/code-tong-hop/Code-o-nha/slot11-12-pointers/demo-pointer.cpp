#include<stdio.h>
main(){
	int x = 10;
	int y = 5;
	printf("address x = %u, x = %d\n", &x, x);
	printf("address y = %u, y = %d\n", &y, y);
	
	int *p;
	printf("address p = %u, value: p = %d, *p = %d \n", &p, p, *p);
	
	p = &x;
	printf("address p = %u, value: p = %d, *p = %d \n", &p, p, *p);
	*p = 100;
	printf("x = %d\n", x);
	--p;
	printf("address p = %u , address of p - 1 = %u, value of *(p - 1) = %d\n", &p, p, *p);
	p = &y;
	*p = 200;//p--;
	printf("y = %d\n", y);
	printf("address p = %u, address of p + 1 = %u, value of *(p + 1) = %d\n", &p, p + 1, *(p + 1));
	
	getchar();
	
}