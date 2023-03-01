#include<stdio.h>

int main(){

char ch1, ch2, c;
int d;
printf("Input c1: \n");
scanf("%c", &ch1);
fflush(stdin);
printf("Input c2: \n");
scanf("%c", &ch2);
//neu lo ki tu 1 ma dung sau ki tu 2 
// thi doi cho tui no lai. t la bien trung gian
//de doi cho
if(ch1 > ch2){
    char t;
    t = ch1;
    ch1 = ch2;
    ch2 = t;
}
d = ch2 - ch1;
printf("The differrence between ch1 and ch2: %d\n", d);
//in tat cac cac ki tu tu` ch1 den ch2
for(c = ch1; c <= ch2; c++){
	printf("%c : %d, %o, %x\n",c , c, c, c);
	}
getchar();

return 0;
}