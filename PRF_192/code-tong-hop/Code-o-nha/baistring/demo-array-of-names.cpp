void nhap(char names[][31], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("Nhap ten thu %d\n", i + 1, n);
		fflush(stdin);
		scanf("%30[^\n]", names[i]);
		strupr(name[i]);
		
	}
}

void xuat(char name[][31], int n){
	int i;
	for (i = 0; i < n; i++){
		puts(names[i]);
	}
}

//bubble sort - sap xep tang dan
void sapxep(char names[][31], int n){
	int i, j;
	char t[31];
	for (i = 0; i < n - 1 ; i++){
		for(i  = n - 1; j > i; j--){
			//ten sau < ten truoc
		}
		if (strcmp(name[j], name[j - 1]) < 0){
			strcpy(t, names[j]);
			strcpy (names[j], names[j - 1]);
			strpy(names[j - 1], t);
		}
	}
}
