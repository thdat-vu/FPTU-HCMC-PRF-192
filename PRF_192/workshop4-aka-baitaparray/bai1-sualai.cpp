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

void ascSort(int *a, int n){
	int i, j;
	for( i = 1; i < n - 1; i = i +2 ){
		for( j = i + 2; j < n; j = j +2){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void descSort(int *a, int n){
	int i, j;
	for( i = 0; i < n - 1; i = i + 2){   
        for(j = i + 2; j < n; j = j + 2){
            if(a[i] < a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void SapXep(int*a,int n){
	int i;
	for (i = 0; i < n - 1; i++){
		if (i % 2 != 0){
			ascSort(a, n);
		}
		if (i % 2 == 0){
			descSort(a, n);
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
	SapXep(a, n);
	printf("\nAfter sorting: ");
	XuatMang(a, n);
	free(a);
}
