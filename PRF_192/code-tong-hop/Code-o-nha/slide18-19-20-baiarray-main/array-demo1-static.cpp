//Array Parameter Demo
#include<stdio.h>
#define MAXN 100    //so max la` 100, 100 la hang so trong MAXN
// Prototypes
void input(int *a, int n);
int max(int a[], int n);
void print (int *a, int n);
void printEven (int *a, int n);
int main(){
    int a[MAXN];    //bien tinh cua 100 bien so nguyen
    int n;          
    int maxVal;
    do{
        printf("How many elements  which will be used 1..%d", MAXN);
        scanf("%d", &n);
    }
    while (n < 1 || n > MAXN);
    printf("Enter %d values of the arrays: \n",n);
    input (a, n);
    maxVal = max (a, n);
    printf ("Max value: %d\n", maxVal);
    printf ("\nInputed array:");
    print(a, n);
    printf("\nEven values in array:");
    printEven(a, n);
    while (getchar()!='\n');
    getchar();
    return 0;
}

void input (int *a, int n){
    //Use forward traversal, accept each value
    int i;
    for (i = 0; i < n; i++){
        scanf ("%d", &a[i]);
    }
}
int max(int a[], int n){
    int result = a[0];
    //Use forward traversal, accept each value
    int i;
    for (i = 1; i < n; i++){
        if (result < a[i]){
            result = a[i];
        }
    }
    return result;
}
//ban chat 2 thang nay chinh la duyet mang
//ham print va printEven do' dung ko ????
void print (int *a, int n){
    //Use forward traversal, accept each value
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
void printEven (int *a, int n){
    //Use forward traversal, accept each value
    int i;
    for (i = 0; i < n; i++){
        if (a[i] %2 == 0){
            printf("%d ", a[i]);
        }
    }
}
