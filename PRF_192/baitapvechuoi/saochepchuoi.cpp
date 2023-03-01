#include<stdio.h>
#include<string.h>
 
int main() {
   char str1[100];
   char str2[100];
  
   printf("Nhap chuoi str1: ");
   gets(str1);
  
   strcpy(str2, str1);
   printf("\nChuoi sao chep la: %s", str2);
  
   return (0);
}
