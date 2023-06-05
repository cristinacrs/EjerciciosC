#include <stdio.h>


int multiply(int n){
	
	int i;
	
	for(i=1; i <= 10; i++){
		printf("%d\n", i*n);
	}
	return 0;
}


int main(){
	
	int m;
	
	printf("Ingresa un numero: ");
	scanf("%d", &m);
	multiply(m);
	return 0;
}
