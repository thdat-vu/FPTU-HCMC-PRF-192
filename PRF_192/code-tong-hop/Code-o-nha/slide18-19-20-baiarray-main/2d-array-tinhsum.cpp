#include<stdio.h>
main(){
	int a[3][3], n, i , j, s;
	printf("nhap n = ");
	scanf("%d", &n);
	for (i = 0; i < n; i++){	//dong
		for(j = 0; j < n; j++){	//cot
			printf("a[%d][%d] = ", i , j);
			scanf("%d", &a[i][j]);
		}
	}
	//-------------------------------
	printf("mang a : \n");
	for(i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%5d", a[i][j]);
		}//het 1 dong
		printf("\n");
	}
	//Tinh tongr cac phan tu trong mang
	s = 0;
	for (i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			s+=a[i][j];
		}
	}
	printf("s = %d", s);
	getchar();
}
