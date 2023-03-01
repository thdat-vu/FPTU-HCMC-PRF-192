#include<stdio.h>
#inlcude<string.h>
#include<conio.h>

void nhap(char names[][31], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("Nhap ten thu %d/%d:", i + 1, n);
		fflush(stdin);
		scanf("%30[^\n]", anme [i]);
		strupr(names[i];
	}
}

void xuat (char names[][31], int n){
	int i;
	for (i = 0; i < n; i++) puts(names[i]);
	
}

//bubble sort

void sapxep(char names[][31], int n){
	int i, j;
	char t[31];	//bien hoan vi
	for (i = 0; i < n - 1; i++){
		for (j = n - 1; j > i; j--){
			//ten sai < ten truoc
			if(strcmp(names[j], names[j - 1]) < 0){
				strcpy(names[j], names[j - 1]);
				strcpy(names[j - 1], t);
			}
		}
	}
}

int main(){
	char names[10][31];
	int n = 10;
	nhap(names, n);
	xuat(names, n);
	printf("DS sau khi sap xep:");
	sapxep(names, n);
	getch();
	return 0;
}
