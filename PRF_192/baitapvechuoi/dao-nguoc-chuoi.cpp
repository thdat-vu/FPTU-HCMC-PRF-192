#include<stdio.h>

int main() {
   char s1[] = "VietTuts.Vn";    // khai bao chuoi
   char s2[8];                // bien de giu chuoi dao nguoc
 
   int length = 0;	//bien nay de chay tu 0 den het do dai chuoi
   int i = 0;		
 
   // tinh do dai chuoi ban dau
   //chay tu dau chuoi den cuoi chuoi
   
   while(s1[length] != '\0') {
      length++;
   }
    
   printf("\nChuoi ban dau: ");
   printf("%s", s1);
   //in ra theo chieu dao nguoc thoi,    
   printf("\nChuoi theo chieu dao nguoc: ");
   for(i = --length; i>=0; i--)
      printf("%c", s1[i]);
 
   i = 0;
   //luu tru chuoi dao nguoc de lan sau con xai
   printf("\nLuu giu chuoi nay trong chuoi dao nguoc: ");
   while(length >= 0) {
      s2[length] = s1[i];
      length--;
      i++;
   }
 
   s1[i] = '\0';           // gia tri null, ket thuc chuoi
 
   printf("%s\n", s2);
 
   return 0;
}
