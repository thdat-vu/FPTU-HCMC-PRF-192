#include<stdio.h>
int main(){

char ch1, ch2, c;
int d;
printf("Input c1 and c2: \n");
scanf("%c%c", &ch1, &ch2);
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
printf("The differrence of ch1 and ch2: %d", d);
//in tat cac cac ki tu tu` ch1 den ch2
for(c == ch1; c <= ch2; c++){
	printf("%c : %d, %o, %x\n",c , c, c, c);
	}
return 0;
}