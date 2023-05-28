#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	
	srand(time(NULL));
	int i, n;
	
	int randomNumbers[10];
	
	for(i=0; i<=10; i++){
		n = rand()% 25;
		
		randomNumbers[i] = n;
	}
	
	printf("Arreglo aleatorio: ");
	for (i = 0; i <= 10;i++) {
  		printf("%d ", randomNumbers[i]);
  		if(i ==10){
  			printf("\n");
		}
	}
	
	
	int menor = randomNumbers[0];
	
	for(i=0; i<= 10; i++){
		if(menor > randomNumbers[i]){
			menor = randomNumbers[i];

		}
	}
	
	printf("Menor: %d \n", menor);
	
	int mayor = randomNumbers[0];
	
	for(i=0; i<= 10; i++){
		if(mayor < randomNumbers[i]){
			mayor = randomNumbers[i];

		}
	}
	
	printf("Mayor: %d \n", mayor);
	
	


   return 0;
}
