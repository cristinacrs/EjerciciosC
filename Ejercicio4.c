#include <stdio.h>


int multiply(int n){
	
	int i;
	
	for(i=1; i <= 10; i++){
		printf("%d\n", i*n);
	}
	return 0;
}


int main(){
	multiply(8);
	return 0;
}
