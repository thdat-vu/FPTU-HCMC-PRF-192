//para_Arr_demo.c
#include<stdio.h>
#include<string.h>
//Read data in a file to 3 arrays
void readFile(char* fname, char names[][41], char adds[][41], int*marks, int *pn);
//sort the list based on mark descendingly
void sort(char names[][41], char adds[][41], int*marks, int n);
//print out the list to monitor
void print(char names[][41], char adds[][41], int*marks, int n);
//write the list to file
void writeFile(char* fname, char names[][41], char adds[][41], int*marks, int n);
int main(){
	char inFilename[] = "students.txt";
	char outFilename[] = "students_2.txt";
	//3 arrays represent a list of students
	char names[50][41]; char adds[50][41]; int marks[50];
	int n = 0;	//number of studdents
	//read data from file to arrays
	readFile(inFilename, names, adds, marks, &n);
	//sort the list based on mark descendingly
	sort(names, adds, marks, n);
	//Print out the result
	printf("Sorted List:\n");
	print(names, adds, marks, n);
	//write the list to file
	writeFile(outFilename, names, adds, marks, n);
	printf("\nResult file: %s\n", outFilename);
	getchar();
	return 0;
}

//Read data in a file to 3 arrays
void readFile(char* fname, char names[][41], char adds[][41], int*marks, int *pn){
	*pn = 0;	//reset number of elements
	FILE* f = fopen(fname, "r");
	if (f!=NULL){
		//While read successfully a whole data line
		while (fscanf(f, "%40[^;];%40[^;];%d%*c",names[*pn], adds[*pn], &marks[*pn])==3)
			(*pn)++;
		fclose(f);
	}
}// print out the list to monitor
void print(char names[][41], char adds[][41], int*marks, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%-20s%-41s%4d\n", names[i], adds[i], marks[i]);
	}
}

//sort the list based on mark descendingly
void sort(char names[][41], char adds[][41], int*marks, int n){
	int i, j;
	for (i = 0; i < n -1; i++)
		for(j = n - 1; j > i; j--)
			if(marks[j] > marks[j-1]){
				//swap array names
				char tName[41];
				strcpy(tName, names[j]);
				strcpy(names[j], names[j-1]);
				strcpy(names[j-1], tName);
				//swap array addss
				char tAdd[41];
				strcpy(tAdd, adds[j]);
				strcpy(adds[j], adds[j-1]);
				strcpy(adds[j-1], tAdd);
				//swap array marks
				int tMark = marks[j];
				marks[j] = marks[j-1];
				marks[j-1] = tMark;
			}
}

//Write the list to file
void writeFile(char* fname, char names[][41], char adds[][41], int*marks, int n){
	FILE* f = fopen (fname, "w");
	int i;
	for (i = 0; i < n; i++){
		fprintf(f, "%s;%s;%d\n", names[i], adds[i], marks[i]);
	
	}
	fclose(f);
}
