#include<stdio.h>
#include<stdlib.h>
void input(int* a, int *pn){
	*pn = 0;
	int x;
	do{
		printf("a[%d] = ", *pn);
		scanf("%d", &x);
		if(x != 0){
			a = (int*)realloc(a, sizeof(int)*(*pn + 1));	//ham doi kich thuoc cua calloc
			a[(*pn)++] = x;
		}
	}while (x != 0);
}
void print(int* a, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%-5d", a[i]);
	}
}

int main(){
	int *a;
	int i, n;
	a = (int*)calloc(1, sizeof(int));
	input(a, &n);
	print(a, n);
	getchar();
	return 0;
}
