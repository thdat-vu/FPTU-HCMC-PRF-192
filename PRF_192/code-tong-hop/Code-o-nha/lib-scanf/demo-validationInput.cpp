#include<stdio.h>
#include<stdlib.h>
int getValue(int min, int max){
        int value, keeptrying = 1, rc;
        char after;
        do{
            printf("Enter a whole number\n"
            "in the range [%d, %d]:" , min, max);
            rc = scanf("%d%c", &value, &after);
            if(rc == 0){
                printf("NO input accepted!\n\n");
                fflush(stdin);
            }else if (after != '\n'){
                printf("Trailing character!\n\n");
                fflush(stdin);

            }else if (value < min || value > max){
                printf("Out of range!\n\n");
                fflush(stdin);
            }else{
                keeptrying = 0;
            }
        }while (keeptrying == 1);
        return value;
    return value;
    }
int Square(int n){
    return n * n;

}
main(){
    int s, n;
    n = getValue(2, 10);
    s = Square(n);
    printf("%d ^2 = %d\n", n, s);
    system("pause");
}