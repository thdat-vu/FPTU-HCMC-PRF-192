#include <stdio.h>
int main()
{ 
  int num1, num2;
    do{
        printf("Nhap hai gia tri cua hai so nguyen:");
        scanf("%d%d",&num1, &num2);
        
        int t = num1;
    //t la gia tri tam thoi
    //hoan doi x va y thong qua t
        num1 = num2;
        num2 = t;
        printf("Hoan doi hai so:%d, %d\n", num1, num2);
      }
	while (num1 != 0 && num1 != 0);
	//chi khi nao nhan num1 hoac num 2 = 0 thi moi ket thuc vong lap.
	getchar();
	return 0;
}

	
