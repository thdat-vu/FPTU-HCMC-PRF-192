#include <stdio.h>
#include <string.h>

int main(){
	char s[50];
	char temp;
	int i, j;
	printf("Nhap chuoi:");
	gets(s);
	printf("Truoc khi sap xep: %s", s);
	for (i = 0; i < strlen(s)-1;i++){
		for (j = i + 1; j < strlen(s); j++){
			if (s[i] > s[j]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("Sau khi sap xep : %s", s);
	return 0;
}
