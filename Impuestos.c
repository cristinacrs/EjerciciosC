#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float precio, impuesto;
	int categoria;
	
	printf("\t CALCULO DE IMPUESTOS \n");
	
	printf("Los impuestos por categoria de producto son los siguientes: \n \n");
	
	printf("1. Medicina: 0%% \n");
	printf("2. Utiles escolares: 10%% \n");
	printf("3. Otros: 16%% \n \n");
	
	printf("Ingresa el precio del producto a calcular: ");
	scanf("%f", &precio);
	printf("Ingresa el numero de la categoria del producto: ");
	scanf("%d", &categoria);
	
	if(categoria == 1){
		
		printf("\nEl precio del producto es el mismo: $ %.3f", precio);
		
	}else if(categoria == 2){
		
		impuesto = precio * 0.10;
		precio = precio + impuesto;
		
		printf("\nEl precio del producto es: $ %.3f ", precio);
		
	}else if(categoria == 3){
		
		impuesto = precio * 0.16;
		precio = precio + impuesto;
		
		printf("\nEl precio del producto es: $ %.3f ", precio);
		
	}else{
		
		printf("\nCategoria no encontrada, seleciona una del 1 al 3");
		
	}
	
	
	
	
	return 0;
}
