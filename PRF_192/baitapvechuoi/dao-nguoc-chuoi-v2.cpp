#include<stdio.h>
#include<string.h>
int main() {
   char s1[] = "VietTuts.Vn";    // khai bao chuoi
   char s2[8]; 
   
   int i = 0;
   int length = 0;
   while(s1[length] != '\0') {
      length++;
   }
   printf("\nLuu giu chuoi nay trong chuoi dao nguoc: ");
   while(length >= 0) {
      s2[length] = s1[i];
      length--;
      i++;
   }
   s1[i] = '\0';	// gia tri null, ket thuc chuoi
   printf("%s\n", s2);
 
   return 0;
}
