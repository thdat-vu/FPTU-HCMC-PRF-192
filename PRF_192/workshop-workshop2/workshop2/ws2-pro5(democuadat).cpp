#include<stdio.h>
#include<ctype.h>   //import thư viện ctype để xài luyện auto viết hoa kí tự thường bằng lệnh toupper() trong thư viện ctype.

//input : 1 chuỗi kí tự trong bảng mã ASCII 
//output : nói xem trong chuỗi đó có phải bao nhiêu nguyên âm (vowel : AEIOU) hay và phụ âm
//(consonants) trong bảng alphabet, nếu scan không phải thì là Others.

int main(){
    int nVowels = 0 , nConsonants = 0, nOthers = 0;
    char ch;
    
    scanf("%c", &ch);
    ch = toupper(ch);//lệnh auto biến kí tự thường thành in hoa
    //kiểm điều kiện theo trình tự sau:
    //xem có phải là nằm  từ 'A' đến 'Z' không??
    //Nếu phải xếp là nguyên âm hay phụ âm
    //Nếu không phải là 'A' đến 'Z' thì tính nó như 1 kí tự khác.
    //Cho là other(kí tự khác)
    if (ch >= 'A' && ch <= 'Z'){
        switch(ch){
            case 'A': nVowels++;
                    break;
            case 'E': nVowels++;
                    break;
            case 'I': nVowels++;
                    break;
            case 'O': nVowels++;
                    break;
            case 'U': nVowels++;
                    break;
            default: nConsonants++; //thì case default này là cho trường hợp nó vẫn là alphabet nhưng nó không phải 5 nguyên âm thì sẽ xử lí là tính nó như 1 phụ âm.
                    break;
        }
    }else{
        nOthers++;// kí tự khác ngoài alphabet.

    }
    printf("Numbers of Vowels: %d\n", nVowels);
    printf("Numbers of Consonants: %d\n", nConsonants);
    printf("Numbers of Others: %d\n", nOthers);
}
