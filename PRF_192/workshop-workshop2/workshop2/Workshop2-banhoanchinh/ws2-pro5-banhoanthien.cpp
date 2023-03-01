#include<stdio.h>
#include<ctype.h>   //import thư viện ctype để xài lệnh auto viết hoa kí tự thường bằng lệnh toupper() trong thư viện ctype.
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
    int nVowels = 0 , nConsonants = 0, nOthers = 0;
    printf("Enter your string, please: \n");

    //kiểm điều kiện theo trình tự sau:
    //xem có phải là nằm  từ 'A' đến 'Z' không??
    //Nếu phải xếp là nguyên âm hay phụ âm
    //Nếu không phải là 'A' đến 'Z' thì tính nó như 1 kí tự khác.
    //Cho là other.

do{
        ch = getchar(); //sử dụng vòng lặp do..while kêt hợp với hàm getchar() để đọc từng kí tự một trong string.
                        //người dùng sẽ nhập các ký tự cho đến khi nhấn Enter thì vòng lặp do..while sẽ thoát
                        //ta phải nên hiểu trong bảng mã ASCII "ENTER" cũng là 1 kí tự.
        ch = toupper(ch); //lệnh để nếu nhập alphabet là kí tự thường
                        //thì nó auto biến thành kí tự in hoa.

    
        if ((ch >= 'A') && (ch <= 'Z')){
                switch(ch){
                        case 'A': //đây là cách gộp các case thầy đã chỉ.
                        case 'E': 
                        case 'I': 
                        case 'O': 
                        case 'U': nVowels++;
                                break;
                        default: nConsonants++; //thì case default này là cho trường hợp nó vẫn là alphabet nhưng nó không phải 5 nguyên âm thì sẽ xử lí là tính nó như 1 phụ âm.
                }
        }else nOthers++;// kí tự khác ngoài alphabet.
}
    while(ch != '\n'); //đây là thứ máy sẽ hiểu là kí tự ENTER.
    //Những gì người dùng nhập trước khi nhấn ENTER thì máy nhận hết.
    //Đến khi nhấn ENTER thì máy mới chịu kết thúc vòng lặp.

    printf("Numbers of Vowels: %d\n", nVowels);
    printf("Numbers of Consonants: %d\n", nConsonants);
    printf("Numbers of Others: %d\n", nOthers - 1);
                        //có 1 lỗ hổng trong tính toán là
                        //ENTER cũng là kí tự nên nó sẽ tính là kí tự other
                        //Vậy đây là cách tà đạo là trừ kí tự ENTER đi.
    getchar();
    return 0;

}