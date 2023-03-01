#include <stdio.h>
int main()
{ 
  int x,y;
    do{
        printf("Nhap hai gia tri cua hai so nguyen:");
        scanf("%d,%d",&x, &y);
        fflush(stdin);
        int t=x;
    //t la gia tri tam thoi
    //hoan doi x va y thong qua t
        x=y;
        y=t;
        printf("Hoan doi hai so:%d, %d\n",x,y);
      }
	while (x!=0 && y!=0);
	getchar();
	return 0;
}

	
