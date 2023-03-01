#include<stdio.h>
void getValue(int* a, int b, int *c, int d){
	*a += b;
	printf("%d\n",*a);
	a = &d;
	printf("%d\n",*a);
	*c = *a + b;
	printf("%d\n",*c);
	d = b + *c;
	printf("%d\n",d);
	b = *a + d;
	printf("%d\n",b);
}
main(){
	int x = 1, y = 2, z = 3, t = 4;
	getValue(&x, y , &z, t);
	printf("x = %d, y = %d, z = %d,t = %d", x , y ,z ,t);
}