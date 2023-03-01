#include<stdio.h>
void printf(int a, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int *a1 = (int*)calloc(5, sizeof(int));
	int *a2 = (int*)calloc(7, sizeof(int));
	int i;
	for (i = 0; i < 5; i++){
		a1[i] = 1;
	}
	for (i = 0; i < 7; i++){
		a2[i] = 2 * i + 1;
	}
	a1 = a2;
	printf(a1, 7);
	puts("");
	printf(a2, 5);
	getchar();
	return 0;
}
