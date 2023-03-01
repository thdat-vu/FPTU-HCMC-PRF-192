#include<stdio.h>
  
int main() {
    char name[50];
    // doc chuoi tu ban phim
    printf("Nhap chuoi: ");
    gets(name);
    // hien thi chuoi
    printf("Chuoi ban nhap la: %s", name);
    return 0;
}
