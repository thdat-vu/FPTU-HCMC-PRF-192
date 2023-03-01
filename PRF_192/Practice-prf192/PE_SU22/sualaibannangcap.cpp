#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double area(int r){
	double area;
	if(r >= 0){
		return area = r * r * 3.14159;
	}else{
		return -1;
	}
}
int squareCheck(int x){	//check so chinh phuong
	return ((x * x == pow(x, 2))? 1 : 0);
} 
void perFectSquare(int x){	//in so chinh phuong
	if (squareCheck(x) == 1){
		printf("Perfect Square\n");
	}else{
		printf("Not a Perfect Square.\n");
	}
}

void inputArray(int* c,int n){
	int i;	//index trong con tro mang c
	for (i = 0; i < n; i++){
		printf("a[%d] : ", i);
		scanf("%d", &c[i]);	//c+i
	}
}

void printSquareArray(int* c,int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%-5d", c[i] * c[i]);
	}
}

int main(){
	double r;
	int a, n;
	int* c;
	printf("Practical Exam Summer 2022\n");
	printf("Calculating area of a circle\n");
	printf("Input a radius:\n");
	scanf("%lf", &r);
	printf("The area is %lf", area(r));
	printf("\nPerfect Square Check\n");
	printf("Input a number:");
	scanf("%d", &a);
	perFectSquare(a);
	printf("\nSquaring all index in an array\n");
	printf("Input number(s) of index:");
	scanf("%d", &n);
	c = (int*)calloc(n, sizeof(int));
	inputArray(c, n);
	printSquareArray(c, n);
	free(c);
}
