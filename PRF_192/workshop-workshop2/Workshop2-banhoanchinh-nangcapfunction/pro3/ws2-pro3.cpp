#include<stdio.h>
#include"CalUntilX.c"
int main(){
//input: x
//output: sum = cong cac x da nhap tu truoc
//Noun: x: int
/*Verb: Begin
calSumtillX(int x):
Begin.
do{
	print: input x;
	accept x;
	if(x!=0): sum +=x;
	
}while (x!=0)
End.
print: Tong cac so da nhap cho den khi nguoi dung nhap x = 0 la : return <- calSumtillX(x);
End.
*/



//khai bao bien 
int x;
printf("Tong cua cac so da nhap cho den khi nguoi dung nhap x = 0 la: %d",calSumtillX(x));
return 0;
}
