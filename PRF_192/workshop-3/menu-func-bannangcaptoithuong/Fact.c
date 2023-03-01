/*
calFact(int n):
	if (n > 0 && n < 100) then {
			return <- n * calFact(n - 1)
		}else{
	      	return <- 1
		   }
	   }//end if
printFact(int n):
	if(calFact(n) == 1) then{
			if(n == 1) then {
				fact <- 1
				print out: fact 
			}else{
			print out: input erorr.
			}//end if
		}else{
			print out: calFact. 
		}
*/

unsigned long long calFact(int n) {
	if (n > 0 && n < 100) {
		return n * calFact(n - 1);
	}else{
      	return 1;
	   }
   }
void printFact(int n){
		if(calFact(n) == 1){
			if(n == 1){
				printf("Factorial of 1 is : 1\n");
			}else{
			printf("Input error! Please give me a number which is greater than 0 and less than 100!!!");
			}
		}else{
			printf("Factorial of %d is : %llu", n, calFact(n));	
		}
}