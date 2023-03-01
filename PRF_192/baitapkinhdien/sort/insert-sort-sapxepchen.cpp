#include <stdio.h>
#include <stdbool.h>
 
#define MAX 10
 
int arr[MAX] = {6, 7, 0, 2, 8, 1, 3, 9, 4, 5};
 
void insertionSort() {
    int valueToInsert;
    int holePosition;
    int i;
   
    // lap qua tat ca cac so
    for(i = 1; i < MAX; i++){ 
 
        // chon mot gia tri de chen
        valueToInsert = arr[i];
 
        // lua chon vi tri de chen
        holePosition = i;
 
        // kiem tra xem so lien truoc co lon hon gia tri duoc chen khong
        while (holePosition > 0 && arr[holePosition-1] > valueToInsert) {
            arr[holePosition] = arr[holePosition-1];
            holePosition--;
            printf(" Di chuyen phan tu : %d\n" , arr[holePosition]);
        }
 
        if(holePosition != i) {
            printf(" Chen phan tu : %d, tai vi tri : %d\n" , valueToInsert, holePosition);
            // chen phan tu tai vi tri chen 
            arr[holePosition] = valueToInsert;    
        }
 
        printf("Vong lap thu %d#:",i);
        display();
    }  
}
 
void display() {
    int i;
    printf("[");
 
    // Duyet qua tat ca phan tu
    for(i = 0; i < MAX; i++){
        printf("%d ", arr[i]);
    }
 
    printf("]\n");
}
 
main() {
    printf("Mang du lieu dau vao: ");
    display();
    printf("-----------------------------\n");
    insertionSort();
    printf("-----------------------------\n");
    printf("Mang sau khi da sap xep: ");
    display();
}
