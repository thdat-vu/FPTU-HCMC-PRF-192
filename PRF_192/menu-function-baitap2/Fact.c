long calFact(int n){
    if(n > 0 && n < 100){
        return n * calFact(n - 1);
    }else{
		return 1;
	}
}