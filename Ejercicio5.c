#include <stdio.h>

float perimetro(int lados, float longitud){
	
	float resultado = lados * longitud;
	return resultado;
}

int main(){
	
	printf("Perimetro calculado: %.3f", perimetro(6,0.9));
	return 0;
}
