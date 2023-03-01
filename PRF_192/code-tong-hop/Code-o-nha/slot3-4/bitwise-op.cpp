#include<stdio.h>
int main(){
	short n = 12, m = 8, t = 2, k = -1;
	//n=12:   0000 0000 0000 1100
	//m= 8:   0000 0000 0000 1000

	printf("%d, %d, %d\n", n&m, n|m, n^m);
	printf("%d, %d\n", n << 1, n << t);
	printf("n = %d\n", n);
	printf("%d, %d\n", n >> 1, k >> t);
	printf("%d\n", ~t);
	
	getchar();
	
	
	//C:\Program Files (x86)\Embarcadero\Dev-Cpp6-3\TDM-GCC-64\bin
	return 0;
	
	}