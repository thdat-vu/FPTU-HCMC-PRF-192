#include <iostream> 
#include <iomanip>
using namespace std; 
 
int main() {
   int n, i, j;
 
   n = 6;
 
   printf("Ve tam giac sao vuong can:\n");
   for(i = n; i >= 1; i--) {
      for(j = 1; j <= i; j++)
         printf("* ");
 
      printf("\n");
   }
    
   return 0;
}
