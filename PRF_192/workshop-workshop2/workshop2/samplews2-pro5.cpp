#include<stdio.h>
#include<ctype.h>
int main()
{ char ch;
  int nvowels = 0 ;
  int consonats =0;
  int nothers =0;
  printf(" Nhap ch:");
do { 
 ch = getchar();
 ch = toupper(ch);
 if ((ch>'A') && (ch<'Z')){
 switch(ch){
   case'A':
   case'E':
   case'I':
   case'O':
   case'U': nvowels ++ ;
   break;
  default: consonats ++ ;
}
} else nothers = nothers ++;
    }
    while ( ch != '\n');
    printf("Nguyen am :%d\n",nvowels);
    printf("Phu am :%d\n",consonats);
    printf("Con lai:%d\n",nothers);
 getchar();
 return 0;
}
