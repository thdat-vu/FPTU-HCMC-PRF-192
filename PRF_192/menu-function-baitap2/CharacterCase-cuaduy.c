char checkChar(char ch1, char ch2){
	printf("\nInput 2 characters: ");
	printf("\nc1: ");
	fflush(stdin);
	ch1= getchar();
	fflush(stdin);
	printf("c2: ");
	ch2= getchar();
	ch1 = tolower(ch1);
	ch2 = tolower(ch2);
    if(ch1 > ch2){
       ch1=ch1+ch2;
		ch2=ch1-ch2;
		ch1=ch1-ch2;
    }
    if (ch1 < 'a' || ch1 >'z' || ch2 < 'a' || ch2 > 'z'){
    	printf("Input error! Please choose again and input 2 characters which are from 'A' to 'a'\n");
	}else {
	printf("The list of characters from %c to %c is: \n", ch1, ch2);
    for(char c = ch1; c <= ch2; c++){
	    printf("%c |", c);
		}		
	}	
}