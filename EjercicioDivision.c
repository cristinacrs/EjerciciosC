#include <stdio.h>

int main(){
	
	float a,b;
	float resultado;
	
	printf("Ingresa el dividendo: ");
	scanf("%f", &a);
	printf("Ingresa el divisor: ");
	scanf("%f", &b);

	
	if(b==0){
		printf("El resultado es indeterminado");
	}else{
		resultado = a/b;
		printf("El resultado es: %f", resultado);
	}
	
}
