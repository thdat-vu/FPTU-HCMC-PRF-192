#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* lTrim (char s[]){
	int i = 0;
	while (s[i] == ' '){	// phan tu s[i] con la 2 khoang cach
		i++;
	}
	if (i > 0){
		strcpy(&s[0], &s[i]);	
	}
	return 0;
}
char* rTrim (char s[]){
	int i = strlen(s) - 1;	//duyet tu ben phai duyet qua trai
	while (s[i] == ' '){
		i--;
	}
	s[i + 1] = '\0';		//NULL
	return s;
}
char* trim (char* s){
//	rTrim(lTrim(s));
	char *ptr = strstr(s,"  ");
	while (ptr != NULL){	//cho den khi con tro de duyet chuoi nhan
	//thay con 2 khoang trang
		strcpy(ptr, ptr + 1);	// hay xoa 1 khoang trang
		ptr = strstr(s,"  ");	//tiep tuc la con tro tim kiem 2 khoang trang
	}
	return s;
}
char* nameStr(char s[]){
	trim(s);	//xoa het khoang cach thua
	strlwr(s);	//doi thanh ki tu thuong het
	int L = strlen(s);	//l = do dai chuoi^~
	int i;
	for (i = 0; i < L; i++){
		if (i == 0 || (i > 0 && s[i - 1] == ' ')){		//neu la ki tu dau tien
		// va la ki tu co vi tri > 0 nhung truoc no la khoang trang
			s[i] = toupper (s[i]);	// thi viet hoa len
		}
	}
	return s;
}

int main(){
	char s[21];
	printf("Enter string s1: ");
	gets(s);
	trim(s);
	printf("After extra blanks are remove:");
	puts(s);
	nameStr(s);
	printf("After convert it to a name:");
	puts(s);
	getchar();
	return 0;
	
}
