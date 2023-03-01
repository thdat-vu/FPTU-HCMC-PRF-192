#include<stdio.h>
#include<stdlib.h>
void NhapMang(int **b, int row, int col){
	int i, j;
	for(i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("b[%d][%d] : ",i, j);
			scanf("%d", &b[i][j]);
		}
	}
}
void XuatMang(int **b, int row, int col){
	int i, j;
	for(i = 0; i < row; i ++){		
		for(j = 0; j < col; j++){
			printf("%5d", b[i][j]);
		}
		printf("\n");				//Sau khi in xong 1 hang thi xuong dong
	}
}

void SapXep(int**b,int row,int col){
	int i, j, k = row * col;
	for(i = 0; i < k-1; i++){
		for(j = i+1; j < k; j++){
			if(b[i/col][i%col]>b[j/col][j%col]){
				int temp  = b[i/col][i%col];
				b[i/col][i%col] = b[j/col][j%col];
				b[j/col][j%col] = temp;
			}
		}
	}
}

void TimPhanTu(int **b, int x, int row, int col){
	int i, j, count = 0;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			if(b[i][j] == x){
				printf("x is located at b[%d][%d]\n", row, col);
				count++;
			}
		}
	}
 	if (count == 0){
		printf("Not found!");
	}
}

void SapXepChanLe(int**b,int row,int col){
	int k, i, j;
	for(k = 0; k < row ; k++){
      for(i = 0; i < col - 1 ; i++){
      	for(j = col-1; j > i ; j--){
      		if(b[k][j] > b[k][j-1] && k % 2 != 0){
		        int temp = b[k][j];
		        b[k][j] = b[k][j-1];
		        b[k][j-1] = temp;
				}
			}
		}
    }
}
int main(){
	int** b;
	int row, col, x;
	printf("*******2-D Array*********\n");
	printf("Input number of row:");
	scanf("%d", &row);
	printf("\nInput number of collunm:");
	scanf("%d", &col);
	//Cap phat dong mang 2 chieu cap 1
	b = (int**)calloc(row, sizeof(int));
	int i;
	for (i = 0; i < col; i++){
        // Cap phat dong cho tung con tro cap 1
        b[i] = (int*)calloc(col, sizeof(int));
    }
	NhapMang(b, row, col);
	XuatMang(b, row, col);
	fflush(stdin);
	SapXep(b, row, col);
	printf("\n2-D array after sorting: \n");
	XuatMang(b, row, col);
	printf("Find x. \n");
	printf("Input x, please: ");
	scanf("%d", &x);
	TimPhanTu(b, x, row, col);
	printf("\n2-D array after even-odd sorting: \n");
	SapXepChanLe(b, row, col);
	XuatMang(b, row, col);
	// giai phong tung` hang`
    
}
