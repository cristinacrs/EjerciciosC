#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int numero;
	printf("Ingresa un numero: ");
	scanf("%d", &numero);
	
	
	if( numero % 2 == 0 ){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
	
	return 0;
}
