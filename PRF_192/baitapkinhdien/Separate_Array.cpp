/*
Chia mot mang thanh 2 mang chan va le
*/
#include <stdio.h>

int main() {
   	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   	int even[10], odd[10];
   	int n=10;
   	
   	//chia mang
	int i;
   	int j=0, k=0;
   	for(i = 0; i < n; i++) {
		if(i%2==0) even[j++] = arr[i];
      	else odd[k++] = arr[i];
   	}
   	
	
	printf("Chia mot mang thanh hai mang trong C:\n\n");   
   	printf("Mang ban dau -> ");
   	for(i = 0; i < n; i++) {
      	printf(" %d", arr[i]);
   	}
        
   	printf("\nMang chan -> ");
   	for(i = 0; i < j; i++) {
      	printf(" %d", even[i]);   
   	}
    
   	printf("\nMang le -> ");
   	for(i = 0; i < k; i++) {
    	printf(" %d", odd[i]);   
   	}
  
   	return 0;
}
