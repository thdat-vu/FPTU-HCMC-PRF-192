#include <stdio.h>
#include <stdbool.h>
 
#define MAX 10
 
int arr[MAX] = {6, 7, 0, 2, 8, 1, 3, 9, 4, 5};
 
void bubbleSort() {
    int temp;
    int i,j;
 
    bool swapped = false;
     
    // lap qua tat ca cac so
    for(i = 0; i < MAX-1; i++) { 
        swapped = false;
 
        // vong lap thu hai
        for(j = 0; j < MAX-1-i; j++) {
            printf("So sanh cac phan tu: [ %d, %d ] ", arr[j],arr[j+1]);
 
            // kiem xa xem so ke tiep co nho hon so hien tai hay khong
            // trao doi cac so. 
            // (Muc dich: lam noi bot (bubble) so lon nhat) 
 
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
 
                swapped = true;
                printf(" => trao doi [%d, %d]\n", arr[j], arr[j+1]);
            } else {
                printf(" => khong can trao doi\n");
            }
        }
 
        // neu khong can trao doi nua, tuc la 
        // mang da duoc sap xep va thoat khoi vong lap. 
        if(!swapped) {
            break;
        }
         
        printf("Vong lap thu %d#: ", (i+1));
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
 
main(){
    printf("Mang du lieu dau vao: ");
    display();
    printf("-----------------------------\n");
    bubbleSort();
    printf("-----------------------------\n");
    printf("\nMang sau khi da sap xep: ");
    display();
}
