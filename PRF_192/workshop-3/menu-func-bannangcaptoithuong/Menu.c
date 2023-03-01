/*
Menu.c
Start
do{
	accept choice:
	case (choice): 1 to 4: Function 1 -> 4
	5 : Quit.
}until choice == 5.
End
*/

int menu(){
	int op;
	printf("\nWelcome to My Math Menu\n");
    printf("1. Calculating list of Prime Numbers.\n");
    printf("2. Computing average the given list of Prime Numbers.\n");
    printf("3. Print list of lower case characters.\n");
    printf("4. Calculating fact numbers.\n");
    printf("5. Quit\n");
    printf("So, what would you choose? \n");
    scanf("%d", &op);
    return op;
}