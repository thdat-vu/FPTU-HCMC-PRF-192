#include<stdio.h>
#include<conio.h>
void WriteFile(FILE *f){
	char c;
	printf("Nhap du lieu: \n");
	do{
		c = getchar();
		fputc(c,f);
		
	}while (c!= '\n');
	fclose(f);
}

void ReadFile(FILE *f){
	char c;
	while(feof(f)==0){
		c = fgetc(f);
		printf("%c", c);
	}
	fclose(f);
}
main(){
	char fileName[] = "d:\\data.txt";
	char c;
	FILE *f;
	f = fopen(fileName,"wt");
	WriteFile(f);
	getch();
	printf("-------------------------");
	f = fopen(fileName,"rt");
	ReadFile(f);
}
