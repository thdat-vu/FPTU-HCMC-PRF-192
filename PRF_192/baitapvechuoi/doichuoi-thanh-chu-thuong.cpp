#include<stdio.h>
#include<string.h>

int main() {
   char string[100];
 
   printf("Nhap chuoi bat ky: ");
   gets(string);
 
   strlwr(string);
   printf("Chuoi chu hoa la: %s", string);
 
   return (0);
}
