#include<stdio.h>
int main(){
	int s = 0, i = 1;
	int n;
	printf("Nhap tu ban phim: \n");
	scanf("%d", &n);
	while (i <= n){
		s += i;
		i++;
				
	}
	/*
	i = 1;
	do{
		s = s+i;
		i++;
	}while(i<n);
	*/
	//----------------------
	/* 
	for ( i = 1 ; i <= n; i++){
	s = s + i;
}
	
	
	*/
	printf("s = %d", s);
	getchar();
	return 0;
	
}