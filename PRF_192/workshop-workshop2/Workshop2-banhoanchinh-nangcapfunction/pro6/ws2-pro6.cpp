#include<stdio.h>
#include"ascii-print.c"
//input : code char;
//output: ASCII table : 0 -> 255.
/*
Begin
  For each code = 0 to 255
   {    Print out (“%c : %d, %o, %X\n”, code, code, code, code);
        If (code !=0 && code %20==0) getchar(); 
   }
End.
*/

int main(){
	printascii();
	getchar();
}
