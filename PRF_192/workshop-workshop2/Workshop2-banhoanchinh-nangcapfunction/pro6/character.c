swapCharacter(char ch1, char ch2){
	char t;
    t = ch1;
    ch1 = ch2;
    ch2 = t;
}
void characterPrint(char ch1, char ch2){
	if(ch1 > ch2){
	    swapCharacter(ch1, ch2);
	}
	int d;
	d = ch2 - ch1;
	printf("The differrence between ch1 and ch2: %d\n", d);
	//in tat cac cac ki tu tu` ch1 den ch2
	char c;
	for(c = ch1; c <= ch2; c++){
		printf("%c : %d, %o, %x\n",c , c, c, c);
		}
}