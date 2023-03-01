/**
 * Chuong tr�nh li?t k� t?t c? c�c s? thu?n ngh?ch c� 6 ch?a s?.
 * 
 * @author viettuts.vn
 */
 #include<stdio.h>
     
const int DEC_10 = 10;
int isThuanNghich(int n);
/**
 * main
 * 
 * @param args
 */
int main() {
    int count = 0, i;
    // in ra man hinh cac so thuan nghich co 6 chu so
    for (i = 100000; i < 1000000; i++) {
        if (isThuanNghich(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Tong cac so thuan nghich co 6 chu so la: %d", count);
}
 
/**
 * kiem tra so thuan nghich
 * 
 * @param n: so nguyen duong
 * @return 1: la so thuan nghich
 *         0: khong la so thuan nghich
 */
int isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    // phan tich n thanh mang cac chu so
    do {
        a[dem++] = (n % DEC_10);
        n = n / DEC_10;
    } while (n > 0);
    // kiem tra tinh thuan nghich
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}
