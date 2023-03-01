#include<stdio.h>
#include"CaseHandle.c"
//input : 1 chuỗi kí tự trong bảng mã ASCII 
//output : nói xem trong chuỗi đó có phải bao nhiêu nguyên âm (vowel : AEIOU) và phụ âm
//(consonants) trong bảng alphabet, nếu scan không phải thì là Others.
/*Nouns:  
inputted character 
      🡪 char ch
Number of vowels 
      🡪  int nVowels =0;
Number of consonants 
    🡪  int consonants =0;
Number of other characters 🡪  int nOthers =0;
Verb: 
Print out : Enter your string: 
 Do {
 Accept ch;  
Convert ch to its uppercase 

If ( ch>=’A’ and ch <=’Z’) {
     switch (ch) {
         case ‘A’ :
         case ‘E’ :
         case ‘I’ :
         case ‘O’ :
         case ‘U’ : nVowels ++; break;
         default:  nConsonants++;
     }
}
else nOthers = nOthers++;
    }
    While ( ch != ‘\n’);
    Print out nVowels;
    Print out nConsonants;
    Print out nOthers;

*/

int main(){
	char ch;
	characterCount(ch);
    getchar();
    return 0;
}