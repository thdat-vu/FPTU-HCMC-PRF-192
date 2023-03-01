#include<stdio.h>
#include<stdlib.h>
void NhapMang(int *a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int *a, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%-5d", a[i]);
	}
}
void ViTriChan(int *a, int n){
	int i;
	printf("\nThe even position(s):");
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			printf("a[%d] = %d\t",i, a[i]);
		}
	}
}
int TinhTong(int *a, int n){
	int i, sum = 0;
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			sum += a[i];
		}
	}
	return sum;
}

int DemTanXuat(int* a, int n, int x){
	int i, count = 0;
	for (i = 0; i < n; i++){
		if(a[i] == x){
			count++;
		}
	}
	return count;
}
void XuatTanSuat(int* a, int n, int x){
	if(DemTanXuat(a, n, x) == 0){
		printf("Does not exit!");
	}else{
		printf("%d exists %d time(s)", x, DemTanXuat(a, n, x));
	}
}
void swap(int c, int b){
	int t = c;
	c = b;
	b = t;
}
void SapXep(int* a, int n){
	int i;
	for(i = 0; i < n; i++){
		int min = a[i];
		if(i % 2 == 0){
			if (min > a[i + 1]){
				swap (a[i], a[i + 1]);
			}
		}
	}
}

int main(){
	int *a;
	int n;
	printf("--------Handling 1D array------\n");
	printf("How many index(s) do you want ?\n");
	scanf("%d", &n);
	a = (int*)calloc(n, sizeof(int));
	NhapMang(a, n);
	printf("The array: \t");
	XuatMang(a, n);
	ViTriChan(a, n);
	printf("\nSum of even position(s): %d ",TinhTong(a, n));
	printf("\nRefrequence counting of x.");
	int x;
	printf("\nInput x: ");
	scanf("%d", &x);
	XuatTanSuat(a, n, x);
	printf("\n");
	SapXep(a, n);
	printf("After sorting: ");
	XuatMang(a, n);
	free(a);
}
