#include<stdio.h>
  
const int DEC_10 = 10;
 
/**
 * Ham main
 */
int main() {
 int n;
    printf("Nhap so nguyen duong n = ");
    scanf("%d", &n);
    printf("Tong cac chu so cua %d la: %d", n, totalDigitsOfNumber(n));
}
 
/**
 * Tinh tong cac chu so cua mot so nguyen duong
 */
int totalDigitsOfNumber(int n) {
    int total = 0;
    do {
        total = total + n % DEC_10;
        n = n / DEC_10;
    } while (n > 0);
    return total;
}
