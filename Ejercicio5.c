#include <stdio.h>

float perimetro(float lados, float longitud){
	
	float resultado = lados * longitud;
	return resultado;
}

int main(){
	
	
	float lados;
	float longitud;
	
	printf("Ingresa el numero de lados: ");
	scanf("%f", &lados);
	
	printf("Ingresa la longitud de los lados: ");
	scanf("%f", &longitud);
	
	printf("Perimetro calculado: %.3f", perimetro(lados,longitud));
	return 0;
}
