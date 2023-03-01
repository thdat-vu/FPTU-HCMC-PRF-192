#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    char c;
    scanf("%d%*c", &n, &c);
    c = getchar();
    printf("%d, %c\n", n ,c);
    system("pause");
}