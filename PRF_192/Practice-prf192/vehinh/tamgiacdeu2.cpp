#include <iostream> 
#include <iomanip>
using namespace std; 
 
int main() {
   int n,i,j;
 
   n = 6;
 
   printf("Ve tam giac sao deu:\n");
   for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
         printf(" "); 
 
      for(j = i; j <= n; j++)
         printf("* ");
 
      printf("\n");
   }
 
   return 1;
}
