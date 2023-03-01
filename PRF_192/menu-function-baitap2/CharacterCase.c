#include<ctype.h>
#include<conio.h>

void printLowerCase(char ch1, char ch2){
    char c;
    if(ch1 > ch2){
        char t;
        t = ch1;
        ch1 = ch2;
        ch2 = t;
    }
    if (ch1 < 65 || ch1 >122 || ch2 < 65 || ch2 > 122){//vì sao lại có những dòng này??? //vì ASCII table'A' đến 'z' bắt đầu từ 65 đến 122.
    	printf("Input error! Please choose again and input 2 characters which are from 'A' to 'a'\n");
	}else {
	ch1 = tolower(ch1);//hàm tolower(biến) để chuyển nhanh giá trị chữ cái viết hoa sang viết thường
	ch2 = tolower(ch2);//nằm trong thư viện <ctype.h>
	printf("The list of character from %c to %c is: \n", ch1, ch2);
    for(c = ch1; c <= ch2; c++){
	    printf("\n %c \n", c);
		}	
	}	
}