#include <iostream> 
#include <iomanip>
using namespace std;
 
int main() {
   int arr[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
   int even[11], odd[11];
   int i, e, d;
    
   e = d = 0;
    
   for(i = 0; i < 11; i++) {
      if(arr[i] % 2 == 0) {
         even[e] = arr[i];
         e++;
      }else {
         odd[d] = arr[i];
         d++;
      }
   }
   cout << "Chia mot mang thanh hai mang trong C:\n\n";   
   cout << "Mang ban dau -> ";
   for(i = 0; i < 11; i++) {
      cout << arr[i] << " ";
   }
        
   cout << "\nMang chan -> ";
   for(i = 0; i < e; i++) {
      cout << even[i] << " ";
   }
    
   cout << "\nMang le -> ";
   for(i = 0; i < d; i++) {
      cout << odd[i] << " ";
   }
   cout << endl;
    
   return 0;
}

