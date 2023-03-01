#include<stdio.h>
int main(){
//input: x
//output: sum = cong cac x da nhap tu truoc
//Noun: x: int
/*Verb: do{
	print: input x;
	accept x;
	if(x!=0): sum +=x;
	
}while (x!=0)
print: Tong cac so da nhap cho den khi nguoi dung nhap x = 0 la : sum
*/



//khai bao bien 
int x;
int sum = 0;
printf("Vui long nhap x:");

do//thực thi trước kiểm sau
{
    scanf("%d", &x);//accept x
    if(x != 0){sum = sum + x;}//kiểm tra xem x có phải == 0 không??
    //nếu không phải thì sum + x
    
} while (x != 0);//nếu x vẫn >< 0 thì bắt đầu lại vòng lặp.

printf("Tong cua cac so da nhap cho den khi nguoi dung nhap x = 0 la: %d", sum);
return 0;
}
