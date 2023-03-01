#include<stdio.h>
#include<string.h>

long long int doDaiChuoi(char* s){
	return strlen(s);
}
int main(){
	char s[100];
	printf("Nhap chuoi:");
	gets(s);
	printf("%lld",doDaiChuoi(s));
	return 0;
}
