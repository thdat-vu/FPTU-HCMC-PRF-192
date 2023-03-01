#include<stdio.h>
/*
nouns:
input: n -> int;
i -> int ;

output: uoc so -> %d;
verbs: 
step 1:	 
print out : nhap n;
accept n -> int;
loop do -while:
do 
{
 (n <= 0) ? print out " So no phai lon hon 0, vui long nhap lai": ;
 
}
while :(n <= 0)
{
i -> 1;
	for loop: 
	start : i -> 1;
	end : i <= n && n mod i = 0
	step : i + 1;
	calculating: print out : Cac uoc so cua so n la:, i;
	getchar();
	return 0;
	
---------------------------------
test case :
n = 0;
n = -3;
n = 6;
} 
*/

int main()
{
int i, n;
 do
  {
   printf("\nNhap n: ");
   scanf("%d", &n);
    if(n <= 0)
    {
     printf("\n So n phai lon hon 0, vui long nhap lai");
    }
  }
 while(n<=0);
    i = 1;
     for (i = 1;i <= n && n % i == 0;i++)
    {
      printf("\nCac uoc so cua so n la:%d", i);
    }
     /*while(i <= n)
    {
     if(n % i == 0)
       printf("\nCac uoc so cua so n la:%d", i);
       i++;
    }*/
}
