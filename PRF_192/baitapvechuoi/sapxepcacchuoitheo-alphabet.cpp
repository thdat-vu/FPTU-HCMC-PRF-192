/*
Sap xep cac chuoi theo thu tu chu cai
*/
#include <stdio.h>
#include <string.h>

int main() {
   	char s[4][1000];
   	char t[100];
   	int i;
   	int size = 4;
 
   	printf("\nNhap 4 chuoi bat ky: \n");
   	for (i = 0; i < size; i++) {
      	scanf("%s[^\n]", s[i]);
   	}
   	
	
	// sap xep chuoi
   	for (i = 1; i < size; i++) {
     	if (strcmp(s[i - 1], s[i]) > 0) {
            strcpy(t, s[i - 1]);
            strcpy(s[i - 1], s[i]);
            strcpy(s[i], t);
     	}
   	}
 
   	printf("\nSap xep thu tu cua cac chuoi:");
   	for (i = 0; i < size; i++) {
      	printf("\n%s", s[i]);
   	}
   	return(0);
}
