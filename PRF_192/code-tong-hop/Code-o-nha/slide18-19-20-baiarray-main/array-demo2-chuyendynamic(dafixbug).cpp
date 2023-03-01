#include<stdio.h>
#include<stdlib.h>
void input(int *a, int *pn){
    *pn = 0;
    int x;
    do{
        printf("a[%d] = ", *pn);
        scanf("%d", &x);
        if (x != 0){
            a = (int*)realloc(a, sizeof(int) * (*pn+1));
            a[(*pn)++] = x;
        }
    }while (x != 0);
}
void print (int *a, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%-10d", a[i]);
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
void printEven (int *a, int n){
    //Use forward traversal, accept each value
    int i;
    for (i = 0; i < n; i++){
        if (a[i] %2 == 0){
            printf("%d ", a[i]);
        }
    }
}
int main(){
    int *a;
    int maxVal;
    int i, n;
    a = (int*)calloc(1, sizeof(int));
    input (a, &n);
    print (a, n);
    maxVal = max (a, n);
    printf ("Max value: %d\n", maxVal);
    printf ("\nInputed array:");
    print(a, n);
    printf("\nEven values in array:");
    printEven(a, n);
    while (getchar()!='\n');
}
