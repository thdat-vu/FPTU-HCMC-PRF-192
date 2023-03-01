#include<stdio.h>
void Input(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", a + i); 	//&a[i]
	}
}

void PrintArray(int* a, int n){
	int i; 
	for (i = 0; i < n; i++){
		printf("5%d", a[i]);	//*(a + i)	
	}
	printf("\n");
}

int SumArray(int *a, int n){
	int i;
	int s;
	s = 0;
	for(i = 0; i < n; i++){
		s += a[i];	//*(a + i)
	}
	return s;
}
main(){
	int a[50];
	int i, n, s;
	n = (n > 50 ? 50 : n);
	//int a[] = {2, 1, 4,  5, 6};
	printf("Enter number of elements: ");
	scanf("%d", &n);
	Input(a, n);
	printf("Array a : \n");
	PrintArray(a, n);
	s = SumArray(a,n);
	printf("Sum of elements = %d", s);
	getchar();
}
