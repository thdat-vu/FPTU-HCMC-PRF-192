/*
Dao nguoc chuoi
*/
#include <stdio.h>
#include <string.h>
 
int main() {
   	char s1[] = "VietTuts.Vn";    // khai bao chuoi
   	char s2[8];                // bien de giu chuoi dao nguoc
 
   	int L1 = strlen(s1);
   	int i = 0;
 
    
   	printf("\nChuoi ban dau: ");
   	printf("%s", s1);
       
   	printf("\nChuoi theo chieu dao nguoc: ");
   	for(i = --L1; i>=0; i--){
      	printf("%c", s1[i]);
    }
 
   	i = 0;
   	printf("\nLuu giu chuoi nay trong chuoi dao nguoc: ");
   	while(L1 >= 0) {
      	s2[L1] = s1[i];
      	L1--;
      	i++;
   	}
 
   	s1[i] = '\0';           // gia tri null, ket thuc chuoi
 
   	printf("%s\n", s2);
 
   	return 0;
}
