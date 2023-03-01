#include<ctype.h>	//import thư viện ctype để xài lệnh auto viết hoa kí tự thường bằng lệnh toupper() trong thư viện ctype.
void characterCount(char ch){
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
}