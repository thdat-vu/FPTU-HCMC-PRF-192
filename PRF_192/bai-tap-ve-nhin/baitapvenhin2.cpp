#include<stdio.h>
/*
noun:
input: n -> int;
sum = 0 -> float
i -> float;
verbs:
step 1: accept n;
step 2: loop for:
		start -> i = 1;
		end -> i <= n;
		step -> i<-i + 1;
calculating : sum -> sum + 1/i;
step 3: print out sum = (1 )
loop for:
start -> i = 2;     Because 1/2 makes senses.
end -> i <= n;
step -> i + 1;
calculating: print out ( + 1/i);
print out : sum -> sum.

-------------
test case:
n = 5;
n = 0;

*/

int main(){
    int n; 
    float sum = 0, i;       //Vì sao lại để i là float ???????
    //step 1
    printf("Please input any number: \n");
    scanf("%d", &n);
    //step 2
    for(i = 1; i <= n; i++)
        sum += (float)1/i;         //Nếu để i là int thì dạng 1/i
                            //là lấy int / float = int
                            //máy sẽ hiểu là kiểu dữ liệu cuối cùng muốn đưa ra 
                            //chắc chắn là int và bỏ sạch phần thập phân.
                            //ex:int i = 2-> 1/2 = 0.000000 trong khi đáng nhẽ phải là 0.500000
                            //mất 2 tiếng debug + 2 tiếng lật slide ở chỗ mixing data.
    //step 3
    printf("Sum of 1");
    for(i = 2; i <= n; i++) //print trước đoạn "1 + " vì 1 + ko nên ở trong vòng lặp
                            //định dạng i là số thực ko lấy phần dư
        printf(" + 1/%.0f ", i);
    printf("is : %.5f", sum);
    getchar();
    return 0;
}