#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dia;
	printf("Ingresa un numero del 1 al 7 para determinar el dia de la semana: \n");
	scanf("%d", &dia);
	
	switch (dia) {
    case 1:
      printf("El dia es: Lunes");
      break;
    case 2:
      printf("El dia es: Martes");
      break;
    case 3:
      printf("El dia es: Miercoles");
      break;
    case 4:
      printf("El dia es: Jueves");
      break;
    case 5:
      printf("El dia es: Viernes");
      break;
    case 6:
      printf("El dia es: Sabado");
      break;
    case 7:
      printf("El dia es: Domingo");
      break;
  }
	return 0;
}
