#include <stdio.h>
#include <string.h>

int countFrequency (char*source, char*subStr){
	int count=0;
	int subL= strlen(subStr);//tinh do dai chuoi con
	char*ptr= strstr(source,subStr);
	while(ptr!=NULL){
		if(ptr!=NULL) count++;
		strcpy(ptr,ptr+subL); //xoa chuoi con sau khi tim
		ptr= strstr(source,subStr);
	}
	return count;
}
int main(){
	char S[80];
	char subStr[21];
	int count;
	printf("Nhap chuoi: ");
	gets(S);
	printf("Nhap tu can tim: ");
	gets(subStr);
	
	count= countFrequency(S,subStr);
	printf("Tu (%s) xuat hien %d lan",subStr ,count);
	return 0;
}

