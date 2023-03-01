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

int wordCount(char str[], int length)
{
    int word = (str[0] != ' '), i;
    for (i = 0; i < length - 1; i++){
        if (str[i] == ' ' && str[i + 1] != ' '){//truoc dau cach roi ko phai la dau cach nua
            word++;
        }
    }
    return word;
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
	fflush(stdin);
	char str[100];
	printf("Words count\n");
	printf("\nPlease input a string:");
	scanf("%[^\n]",str);	//%[^\n] chap nhan chuoi co khoang trang ko tinh 'enter'
	int length = strlen(str);	
	printf("\nNumber of word(s) in  \"%s\" is %d", str, wordCount(str, length));
	printf("\nSquaring all indexes in an array\n");
	printf("Input number(s) of index:");
	scanf("%d", &n);
	c = (int*)calloc(n, sizeof(int));
	inputArray(c, n);
	printSquareArray(c, n);
	free(c);
	getchar();
}
