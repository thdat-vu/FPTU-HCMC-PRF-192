/**
 *  Chuong trinh liet ke cac so Fibonacci nho hon n la so nguyen to.
 *  
 * @author viettuts.vn
 */
#include<stdio.h>
 
/**
 * Ham main
 */
int main() {
 int n;
    printf("Nhap so nguyen duong = ");
    scanf("%d", &n);
    printf("Cac so fibonacci nho hon %d va la so nguyen to: ", n);
    int i = 0;
    while (fibonacci(i) < n) {
        int fi = fibonacci(i);
        if (isPrimeNumber(fi)) {
            printf("%d ", fi);
        }
        i++;
    }
}
 
/**
 * Tinh so fibonacci thu n
 * 
 * @param n: chi so cua day fibonacci tinh tu 0
 *           vd: F0 = 0, F1 = 1, F2 = 1, F3 = 2
 * @return so fibonacci thu n
 */
int fibonacci(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
 
/**
 * check so nguyen to
 * 
 * @author viettuts.vn
 * @param n: so nguyen duong
 * @return 1: la so nguyen so, 
 *         0: khong la so nguyen to
 */
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
