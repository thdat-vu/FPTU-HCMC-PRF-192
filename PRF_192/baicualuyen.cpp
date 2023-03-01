#include<stdio.h>
#include<math.h>



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

void inLonHonx(int*a, int x){
	int i;
	for (i = 0; i < n; i++){
		if(a[i] >= x){
			printf("%-5d", a[i])
		}else{
			printf("0");
			break;
		}
	}
}


void inNhoHonx(int*a, int x){
	int i;
	for (i = 0; i < n; i++){
		if(a[i] < x){
			printf("%-5d", a[i])
		}else{
			printf("0");
			break;
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
	printf("Moi nhap mang:");
	NhapMang(a, n);
	XuatMang(a, n);
	int x;
	printf("Tim x, moi nhap x");
	scanf("%d", &x);
	
	
	
}
