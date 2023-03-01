#include<stdio.h>
#include<string.h>
int main(){
	char s1[] = "hoa anh dau no";
	char s3[] = "oa";
	char *ptr = strstr(s1, s3);
	puts(ptr);
	printf("%d", ptr);
}
