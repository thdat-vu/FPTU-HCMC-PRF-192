#include <stdio.h>
#include <string.h>
int main()
{
	char s1[21];
	char s2[21];
	printf("Nhap chuoi 1:");
	gets(s1);
	printf("Nhap chuoi 2:");
	gets(s2);
	printf("Chieu dai cua chuoi 1: %d, chuoi 2: %d\n", strlen(s1), strlen(s2));
	printf("So sanh chuoi 1 voi chuoi 2: %d\n", strcmp(s1,s2));
	strupr(s1);
	printf("In hoa chuoi 1: %s\n",s1);
	strcat(s1,s2);
	printf("Sau khi noi chuoi 2 vao chuoi 1: %s\n",s1);
	char s3[10];
	printf("Nhap mot chuoi nho nho~ cua chuoi 1:");
	gets(s3);
	char* ptr = strstr(s1,s3);
	printf("Dia chi cua chuoi 1: %u\n",s1);
	printf("Dia chi cua chuoi 3: %u\n",s3);
	printf("Dia chi cua chuoi nho nho~: %u\n", ptr);
	getchar();
	return 0;
}
