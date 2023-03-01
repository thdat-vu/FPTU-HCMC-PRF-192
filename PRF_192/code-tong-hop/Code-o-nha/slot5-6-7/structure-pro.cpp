#include<stdio.h>
main(){
	int a, b;
	double x;
	//Step 1
	printf("Day la phan mem giai phuong trinh ax = b\n");
	printf("Nhap a va b : ");
	//Step 2
	scanf("%d %d", &a, &b);
	//Step 3
	if(a != 0){
			x = -(double)b/a;
			printf("Pt co nghiem x = %lf", x);
		
	}
	else if (a == 0){
		
				if (b == 0){
					printf("PT co vo so nghiem");
				}
				else if (b != 0){
					printf("PT vo nghiem.");
					
				}
	}
	getchar();
}