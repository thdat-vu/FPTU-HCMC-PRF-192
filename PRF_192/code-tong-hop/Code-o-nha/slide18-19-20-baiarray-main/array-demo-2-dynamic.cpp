#include<stdio.h>
#define MAXN 100    //so max la` 100, 100 la hang so trong MAXN
// Prototypes
void input(int *a, int *pn);    //nguoi dung ma nhap 0 ngay lap tuc dung nhap
int max(int a[], int n);
void print (int *a, int n);
void printEven (int *a, int n);
int main(){
    int a[MAXN];    //bien tinh cua 100 bien so nguyen
    int n;          
    int maxVal;
    do{
        printf("How many elements  which will be used 1..%d ", MAXN);
        scanf("%d", &n);
    }
    while (n < 1 || n > MAXN);
    printf("Enter %d values of the arrays: \n",n);
    input (a, &n);
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

void input (int *a, int *pn){
    *pn = 0;    //reset  the number of elements
    printf ("Enter maximum %d elementss, 0 for termination\n", MAXN);
    int x;
    do{
        scanf ("%d", &x);
        if (x != 0){
            a[(*pn)++] = x;
        }
    }while (x != 0 && *pn < MAXN);
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