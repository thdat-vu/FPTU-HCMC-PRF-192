#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int a[100], b[100], c[100];
int n, n1, n2;

void nhapMang(int x[100], int &n){
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void tachMang(int x[100], int n, int x1[100], int &n_1,  int x2[100], int &n_2){
	int i1=0;  n_1=0;
	int i2=0;  n_2=0;
	for(int i=0; i<n; i++){
		if(x[i]%2==0){
			x1[i1]=x[i];
			i1++;
			n_1++;
		}else{
			x2[i2]=x[i];
			i2++;
			n_2++;
		}
	}
}







int main(){
	printf("-------\n");
	nhapMang(a, n);
	xuatMang(a, n);
	
	tachMang(a, n, b, n1, c, n2);
	xuatMang(b, n1);
	xuatMang(c, n2);

}
