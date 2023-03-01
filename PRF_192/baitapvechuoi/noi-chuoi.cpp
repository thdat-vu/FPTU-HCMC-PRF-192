#include<stdio.h>
#include<string.h>
 
int main() {
   char str1[100];
   char str2[100];
   char str3[100];
   int len;
  
   printf("Nhap chuoi 1: ");
   gets(str1);
  
   printf("Nhap chuoi 2: ");
   gets(str2);
  
   strcpy(str3, str1);		//sao chep chuoi 1 vao chuoi 3
   strcat(str3, str2);		//noi chuoi 2 vao chuoi 3
   
  
   printf("\nNoi chuoi: %s", str3);
  
   return (0);
}
