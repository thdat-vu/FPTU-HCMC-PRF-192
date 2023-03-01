int calSumtillX(int x){
	int sum = 0;
	printf("Vui long nhap x:");
	do{//thực thi trước kiểm sau{
	    scanf("%d", &x);//accept x
	    if(x != 0){
		sum = sum + x;
		}//kiểm tra xem x có phải == 0 không??
	    //nếu không phải thì sum + x
	} while (x != 0);//nếu x vẫn >< 0 thì bắt đầu lại vòng lặp.
	return sum;
}